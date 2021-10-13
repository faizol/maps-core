// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from graphicsobjects.djinni

#pragma once

#include <memory>
#include <vector>

class GraphicsObjectInterface;
class TextureHolderInterface;
struct TextDescription;

class TextInterface {
public:
    virtual ~TextInterface() {}

    virtual void setTexts(const std::vector<TextDescription> & texts) = 0;

    virtual void loadTexture(const std::shared_ptr<TextureHolderInterface> & textureHolder) = 0;

    virtual void removeTexture() = 0;

    virtual std::shared_ptr<GraphicsObjectInterface> asGraphicsObject() = 0;
};