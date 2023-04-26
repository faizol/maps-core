// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from icon.djinni

#pragma once

#include "LayerInterface.h"
#include <memory>
#include <vector>

class IconInfoInterface;
class IconLayerCallbackInterface;

class IconLayerInterface {
public:
    virtual ~IconLayerInterface() = default;

    static /*not-null*/ std::shared_ptr<IconLayerInterface> create();

    virtual void setIcons(const std::vector</*not-null*/ std::shared_ptr<IconInfoInterface>> & icons) = 0;

    virtual std::vector</*not-null*/ std::shared_ptr<IconInfoInterface>> getIcons() = 0;

    virtual void remove(const /*not-null*/ std::shared_ptr<IconInfoInterface> & icon) = 0;

    virtual void add(const /*not-null*/ std::shared_ptr<IconInfoInterface> & icon) = 0;

    virtual void clear() = 0;

    virtual void setCallbackHandler(const /*not-null*/ std::shared_ptr<IconLayerCallbackInterface> & handler) = 0;

    virtual /*not-null*/ std::shared_ptr<::LayerInterface> asLayerInterface() = 0;

    virtual void invalidate() = 0;

    virtual void setLayerClickable(bool isLayerClickable) = 0;
};
