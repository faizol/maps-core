// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from shader.djinni

#pragma once

#include <memory>

class ShaderProgramInterface;
struct RasterShaderStyle;

class RasterShaderInterface {
public:
    virtual ~RasterShaderInterface() = default;

    virtual void setStyle(const RasterShaderStyle & style) = 0;

    virtual /*not-null*/ std::shared_ptr<ShaderProgramInterface> asShaderProgramInterface() = 0;
};
