/*
 * Copyright (c) 2021 Ubique Innovation AG <https://www.ubique.ch>
 *
 *  This Source Code Form is subject to the terms of the Mozilla Public
 *  License, v. 2.0. If a copy of the MPL was not distributed with this
 *  file, You can obtain one at https://mozilla.org/MPL/2.0/.
 *
 *  SPDX-License-Identifier: MPL-2.0
 */

#include "Tiled2dMapVectorPolygonPatternTile.h"
#include "Tiled2dMapVectorRasterSubLayerConfig.h"
#include "RenderObject.h"
#include "MapCamera2dInterface.h"
#include "PolygonGroupShaderInterface.h"
#include "PolygonPatternGroup2dLayerObject.h"
#include "earcut.hpp"
#include "Logger.h"
#include "PolygonHelper.h"
#include "TextureHolderInterface.h"

namespace mapbox {
    namespace util {

        template <>
        struct nth<0, ::Coord> {
            inline static auto get(const ::Coord &t) {
                return t.x;
            };
        };
        template <>
        struct nth<1, ::Coord> {
            inline static auto get(const ::Coord &t) {
                return t.y;
            };
        };

    } // namespace util
} // namespace mapbox

Tiled2dMapVectorPolygonPatternTile::Tiled2dMapVectorPolygonPatternTile(const std::weak_ptr<MapInterface> &mapInterface,
                                                         const Tiled2dMapTileInfo &tileInfo,
                                                         const WeakActor<Tiled2dMapVectorLayerTileCallbackInterface> &tileCallbackInterface,
                                                         const std::shared_ptr<PolygonVectorLayerDescription> &description,
                                                         const std::shared_ptr<SpriteData> &spriteData,
                                                        const std::shared_ptr<TextureHolderInterface> &spriteTexture)
        : Tiled2dMapVectorTile(mapInterface, tileInfo, description, tileCallbackInterface), spriteData(spriteData), spriteTexture(spriteTexture) {
    usedKeys = std::move(description->getUsedKeys());
    auto pMapInterface = mapInterface.lock();
    if (pMapInterface) {
        shader = pMapInterface->getShaderFactory()->createPolygonPatternGroupShader();
    }
}

void Tiled2dMapVectorPolygonPatternTile::updateVectorLayerDescription(const std::shared_ptr<VectorLayerDescription> &description,
                                                         const Tiled2dMapVectorTileDataVector &tileData) {
    Tiled2dMapVectorTile::updateVectorLayerDescription(description, tileData);
    featureGroups.clear();
    hitDetectionPolygonMap.clear();
    usedKeys = std::move(description->getUsedKeys());
    setVectorTileData(tileData);
}

void Tiled2dMapVectorPolygonPatternTile::update() {
    auto mapInterface = this->mapInterface.lock();
    auto camera = mapInterface ? mapInterface->getCamera() : nullptr;
    if (!mapInterface || !camera) {
        return;
    }
    double cameraZoom = camera->getZoom();
    double zoomIdentifier = Tiled2dMapVectorRasterSubLayerConfig::getZoomIdentifier(cameraZoom);
    zoomIdentifier = std::max(zoomIdentifier, (double) tileInfo.zoomIdentifier);

    auto polygonDescription = std::static_pointer_cast<PolygonVectorLayerDescription>(description);
    int index = 0;
    opacities.resize(featureGroups.size(), 1.0);
    for (auto const &[hash, feature]: featureGroups) {
        const auto& ec = EvaluationContext(zoomIdentifier, feature);
        const auto& opacity = polygonDescription->style.getFillOpacity(ec);
        opacities[index] = alpha * opacity;
        index++;
    }

    auto zoom = Tiled2dMapVectorRasterSubLayerConfig::getZoomFactorAtIdentifier(floor(zoomIdentifier));
    auto scalingFactor = (camera->asCameraInterface()->getScalingFactor() / cameraZoom) * zoom;

    for(auto const &polygon: polygons) {
        polygon->setOpacities(opacities);
        polygon->setScalingFactor(scalingFactor);
    }
}

void Tiled2dMapVectorPolygonPatternTile::clear() {
    for (auto const &polygon: polygons) {
        if (polygon->getPolygonObject()->isReady()) polygon->getPolygonObject()->clear();
    }
}

void Tiled2dMapVectorPolygonPatternTile::setup() {
    auto mapInterface = this->mapInterface.lock();
    if (!mapInterface) {
        return;
    }
    const auto &context = mapInterface->getRenderingContext();
    for (auto const &polygon: polygons) {
        if (!polygon->getPolygonObject()->isReady()) polygon->getPolygonObject()->setup(context);
    }

    auto selfActor = WeakActor<Tiled2dMapVectorTile>(mailbox, shared_from_this());
    tileCallbackInterface.message(&Tiled2dMapVectorLayerTileCallbackInterface::tileIsReady, tileInfo, description->identifier, selfActor);
}

void Tiled2dMapVectorPolygonPatternTile::setVectorTileData(const Tiled2dMapVectorTileDataVector &tileData) {

    if (!mapInterface.lock()) {
        return;
    }

    std::string layerName = description->sourceId;

    std::string defIdPrefix =
            std::to_string(tileInfo.x) + "/" + std::to_string(tileInfo.y) + "_" + layerName + "_";
    if (!tileData->empty() &&
        description->minZoom <= tileInfo.zoomIdentifier &&
        description->maxZoom >= tileInfo.zoomIdentifier) {

        bool anyInteractable = false;

        std::vector<std::tuple<std::vector<std::tuple<std::vector<Coord>, int>>, std::vector<uint16_t>>> objectDescriptions;
        objectDescriptions.push_back({{},{}});

        std::vector<uint16_t> indices;
        std::int32_t indices_offset = 0;

#ifndef __APPLE__
        for (auto featureIt = tileData->rbegin(); featureIt != tileData->rend(); featureIt++) {
#else
        for (auto featureIt = tileData->begin(); featureIt != tileData->end(); featureIt++) {
#endif

            const auto &[featureContext, geometryHandler] = *featureIt;

            if (featureContext.geomType != vtzero::GeomType::POLYGON) { continue; }

            EvaluationContext evalContext = EvaluationContext(tileInfo.zoomIdentifier, featureContext);
            if (description->filter == nullptr || description->filter->evaluateOr(evalContext, true)) {
                const auto &polygonCoordinates = geometryHandler.getPolygonCoordinates();
                const auto &polygonHoles = geometryHandler.getHoleCoordinates();

                std::vector<Coord> positions;

                bool interactable = description->isInteractable(evalContext);
                for (int i = 0; i < polygonCoordinates.size(); i++) {

                    size_t verticesCount = polygonCoordinates[i].size();

                    // TODO: Android/iOS currently only supports 16bit indices
                    // more complex polygons may need to be simplified on-device to render them correctly
                    if (verticesCount >= std::numeric_limits<uint16_t>::max()) {
                        LogError <<= "Too many vertices in a polygon to use 16bit indices: " + std::to_string(verticesCount);
                        continue;
                    }

                    std::vector<std::vector<::Coord>> pol = { polygonCoordinates[i] };

                    for (auto const &hole: polygonHoles[i]) {

                        if (verticesCount + hole.size() >= std::numeric_limits<uint16_t>::max()) {
                            LogError <<= "Too many vertices by polygon holes to use 16bit indices - remaining holes are dropped";
                            break;
                        }

                        verticesCount += hole.size();
                        pol.push_back(hole);
                    }

                    std::vector<uint16_t> new_indices = mapbox::earcut<uint16_t>(pol);

                    size_t posAdded = 0;
                    for (auto const &coords: pol) {
                        positions.insert(positions.end(), coords.begin(), coords.end());
                        posAdded += coords.size();
                    }

                    // check overflow
                    size_t new_size = indices_offset + posAdded;

                    if (new_size >= std::numeric_limits<uint16_t>::max()) {
                        objectDescriptions.push_back({{}, {}});
                        indices_offset = 0;
                    }

                    for (auto const &index: new_indices) {
                        std::get<1>(objectDescriptions.back()).push_back(indices_offset + index);
                    }

                    indices_offset += posAdded;

                    if (interactable) {
                        anyInteractable = true;
                        hitDetectionPolygonMap[tileInfo].push_back(
                                {PolygonCoord(polygonCoordinates[i], polygonHoles[i]), featureContext});
                    }
                }

                int styleIndex = -1;
                {
                    auto const hash = featureContext.getStyleHash(usedKeys);

                    for (size_t i = 0; i != featureGroups.size(); i++) {
                        auto const &[groupHash, group] = featureGroups.at(i);
                        if (hash == groupHash) {
                            styleIndex = (int) i;
                            break;
                        }
                    }

                    if (styleIndex == -1) {
                        featureGroups.push_back({ hash, featureContext });
                        styleIndex = (int) featureGroups.size() - 1;
                    }
                }

                std::get<0>(objectDescriptions.back()).push_back({positions, styleIndex});
            }
        }

        if (anyInteractable) {
            tileCallbackInterface.message(&Tiled2dMapVectorLayerTileCallbackInterface::tileIsInteractable, description->identifier);
        }

        addPolygons(objectDescriptions);
    } else {
        auto selfActor = WeakActor<Tiled2dMapVectorTile>(mailbox, shared_from_this());
        tileCallbackInterface.message(&Tiled2dMapVectorLayerTileCallbackInterface::tileIsReady, tileInfo, description->identifier, selfActor);
    }
}

void Tiled2dMapVectorPolygonPatternTile::addPolygons(const std::vector<std::tuple<std::vector<std::tuple<std::vector<Coord>, int>>, std::vector<uint16_t>>> &polygons) {
    std::vector<std::shared_ptr<GraphicsObjectInterface>> oldGraphicsObjects;
    for (const auto &polygon : this->polygons) {
        oldGraphicsObjects.push_back(polygon->getPolygonObject());
    }

    if (polygons.empty() && oldGraphicsObjects.empty()) {
        auto selfActor = WeakActor<Tiled2dMapVectorTile>(mailbox, shared_from_this());
        tileCallbackInterface.message(&Tiled2dMapVectorLayerTileCallbackInterface::tileIsReady, tileInfo, description->identifier, selfActor);
        return;
    }

    auto mapInterface = this->mapInterface.lock();
    auto objectFactory = mapInterface ? mapInterface->getGraphicsObjectFactory() : nullptr;
    auto scheduler = mapInterface ? mapInterface->getScheduler() : nullptr;
    auto converter = mapInterface ? mapInterface->getCoordinateConverterHelper() : nullptr;

    if (!mapInterface || !objectFactory || !scheduler || !converter || !shader) {
        return;
    }

    std::vector<std::shared_ptr<PolygonPatternGroup2dLayerObject>> polygonObjects;
    std::vector<std::shared_ptr<GraphicsObjectInterface>> newGraphicObjects;

    for (auto const& tuple: polygons) {
        const auto polygonObject = objectFactory->createPolygonPatternGroup(shader->asShaderProgramInterface());

        auto layerObject = std::make_shared<PolygonPatternGroup2dLayerObject>(converter, polygonObject, shader);
        layerObject->setVertices(std::get<0>(tuple), std::get<1>(tuple));

        this->polygons.emplace_back(layerObject);
        newGraphicObjects.push_back(polygonObject->asGraphicsObject());
    }

#ifdef __APPLE__
    setupPolygons(newGraphicObjects, oldGraphicsObjects);
#else
    auto selfActor = WeakActor(mailbox, shared_from_this()->weak_from_this());
    selfActor.message(MailboxExecutionEnvironment::graphics, &Tiled2dMapVectorPolygonPatternTile::setupPolygons, newGraphicObjects, oldGraphicsObjects);
#endif
}

void Tiled2dMapVectorPolygonPatternTile::setupPolygons(const std::vector<std::shared_ptr<GraphicsObjectInterface>> &newPolygonObjects,
                                                const std::vector<std::shared_ptr<GraphicsObjectInterface>> &oldPolygonObjects) {
    for (const auto &polygon : oldPolygonObjects) {
        if (polygon->isReady()) polygon->clear();
    }

    auto mapInterface = this->mapInterface.lock();
    auto renderingContext = mapInterface ? mapInterface->getRenderingContext() : nullptr;
    if (!renderingContext) {
        return;
    }

    setupTextureCoordinates();

    for (auto const &polygon: newPolygonObjects) {
        if (!polygon->isReady()) polygon->setup(renderingContext);
    }

    auto selfActor = WeakActor<Tiled2dMapVectorTile>(mailbox, shared_from_this());
    tileCallbackInterface.message(&Tiled2dMapVectorLayerTileCallbackInterface::tileIsReady, tileInfo, description->identifier, selfActor);
}

std::vector<std::shared_ptr<RenderObjectInterface>> Tiled2dMapVectorPolygonPatternTile::generateRenderObjects() {
    std::vector<std::shared_ptr<RenderObjectInterface>> newRenderObjects;
    for (auto const &object : polygons) {
        for (const auto &config : object->getRenderConfig()) {
            newRenderObjects.push_back(std::make_shared<RenderObject>(config->getGraphicsObject()));
        }
    }

    return std::move(newRenderObjects);
}

void Tiled2dMapVectorPolygonPatternTile::setSpriteData(const std::shared_ptr<SpriteData> &spriteData,
                                                         const std::shared_ptr<TextureHolderInterface> &spriteTexture) {
    this->spriteData = spriteData;
    this->spriteTexture = spriteTexture;

    setupTextureCoordinates();
}

void Tiled2dMapVectorPolygonPatternTile::setupTextureCoordinates() {
    if (!spriteData || !spriteTexture) {
        return;
    }
    auto mapInterface = this->mapInterface.lock();
    auto camera = mapInterface ? mapInterface->getCamera() : nullptr;

    if (!mapInterface || !camera) {
        return;
    }

    double cameraZoom = camera->getZoom();
    double zoomIdentifier = Tiled2dMapVectorRasterSubLayerConfig::getZoomIdentifier(cameraZoom);
    zoomIdentifier = std::max(zoomIdentifier, (double) tileInfo.zoomIdentifier);

    auto polygonDescription = std::static_pointer_cast<PolygonVectorLayerDescription>(description);
    std::vector<float> textureCoordinates;
    textureCoordinates.resize(featureGroups.size() * 5, 1.0);

    int index = 0;

    for (auto const &[hash, feature]: featureGroups) {
        const auto& ec = EvaluationContext(zoomIdentifier, feature);
        const auto& patternName = polygonDescription->style.getFillPattern(ec);

        const auto &spriteInfo = spriteData->sprites.at(patternName);

        const double densityOffset = (camera->getScreenDensityPpi() / 160.0) / spriteInfo.pixelRatio;

        int offset = index * 5;

        textureCoordinates[offset + 0] = ((float) spriteInfo.x) / spriteTexture->getImageWidth();
        textureCoordinates[offset + 1] = ((float) spriteInfo.y) / spriteTexture->getImageHeight();
        textureCoordinates[offset + 2] = ((float) spriteInfo.width) / spriteTexture->getImageWidth();
        textureCoordinates[offset + 3] = ((float) spriteInfo.height) / spriteTexture->getImageHeight();
        textureCoordinates[offset + 4] = spriteInfo.width + (spriteInfo.height << 16);

        index++;
    }
    auto context = mapInterface->getRenderingContext();

    for(auto const &polygon: polygons) {
        polygon->setTextureCoordinates(textureCoordinates);
        polygon->loadTexture(context, spriteTexture);
    }
}

bool Tiled2dMapVectorPolygonPatternTile::onClickConfirmed(const Vec2F &posScreen) {
    auto mapInterface = this->mapInterface.lock();
    auto camera = mapInterface ? mapInterface->getCamera() : nullptr;
    if (!camera || !selectionDelegate) {
        return false;
    }
    auto point = camera->coordFromScreenPosition(posScreen);

    for (auto const &[tileInfo, polygonTuples] : hitDetectionPolygonMap) {
        for (auto const &[polygon, featureContext]: polygonTuples) {
            if (PolygonHelper::pointInside(polygon, point, mapInterface->getCoordinateConverterHelper())) {
                selectionDelegate->didSelectFeature(featureContext.getFeatureInfo(), description->identifier, point);
                return true;
            }
        }
    }

    return false;
}
