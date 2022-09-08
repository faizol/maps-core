// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tiled_layer.djinni

#import "MCTiled2dMapSourceInterface+Private.h"
#import "MCTiled2dMapSourceInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "MCErrorManager+Private.h"
#import "MCLayerReadyState+Private.h"
#import "MCRectCoord+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCTiled2dMapSourceInterface ()

- (id)initWithCpp:(const std::shared_ptr<::Tiled2dMapSourceInterface>&)cppRef;

@end

@implementation MCTiled2dMapSourceInterface {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::Tiled2dMapSourceInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::Tiled2dMapSourceInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (void)onVisibleBoundsChanged:(nonnull MCRectCoord *)visibleBounds
                          curT:(int32_t)curT
                          zoom:(double)zoom {
    try {
        _cppRefHandle.get()->onVisibleBoundsChanged(::djinni_generated::RectCoord::toCpp(visibleBounds),
                                                    ::djinni::I32::toCpp(curT),
                                                    ::djinni::F64::toCpp(zoom));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setMinZoomLevelIdentifier:(nullable NSNumber *)value {
    try {
        _cppRefHandle.get()->setMinZoomLevelIdentifier(::djinni::Optional<std::optional, ::djinni::I32>::toCpp(value));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable NSNumber *)getMinZoomLevelIdentifier {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getMinZoomLevelIdentifier();
        return ::djinni::Optional<std::optional, ::djinni::I32>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setMaxZoomLevelIdentifier:(nullable NSNumber *)value {
    try {
        _cppRefHandle.get()->setMaxZoomLevelIdentifier(::djinni::Optional<std::optional, ::djinni::I32>::toCpp(value));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable NSNumber *)getMaxZoomLevelIdentifier {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getMaxZoomLevelIdentifier();
        return ::djinni::Optional<std::optional, ::djinni::I32>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)pause {
    try {
        _cppRefHandle.get()->pause();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)resume {
    try {
        _cppRefHandle.get()->resume();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (MCLayerReadyState)isReadyToRenderOffscreen {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->isReadyToRenderOffscreen();
        return ::djinni::Enum<::LayerReadyState, MCLayerReadyState>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setErrorManager:(nullable MCErrorManager *)errorManager {
    try {
        _cppRefHandle.get()->setErrorManager(::djinni_generated::ErrorManager::toCpp(errorManager));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)forceReload {
    try {
        _cppRefHandle.get()->forceReload();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto Tiled2dMapSourceInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto Tiled2dMapSourceInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<MCTiled2dMapSourceInterface>(cpp);
}

}  // namespace djinni_generated

@end
