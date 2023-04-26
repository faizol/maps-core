// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from shader.djinni

#import "MCRasterShaderStyle+Private.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto RasterShaderStyle::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::F32::toCpp(obj.opacity),
            ::djinni::F32::toCpp(obj.brightnessMin),
            ::djinni::F32::toCpp(obj.brightnessMax),
            ::djinni::F32::toCpp(obj.contrast),
            ::djinni::F32::toCpp(obj.saturation)};
}

auto RasterShaderStyle::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[MCRasterShaderStyle alloc] initWithOpacity:(::djinni::F32::fromCpp(cpp.opacity))
                                          brightnessMin:(::djinni::F32::fromCpp(cpp.brightnessMin))
                                          brightnessMax:(::djinni::F32::fromCpp(cpp.brightnessMax))
                                               contrast:(::djinni::F32::fromCpp(cpp.contrast))
                                             saturation:(::djinni::F32::fromCpp(cpp.saturation))];
}

} // namespace djinni_generated
