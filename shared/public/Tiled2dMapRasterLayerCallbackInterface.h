// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_raster_layer.djinni

#pragma once

#include "Coord.h"

class Tiled2dMapRasterLayerCallbackInterface {
public:
    virtual ~Tiled2dMapRasterLayerCallbackInterface() = default;

    virtual bool onClickConfirmed(const ::Coord & coord) = 0;

    virtual bool onLongPress(const ::Coord & coord) = 0;
};
