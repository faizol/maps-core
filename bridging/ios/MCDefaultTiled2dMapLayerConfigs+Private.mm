// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_layer.djinni

#import "MCDefaultTiled2dMapLayerConfigs+Private.h"
#import "MCDefaultTiled2dMapLayerConfigs.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "MCTiled2dMapLayerConfig+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCDefaultTiled2dMapLayerConfigs ()

- (id)initWithCpp:(const std::shared_ptr<::DefaultTiled2dMapLayerConfigs>&)cppRef;

@end

@implementation MCDefaultTiled2dMapLayerConfigs {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::DefaultTiled2dMapLayerConfigs>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::DefaultTiled2dMapLayerConfigs>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (nullable id<MCTiled2dMapLayerConfig>)webMercator:(nonnull NSString *)layerName
                                          urlFormat:(nonnull NSString *)urlFormat {
    try {
        auto objcpp_result_ = ::DefaultTiled2dMapLayerConfigs::webMercator(::djinni::String::toCpp(layerName),
                                                                           ::djinni::String::toCpp(urlFormat));
        return ::djinni_generated::Tiled2dMapLayerConfig::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto DefaultTiled2dMapLayerConfigs::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto DefaultTiled2dMapLayerConfigs::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<MCDefaultTiled2dMapLayerConfigs>(cpp);
}

} // namespace djinni_generated

@end