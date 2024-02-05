// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from geo_json_parser.djinni

#pragma once

#include "VectorLayerFeatureInfo.h"
#include <memory>
#include <optional>
#include <string>
#include <vector>

struct GeoJsonPoint;

class GeoJsonFeatureParserInterface {
public:
    virtual ~GeoJsonFeatureParserInterface() = default;

    static /*not-null*/ std::shared_ptr<GeoJsonFeatureParserInterface> create();

    virtual std::optional<std::vector<::VectorLayerFeatureInfo>> parse(const std::string & geoJson) = 0;

    virtual std::optional<std::vector<GeoJsonPoint>> parseWithPointGeometry(const std::string & geoJson) = 0;
};
