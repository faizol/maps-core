// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from text.djinni

#pragma once

#include "FontLoaderInterface.h"
#include "LayerInterface.h"
#include <memory>
#include <vector>

class TextInfoInterface;

class TextLayerInterface {
public:
    virtual ~TextLayerInterface() = default;

    static /*not-null*/ std::shared_ptr<TextLayerInterface> create(const /*not-null*/ std::shared_ptr<::FontLoaderInterface> & fontLoader);

    virtual void setTexts(const std::vector</*not-null*/ std::shared_ptr<TextInfoInterface>> & texts) = 0;

    virtual /*not-null*/ std::shared_ptr<::LayerInterface> asLayerInterface() = 0;

    virtual void invalidate() = 0;
};
