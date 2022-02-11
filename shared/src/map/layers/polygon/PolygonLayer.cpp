/*
 * Copyright (c) 2021 Ubique Innovation AG <https://www.ubique.ch>
 *
 *  This Source Code Form is subject to the terms of the Mozilla Public
 *  License, v. 2.0. If a copy of the MPL was not distributed with this
 *  file, You can obtain one at https://mozilla.org/MPL/2.0/.
 *
 *  SPDX-License-Identifier: MPL-2.0
 */

#include "PolygonLayer.h"
#include "ColorShaderInterface.h"
#include "GraphicsObjectInterface.h"
#include "LambdaTask.h"
#include "MapCamera2dInterface.h"
#include "MapInterface.h"
#include "PolygonHelper.h"
#include "RenderPass.h"
#include "RenderObject.h"
#include <map>

#include "PolygonCompare.h"

PolygonLayer::PolygonLayer()
        : isHidden(false) {}

void PolygonLayer::setPolygons(const std::vector<PolygonInfo> &polygons) {
    clear();
    for (auto const &polygon : polygons) {
        add(polygon);
    }
    generateRenderPasses();
    if (mapInterface)
        mapInterface->invalidate();
}

std::vector<PolygonInfo> PolygonLayer::getPolygons() {
    std::vector<PolygonInfo> polygons;
    if (!mapInterface) {
        for (auto const &polygon : addingQueue) {
            polygons.push_back(polygon);
        }
        return polygons;
    }
    for (auto const &ps : this->polygons) {
        for(auto& p : ps.second) {
            polygons.push_back(p.first);
        }
    }

    return polygons;
}

void PolygonLayer::remove(const PolygonInfo &polygon) {
    auto equal = std::equal_to<PolygonInfo>();

    if (!mapInterface) {
        std::lock_guard<std::recursive_mutex> lock(addingQueueMutex);
        addingQueue.erase(std::remove_if(addingQueue.begin(), addingQueue.end(), [&](const auto& p) { return equal(p, polygon); } ), addingQueue.end());
        return;
    }
    {
        std::lock_guard<std::recursive_mutex> lock(polygonsMutex);

        for (auto pit = polygons.begin(); pit != polygons.end(); pit++) {
            if(pit->first == polygon.identifier) {
                for(auto it=pit->second.begin(); it!=pit->second.end(); ++it) {
                    if(equal(it->first, polygon)) {
                        pit->second.erase(it);
                        break;
                    }
                }
            }
        }
    }
    generateRenderPasses();
    if (mapInterface)
        mapInterface->invalidate();
}

void PolygonLayer::add(const PolygonInfo &polygon) {
    addAll({polygon});
}


void PolygonLayer::addAll(const std::vector<PolygonInfo> &polygons) {
    if (polygons.empty()) return;

    if (!mapInterface) {
        std::lock_guard<std::recursive_mutex> lock(addingQueueMutex);
        for (const auto &polygon : polygons) {
            addingQueue.push_back(polygon);
        }
        return;
    }

    const auto &objectFactory = mapInterface->getGraphicsObjectFactory();
    const auto &shaderFactory = mapInterface->getShaderFactory();

    std::vector<std::shared_ptr<Polygon2dInterface>> polygonGraphicsObjects;

    {
        std::lock_guard<std::recursive_mutex> lock(polygonsMutex);
        for (const auto &polygon : polygons) {

            auto shader = shaderFactory->createColorShader();
            auto polygonGraphicsObject = objectFactory->createPolygon(shader->asShaderProgramInterface());

            auto polygonObject =
                    std::make_shared<Polygon2dLayerObject>(mapInterface->getCoordinateConverterHelper(), polygonGraphicsObject,
                                                           shader);

            polygonObject->setPositions(polygon.coordinates, polygon.holes, polygon.isConvex);
            polygonObject->setColor(polygon.color);

            polygonGraphicsObjects.push_back(polygonGraphicsObject);
            this->polygons[polygon.identifier].push_back(std::make_tuple(polygon, polygonObject));
        }
    }

    std::weak_ptr<PolygonLayer> selfPtr = std::dynamic_pointer_cast<PolygonLayer>(shared_from_this());
    mapInterface->getScheduler()->addTask(std::make_shared<LambdaTask>(
            TaskConfig("PolygonLayer_setup_" + polygons[0].identifier + ",...", 0, TaskPriority::NORMAL, ExecutionEnvironment::GRAPHICS),
            [selfPtr, polygonGraphicsObjects] { if (selfPtr.lock()) selfPtr.lock()->setupPolygonObjects(polygonGraphicsObjects); }));

    generateRenderPasses();

}

void PolygonLayer::setupPolygonObjects(const std::vector<std::shared_ptr<Polygon2dInterface>> &polygons) {
    for (const auto &polygonGraphicsObject : polygons) {
        if (!polygonGraphicsObject->asGraphicsObject()->isReady()) {
            polygonGraphicsObject->asGraphicsObject()->setup(mapInterface->getRenderingContext());
        }
    }
    if (mapInterface) mapInterface->invalidate();
}

void PolygonLayer::clear() {
    if (!mapInterface) {
        std::lock_guard<std::recursive_mutex> lock(addingQueueMutex);
        addingQueue.clear();
        return;
    }
    {
        std::lock_guard<std::recursive_mutex> lock(polygonsMutex);
        polygons.clear();
        highlightedPolygon = std::nullopt;
        selectedPolygon = std::nullopt;
    }

    generateRenderPasses();
    if (mapInterface)
        mapInterface->invalidate();
}

void PolygonLayer::pause() {
    std::lock_guard<std::recursive_mutex> overlayLock(polygonsMutex);
    for (const auto &polygon : polygons) {
        for(auto& p : polygon.second) {
            p.second->getPolygonObject()->clear();
        }
    }
    if (mask) {
        if (mask->asGraphicsObject()->isReady()) mask->asGraphicsObject()->clear();
    }
}

void PolygonLayer::resume() {
    std::lock_guard<std::recursive_mutex> overlayLock(polygonsMutex);
    auto renderingContext = mapInterface->getRenderingContext();
    for (const auto &polygon : polygons) {
        for(auto& p : polygon.second) {
            std::get<1>(p)->getPolygonObject()->setup(renderingContext);
        }
    }
    if (mask) {
        if (!mask->asGraphicsObject()->isReady()) mask->asGraphicsObject()->setup(renderingContext);
    }
}

std::shared_ptr<::LayerInterface> PolygonLayer::asLayerInterface() { return shared_from_this(); }

void PolygonLayer::generateRenderPasses() {
    std::lock_guard<std::recursive_mutex> lock(polygonsMutex);
    std::map<int, std::vector<std::shared_ptr<RenderObjectInterface>>> renderPassObjectMap;
    for (auto const &p : polygons) {
        for(auto const &object : p.second) {
            for (auto config : object.second->getRenderConfig()) {
                renderPassObjectMap[config->getRenderIndex()].push_back(std::make_shared<RenderObject>(config->getGraphicsObject()));
            }
        }
    }
    std::vector<std::shared_ptr<RenderPassInterface>> newRenderPasses;
    for (const auto &passEntry : renderPassObjectMap) {
        std::shared_ptr<RenderPass> renderPass = std::make_shared<RenderPass>(RenderPassConfig(passEntry.first), passEntry.second, mask);
        newRenderPasses.push_back(renderPass);
    }
    {
        std::lock_guard<std::recursive_mutex> overlayLock(renderPassMutex);
        renderPasses = newRenderPasses;
    }
}

std::vector<std::shared_ptr<::RenderPassInterface>> PolygonLayer::buildRenderPasses() {
    if (isHidden) {
        return {};
    } else {
        std::lock_guard<std::recursive_mutex> overlayLock(renderPassMutex);
        return renderPasses;
    }
}

void PolygonLayer::onAdded(const std::shared_ptr<MapInterface> &mapInterface) {
    this->mapInterface = mapInterface;
    {
        std::lock_guard<std::recursive_mutex> lock(addingQueueMutex);
        for (auto const &polygon : addingQueue) {
            add(polygon);
        }
        addingQueue.clear();
    }

    mapInterface->getTouchHandler()->addListener(shared_from_this());
}

void PolygonLayer::onRemoved() {
    mapInterface->getTouchHandler()->removeListener(shared_from_this());
    mapInterface = nullptr;
}

void PolygonLayer::setCallbackHandler(const std::shared_ptr<PolygonLayerCallbackInterface> &handler) { callbackHandler = handler; }

void PolygonLayer::hide() {
    isHidden = true;
    if (mapInterface)
        mapInterface->invalidate();
}

void PolygonLayer::show() {
    isHidden = false;
    if (mapInterface)
        mapInterface->invalidate();
}

void PolygonLayer::resetSelection() {
    if(selectedPolygon) {
        for(auto& p : polygons[selectedPolygon->identifier]) {
            p.second->setColor(p.first.color);
        }

        selectedPolygon = std::nullopt;

        if(mapInterface) {
            mapInterface->invalidate();
        }
    }
}

bool PolygonLayer::onTouchDown(const ::Vec2F &posScreen) {
    auto point = mapInterface->getCamera()->coordFromScreenPosition(posScreen);

    std::lock_guard<std::recursive_mutex> lock(polygonsMutex);
    for (auto const &polygon : polygons) {
        for(auto& p : polygon.second) {
            if(PolygonHelper::pointInside(p.first, point, mapInterface->getCoordinateConverterHelper())) {
                highlightedPolygon = p.first;
                break;
            }
        }

        if(highlightedPolygon) {
            for(auto& p : polygon.second) {
                p.second->setColor(p.first.highlightColor);
            }

            if (selectedPolygon && ((*selectedPolygon).identifier != (*highlightedPolygon).identifier)) {
                for(auto& p : polygons[selectedPolygon->identifier]) {
                    p.second->setColor(p.first.color);

                }

                selectedPolygon = std::nullopt;
            }

            mapInterface->invalidate();
            return true;
        }
    }
    return false;
}

void PolygonLayer::clearTouch() {
    if (highlightedPolygon) {
        {
            std::lock_guard<std::recursive_mutex> lock(polygonsMutex);
            for(auto& p : polygons[highlightedPolygon->identifier]) {
                p.second->setColor(p.first.color);
            }
        }

        highlightedPolygon = std::nullopt;
        mapInterface->invalidate();
    }
}

bool PolygonLayer::onClickUnconfirmed(const ::Vec2F &posScreen) {
    if (highlightedPolygon) {
        selectedPolygon = highlightedPolygon;

        if (callbackHandler) {
            callbackHandler->onClickConfirmed(*selectedPolygon);
        }

        highlightedPolygon = std::nullopt;
        mapInterface->invalidate();
        return true;
    }
    return false;
}

void PolygonLayer::setMaskingObject(const std::shared_ptr<::MaskingObjectInterface> & maskingObject) {
    this->mask = maskingObject;
    generateRenderPasses();
    if (mapInterface) {
        if (mask) {
            if (!mask->asGraphicsObject()->isReady()) mask->asGraphicsObject()->setup(mapInterface->getRenderingContext());
        }
        mapInterface->invalidate();
    }
}
