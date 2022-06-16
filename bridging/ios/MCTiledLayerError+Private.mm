// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from error_manager.djinni

#import "MCTiledLayerError+Private.h"
#import "DJIMarshal+Private.h"
#import "MCLoaderStatus+Private.h"
#import "MCRectCoord+Private.h"
#include <cassert>

namespace djinni_generated {

auto TiledLayerError::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::Enum<::LoaderStatus, MCLoaderStatus>::toCpp(obj.status),
            ::djinni::Optional<std::optional, ::djinni::String>::toCpp(obj.errorCode),
            ::djinni::String::toCpp(obj.layerName),
            ::djinni::String::toCpp(obj.url),
            ::djinni::Bool::toCpp(obj.isRecoverable),
            ::djinni_generated::RectCoord::toCpp(obj.bounds)};
}

auto TiledLayerError::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[MCTiledLayerError alloc] initWithStatus:(::djinni::Enum<::LoaderStatus, MCLoaderStatus>::fromCpp(cpp.status))
                                           errorCode:(::djinni::Optional<std::optional, ::djinni::String>::fromCpp(cpp.errorCode))
                                           layerName:(::djinni::String::fromCpp(cpp.layerName))
                                                 url:(::djinni::String::fromCpp(cpp.url))
                                       isRecoverable:(::djinni::Bool::fromCpp(cpp.isRecoverable))
                                              bounds:(::djinni_generated::RectCoord::fromCpp(cpp.bounds))];
}

}  // namespace djinni_generated