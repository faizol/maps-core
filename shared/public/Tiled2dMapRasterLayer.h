/*
 * Copyright (c) 2021 Ubique Innovation AG <https://www.ubique.ch>
 *
 *  This Source Code Form is subject to the terms of the Mozilla Public
 *  License, v. 2.0. If a copy of the MPL was not distributed with this
 *  file, You can obtain one at https://mozilla.org/MPL/2.0/.
 *
 *  SPDX-License-Identifier: MPL-2.0
 */

#pragma once

#include "LayerInterface.h"
#include "Textured2dLayerObject.h"
#include "Tiled2dMapLayer.h"
#include "Tiled2dMapRasterLayerCallbackInterface.h"
#include "Tiled2dMapRasterLayerInterface.h"
#include "Tiled2dMapRasterSource.h"
#include "Tiled2dMapRasterLayerCallbackInterface.h"
#include "PolygonMaskObject.h"
#include "ShaderProgramInterface.h"
#include "Tiled2dMapLayerMaskWrapper.h"
#include <mutex>
#include <unordered_map>
#include <map>
#include <atomic>
#include "Actor.h"


class Tiled2dMapRasterLayer : public Tiled2dMapLayer,
                              public SimpleTouchInterface,
                              public Tiled2dMapRasterLayerInterface {
public:
    Tiled2dMapRasterLayer(const std::shared_ptr<::Tiled2dMapLayerConfig> &layerConfig,
                          const std::vector<std::shared_ptr<::LoaderInterface>> & tileLoaders,
                          bool registerToTouchHandler = true);

    Tiled2dMapRasterLayer(const std::shared_ptr<::Tiled2dMapLayerConfig> &layerConfig,
                          const std::vector<std::shared_ptr<::LoaderInterface>> & tileLoaders,
                          const std::shared_ptr<::MaskingObjectInterface> &mask,
                          bool registerToTouchHandler = true);

    Tiled2dMapRasterLayer(const std::shared_ptr<::Tiled2dMapLayerConfig> &layerConfig,
                          const std::vector<std::shared_ptr<::LoaderInterface>> &tileLoader,
                          const std::shared_ptr<::ShaderProgramInterface> &shader,
                          bool registerToTouchHandler = true);

    virtual void onAdded(const std::shared_ptr<::MapInterface> &mapInterface, int32_t layerIndex) override;

    virtual void onRemoved() override;

    virtual std::shared_ptr<::LayerInterface> asLayerInterface() override;

    virtual void update() override;

    virtual std::vector<std::shared_ptr<::RenderPassInterface>> buildRenderPasses() override;

    virtual void pause() override;

    virtual void resume() override;

    virtual void onTilesUpdated() override;

    virtual void setupTiles(
            const std::vector<const std::pair<const Tiled2dMapRasterTileInfo, std::shared_ptr<Textured2dLayerObject>>> &tilesToSetup,
            const std::vector<const std::pair<const Tiled2dMapRasterTileInfo, std::shared_ptr<Textured2dLayerObject>>> &tilesToClean);

    virtual void generateRenderPasses();

    virtual void setCallbackHandler(const std::shared_ptr<Tiled2dMapRasterLayerCallbackInterface> &handler) override;

    virtual std::shared_ptr<Tiled2dMapRasterLayerCallbackInterface> getCallbackHandler() override;

    virtual void removeCallbackHandler() override;

    virtual void setAlpha(float alpha) override;

    virtual float getAlpha() override;

    virtual void setMinZoomLevelIdentifier(std::optional<int32_t> value) override;

    virtual std::optional<int32_t> getMinZoomLevelIdentifier() override;

    virtual void setMaxZoomLevelIdentifier(std::optional<int32_t> value) override;

    virtual std::optional<int32_t> getMaxZoomLevelIdentifier() override;

    bool onClickConfirmed(const Vec2F &posScreen) override;

    bool onLongPress(const Vec2F &posScreen) override;

    virtual void setMaskingObject(const std::shared_ptr<::MaskingObjectInterface> &maskingObject) override;

    virtual void setScissorRect(const std::optional<::RectI> &scissorRect) override;

    virtual void setT(int32_t t) override;

    bool shouldLoadTile(const Tiled2dMapTileInfo &tileInfo);

    virtual std::shared_ptr<::Tiled2dMapLayerConfig> getConfig() override;
                                  
    void onTilesUpdatedNew(std::unordered_set<Tiled2dMapRasterTileInfo> currentTileInfos);
private:
    virtual void updateMaskObjects(const std::vector<const std::shared_ptr<MaskingObjectInterface>> &newMaskObjects,
                                   const std::vector<const std::shared_ptr<MaskingObjectInterface>> &obsoleteMaskObjects);

    virtual void enableAnimations(bool enabled) override;

    virtual LayerReadyState isReadyToRenderOffscreen() override;

protected:
    const std::shared_ptr<Tiled2dMapLayerConfig> layerConfig;

    std::optional<::RectI> scissorRect = std::nullopt;
    std::shared_ptr<::MaskingObjectInterface> mask;

    const std::vector<std::shared_ptr<::LoaderInterface>> tileLoaders;
    std::shared_ptr<ShaderProgramInterface> shader;

    Actor<Tiled2dMapRasterSource> rasterSource;
                                  
    std::atomic_flag updateFlag = ATOMIC_FLAG_INIT;
    std::recursive_mutex updateMutex;
    std::map<Tiled2dMapRasterTileInfo, std::shared_ptr<Textured2dLayerObject>> tileObjectMap;
    std::unordered_map<Tiled2dMapTileInfo, Tiled2dMapLayerMaskWrapper> tileMaskMap;
    std::recursive_mutex renderPassMutex;
    std::vector<std::shared_ptr<RenderPassInterface>> renderPasses;

    std::shared_ptr<Tiled2dMapRasterLayerCallbackInterface> callbackHandler;

    float alpha;
    bool animationsEnabled = true;
    bool registerToTouchHandler = true;
};
