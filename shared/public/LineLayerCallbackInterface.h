// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from line.djinni

#pragma once

#include <vector>

struct LineInfo;

class LineLayerCallbackInterface {
public:
    virtual ~LineLayerCallbackInterface() {}

    virtual bool onLineClickConfirmed(const std::vector<LineInfo> & icons) = 0;
};