// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from polygon.djinni

#pragma once

struct PolygonInfo;

class PolygonLayerCallbackInterface {
public:
    virtual ~PolygonLayerCallbackInterface() = default;

    virtual void onClickConfirmed(const PolygonInfo & polygon) = 0;
};
