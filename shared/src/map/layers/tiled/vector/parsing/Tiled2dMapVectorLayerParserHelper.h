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

#include "Logger.h"
#include "json.h"
#include "VectorMapDescription.h"
#include "DataLoaderResult.h"
#include "DataHolderInterface.h"
#include "Tiled2dMapVectorLayer.h"
#include "LineVectorLayerDescription.h"
#include "PolygonVectorLayerDescription.h"
#include "SymbolVectorLayerDescription.h"
#include "RasterVectorLayerDescription.h"
#include "BackgroundVectorLayerDescription.h"
#include "ColorUtil.h"
#include "Tiled2dMapVectorStyleParser.h"
#include "Tiled2dMapVectorLayerParserResult.h"
#include "LoaderHelper.h"
#include <string>

class Tiled2dMapVectorLayerParserHelper {
public:
    static Tiled2dMapVectorLayerParserResult parseStyleJson(const std::string &styleJsonPath,
                                                            const std::string &vectorSource,
                                                            const double &dpFactor,
                                                            const std::vector<std::shared_ptr<::LoaderInterface>> &loaders) {
        DataLoaderResult result = LoaderHelper::loadData(styleJsonPath, std::nullopt, loaders);
        if (result.status != LoaderStatus::OK) {
            return Tiled2dMapVectorLayerParserResult(nullptr, result.status, result.errorCode);
        }
        auto styleJsonData = result.data->getData();

        auto string = std::string((char *) styleJsonData.data(), styleJsonData.size());
        nlohmann::json json;

        try {
            json = nlohmann::json::parse(string);
        }
        catch (nlohmann::json::parse_error &ex) {
            return Tiled2dMapVectorLayerParserResult(nullptr, LoaderStatus::ERROR_OTHER, "");
        }

        std::vector<std::shared_ptr<VectorLayerDescription>> layers;

        std::map<std::string, std::shared_ptr<RasterVectorLayerDescription>> rasterLayerMap;

        nlohmann::json tileJson;
        for (auto&[key, val]: json["sources"].items()) {
            if (val["type"].get<std::string>() == "raster") {
                std::string url;
                if (val["tiles"].is_array()) {
                    url = val["tiles"].begin()->get<std::string>();
                } else if (val["url"].is_string()) {
                    auto result = LoaderHelper::loadData(val["url"].get<std::string>(), std::nullopt, loaders);
                    if (result.status != LoaderStatus::OK) {
                        return Tiled2dMapVectorLayerParserResult(nullptr, result.status, result.errorCode);
                    }
                    auto data = result.data->getData();
                    auto string = std::string((char *) data.data(), data.size());
                    nlohmann::json json;
                    try {
                        json = nlohmann::json::parse(string);
                    }
                    catch (nlohmann::json::parse_error &ex) {
                        return Tiled2dMapVectorLayerParserResult(nullptr, LoaderStatus::ERROR_OTHER, "");
                    }
                    url = json["tiles"].begin()->get<std::string>();
                }

                rasterLayerMap[key] = std::make_shared<RasterVectorLayerDescription>(key,
                                                                                     val.value("minZoom", 0),
                                                                                     val.value("maxZoom", 22),
                                                                                     url,
                                                                                     true);

            }
            if (val["type"].get<std::string>() == "vector" && key == vectorSource) {
                auto result = LoaderHelper::loadData(val["url"].get<std::string>(), std::nullopt, loaders);
                if (result.status != LoaderStatus::OK) {
                    return Tiled2dMapVectorLayerParserResult(nullptr, result.status, result.errorCode);
                }
                auto data = result.data->getData();
                auto string = std::string((char *) data.data(), data.size());
                nlohmann::json json;

                try {
                    tileJson = nlohmann::json::parse(string);
                }
                catch (nlohmann::json::parse_error &ex) {
                    return Tiled2dMapVectorLayerParserResult(nullptr, LoaderStatus::ERROR_OTHER, "");
                }

            }
            //std::cout << "key: " << key << ", value:" << val << '\n';
        }

        Tiled2dMapVectorStyleParser parser;

        for (auto&[key, val]: json["layers"].items()) {
            if (val["type"] == "background" && !val["paint"]["background-color"].is_null()) {
                auto layerDesc = std::make_shared<BackgroundVectorLayerDescription>(val["id"],
                                                                                    BackgroundVectorStyle(parser.parseValue(
                                                                                            val["paint"]["background-color"])));
                layers.push_back(layerDesc);

            } else if (val["type"] == "raster" && rasterLayerMap.count(val["source"]) != 0) {
                auto layer = rasterLayerMap.at(val["source"]);
                layer->style = RasterVectorStyle(parser.parseValue(val["paint"]["raster-opacity"]));
                layers.push_back(layer);
            }
            if (val["source"] == vectorSource) {
                if (val["type"] == "line") {

                    std::shared_ptr<Value> filter = parser.parseValue(val["filter"]);

                    auto layerDesc = std::make_shared<LineVectorLayerDescription>(val["id"],
                                                                                  val["source-layer"],
                                                                                  val.value("minzoom",
                                                                                            tileJson["minzoom"].get<int>()),
                                                                                  val.value("maxzoom",
                                                                                            tileJson["maxzoom"].get<int>()),
                                                                                  filter,
                                                                                  LineVectorStyle(parser.parseValue(
                                                                                                          val["paint"]["line-color"]),
                                                                                                  parser.parseValue(
                                                                                                          val["paint"]["line-opacity"]),
                                                                                                  parser.parseValue(
                                                                                                          val["paint"]["line-width"]),
                                                                                                  parser.parseValue(
                                                                                                          val["paint"]["line-dasharray"]),
                                                                                                  parser.parseValue(
                                                                                                          val["paint"]["line-blur"]),
                                                                                                  parser.parseValue(
                                                                                                          val["layout"]["line-cap"]),
                                                                                                  dpFactor));
                    layers.push_back(layerDesc);

                    // exclude landcover_pt for now
                } else if (val["type"] == "symbol" && val["id"] != "landcover_pt") {

                    SymbolVectorStyle style(parser.parseValue(val["layout"]["text-size"]),
                                            parser.parseValue(val["paint"]["text-color"]),
                                            parser.parseValue(val["paint"]["text-halo-color"]),
                                            parser.parseValue(val["layout"]["text-font"]),
                                            parser.parseValue(val["layout"]["text-field"]),
                                            parser.parseValue(val["layout"]["text-transform"]),
                                            parser.parseValue(val["layout"]["text-offset"]),
                                            parser.parseValue(val["layout"]["text-radial-offset"]),
                                            parser.parseValue(val["layout"]["text-padding"]),
                                            parser.parseValue(val["layout"]["text-anchor"]),
                                            parser.parseValue(val["layout"]["text-variable-anchor"]),
                                            parser.parseValue(val["layout"]["text-rotate"]),
                                            parser.parseValue(val["layout"]["symbol-sort-key"]),
                                            parser.parseValue(val["layout"]["symbol-spacing"]),
                                            parser.parseValue(val["layout"]["icon-image"]),
                                            parser.parseValue(val["layout"]["icon-anchor"]),
                                            parser.parseValue(val["layout"]["icon-offset"]),
                                            parser.parseValue(val["layout"]["icon-size"]),
                                            parser.parseValue(val["layout"]["text-line-height"]),
                                            parser.parseValue(val["layout"]["text-letter-spacing"]),
                                            dpFactor);

                    std::shared_ptr<Value> filter = parser.parseValue(val["filter"]);

                    auto layerDesc = std::make_shared<SymbolVectorLayerDescription>(val["id"],
                                                                                    val["source-layer"],
                                                                                    val.value("minzoom",
                                                                                              tileJson["minzoom"].get<int>()),
                                                                                    val.value("maxzoom",
                                                                                              tileJson["maxzoom"].get<int>()),
                                                                                    filter,
                                                                                    style);
                    layers.push_back(layerDesc);
                } else if (val["type"] == "fill" && val["paint"]["fill-pattern"].is_null()) {

                    std::shared_ptr<Value> filter = parser.parseValue(val["filter"]);

                    PolygonVectorStyle style(parser.parseValue(val["paint"]["fill-color"]),
                                             parser.parseValue(val["paint"]["fill-opacity"]));

                    auto layerDesc = std::make_shared<PolygonVectorLayerDescription>(val["id"],
                                                                                     val["source-layer"],
                                                                                     val.value("minzoom",
                                                                                               tileJson["minzoom"].get<int>()),
                                                                                     val.value("maxzoom",
                                                                                               tileJson["maxzoom"].get<int>()),
                                                                                     filter, style);

                    layers.push_back(layerDesc);
                }

            }
        }


        auto mapDesc = std::make_shared<VectorMapDescription>(vectorSource,
                                                              tileJson["tiles"].begin()->get<std::string>(),
                                                              tileJson["minzoom"].get<int>(),
                                                              tileJson["maxzoom"].get<int>(),
                                                              layers,
                                                              json["sprite"].get<std::string>());
        return Tiled2dMapVectorLayerParserResult(mapDesc, LoaderStatus::OK, "");
    }
};