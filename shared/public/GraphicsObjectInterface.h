// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from graphicsobjects.djinni

#pragma once

#include "RenderPassConfig.h"
#include "RenderingContextInterface.h"
#include <cstdint>
#include <memory>

class GraphicsObjectInterface {
public:
    virtual ~GraphicsObjectInterface() {}

    /** Returns true, if graphics object is ready to be drawn */
    virtual bool isReady() = 0;

    /** Ensure calling on graphics thread */
    virtual void setup(const std::shared_ptr<::RenderingContextInterface> & context) = 0;

    /** Clear graphics object and invalidate isReady */
    virtual void clear() = 0;

    /**
     * by defaults objects if masked are only rendered where the mask is set
     * if setting this flag the masked is applied inversly
     */
    virtual void setIsInverseMasked(bool inversed) = 0;

    /** Render the graphics object; ensure calling on graphics thread */
    virtual void render(const std::shared_ptr<::RenderingContextInterface> & context, const ::RenderPassConfig & renderPass, int64_t mvpMatrix, bool isMasked, double screenPixelAsRealMeterFactor) = 0;
};
