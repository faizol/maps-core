// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_layer.djinni

#import "MCTiled2dMapZoomLevelInfo+Private.h"
#import "DJIMarshal+Private.h"
#import "MCRectCoord+Private.h"
#include <cassert>

namespace djinni_generated {

auto Tiled2dMapZoomLevelInfo::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::F64::toCpp(obj.zoom),
            ::djinni::F32::toCpp(obj.tileWidthLayerSystemUnits),
            ::djinni::I32::toCpp(obj.numTilesX),
            ::djinni::I32::toCpp(obj.numTilesY),
            ::djinni::I32::toCpp(obj.numTilesT),
            ::djinni::I32::toCpp(obj.zoomLevelIdentifier),
            ::djinni_generated::RectCoord::toCpp(obj.bounds)};
}

auto Tiled2dMapZoomLevelInfo::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[MCTiled2dMapZoomLevelInfo alloc] initWithZoom:(::djinni::F64::fromCpp(cpp.zoom))
                                 tileWidthLayerSystemUnits:(::djinni::F32::fromCpp(cpp.tileWidthLayerSystemUnits))
                                                 numTilesX:(::djinni::I32::fromCpp(cpp.numTilesX))
                                                 numTilesY:(::djinni::I32::fromCpp(cpp.numTilesY))
                                                 numTilesT:(::djinni::I32::fromCpp(cpp.numTilesT))
                                       zoomLevelIdentifier:(::djinni::I32::fromCpp(cpp.zoomLevelIdentifier))
                                                    bounds:(::djinni_generated::RectCoord::fromCpp(cpp.bounds))];
}

} // namespace djinni_generated
