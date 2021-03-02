// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wmts_capabilities.djinni

#pragma once

#include "WmtsTileMatrix.h"
#include <string>
#include <utility>
#include <vector>

struct WmtsTileMatrixSet final {
    std::string identifier;
    std::string coordinateSystem;
    std::vector<WmtsTileMatrix> matrices;

    WmtsTileMatrixSet(std::string identifier_,
                      std::string coordinateSystem_,
                      std::vector<WmtsTileMatrix> matrices_)
    : identifier(std::move(identifier_))
    , coordinateSystem(std::move(coordinateSystem_))
    , matrices(std::move(matrices_))
    {}
};
