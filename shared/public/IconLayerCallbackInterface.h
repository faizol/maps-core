// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from icon.djinni

#pragma once

#include <memory>
#include <vector>

class IconInfoInterface;

class IconLayerCallbackInterface {
public:
    virtual ~IconLayerCallbackInterface() {}

    virtual bool onClickConfirmed(const std::vector<std::shared_ptr<IconInfoInterface>> & icons) = 0;
};
