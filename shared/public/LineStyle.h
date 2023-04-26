// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from line.djinni

#pragma once

#include "ColorStateList.h"
#include "LineCapType.h"
#include "SizeType.h"
#include <utility>
#include <vector>

struct LineStyle final {
    ::ColorStateList color;
    ::ColorStateList gapColor;
    float opacity;
    float blur;
    ::SizeType widthType;
    float width;
    std::vector<float> dashArray;
    LineCapType lineCap;
    float offset;

    LineStyle(::ColorStateList color_,
              ::ColorStateList gapColor_,
              float opacity_,
              float blur_,
              ::SizeType widthType_,
              float width_,
              std::vector<float> dashArray_,
              LineCapType lineCap_,
              float offset_)
    : color(std::move(color_))
    , gapColor(std::move(gapColor_))
    , opacity(std::move(opacity_))
    , blur(std::move(blur_))
    , widthType(std::move(widthType_))
    , width(std::move(width_))
    , dashArray(std::move(dashArray_))
    , lineCap(std::move(lineCap_))
    , offset(std::move(offset_))
    {}
};
