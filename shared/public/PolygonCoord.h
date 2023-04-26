// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from coordinate_system.djinni

#pragma once

#include "Coord.h"
#include <utility>
#include <vector>

struct PolygonCoord final {
    std::vector<Coord> positions;
    std::vector<std::vector<Coord>> holes;

    PolygonCoord(std::vector<Coord> positions_,
                 std::vector<std::vector<Coord>> holes_)
    : positions(std::move(positions_))
    , holes(std::move(holes_))
    {}
};
