// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_vector_layer.djinni

#pragma once

#include "FontLoaderInterface.h"
#include "LayerInterface.h"
#include "LoaderInterface.h"
#include "Tiled2dMapZoomInfo.h"
#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <unordered_map>
#include <vector>

class Tiled2dMapVectorLayerLocalDataProviderInterface;
class Tiled2dMapVectorLayerSelectionCallbackInterface;
class Tiled2dMapVectorLayerSymbolDelegateInterface;
struct VectorLayerFeatureInfoValue;

class Tiled2dMapVectorLayerInterface {
public:
    virtual ~Tiled2dMapVectorLayerInterface() = default;

    /** Creator method for a vector layer specified by a url to a style json and the compulsory loader interfaces */
    static /*not-null*/ std::shared_ptr<Tiled2dMapVectorLayerInterface> createFromStyleJson(const std::string & layerName, const std::string & styleJsonUrl, const std::vector</*not-null*/ std::shared_ptr<::LoaderInterface>> & loaders, const /*not-null*/ std::shared_ptr<::FontLoaderInterface> & fontLoader);

    /**
     * Create a vector layer instance by fully providing a combination of properties, specifying the functionality of the layer. Non-optionals
     * are strictly needed in every case.
     * @param    layerName  name for the created layer
     * @param    styleJson  Optional string to specify a url to a style json or a style json string itself (see parameter "localStyleJson")
     * @param    localStyleJson  Optional flag to indicate whether parameter "styleJson" is local style json string or the url to a style json. Default is false.
     * @param    loaders Mandatory list of data loaders, which are used in the provided order
     * @param    fontLoader Mandatory interface to load font data
     * @param    localDataProvider When provided, the vector layer loads the style json, geojsons and the sprite infos via this interface
     * @param    customZoomInfo    Optionally specify a custom zoom info
     * @param    symbolDelegate Optional texture provider, when layers in the style use the flag "icon-image-custom-provider"
     * @return   the interface to the newly configured layer
     */
    static /*not-null*/ std::shared_ptr<Tiled2dMapVectorLayerInterface> createExplicitly(const std::string & layerName, const std::optional<std::string> & styleJson, std::optional<bool> localStyleJson, const std::vector</*not-null*/ std::shared_ptr<::LoaderInterface>> & loaders, const /*not-null*/ std::shared_ptr<::FontLoaderInterface> & fontLoader, const /*nullable*/ std::shared_ptr<Tiled2dMapVectorLayerLocalDataProviderInterface> & localDataProvider, const std::optional<::Tiled2dMapZoomInfo> & customZoomInfo, const /*nullable*/ std::shared_ptr<Tiled2dMapVectorLayerSymbolDelegateInterface> & symbolDelegate);

    virtual void setSelectionDelegate(const /*nullable*/ std::shared_ptr<Tiled2dMapVectorLayerSelectionCallbackInterface> & selectionDelegate) = 0;

    virtual /*not-null*/ std::shared_ptr<::LayerInterface> asLayerInterface() = 0;

    virtual void setMinZoomLevelIdentifier(std::optional<int32_t> value) = 0;

    virtual std::optional<int32_t> getMinZoomLevelIdentifier() = 0;

    virtual void setMaxZoomLevelIdentifier(std::optional<int32_t> value) = 0;

    virtual std::optional<int32_t> getMaxZoomLevelIdentifier() = 0;

    virtual std::optional<std::string> getStyleMetadataJson() = 0;

    virtual void setFeatureState(const std::string & identifier, const std::unordered_map<std::string, VectorLayerFeatureInfoValue> & properties) = 0;

    virtual void setGlobalState(const std::unordered_map<std::string, VectorLayerFeatureInfoValue> & properties) = 0;
};
