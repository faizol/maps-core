// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from text.djinni

#import "MCTextFactory+Private.h"
#import "MCTextFactory.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "MCAnchor+Private.h"
#import "MCCoord+Private.h"
#import "MCFont+Private.h"
#import "MCFormattedStringEntry+Private.h"
#import "MCTextInfoInterface+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCTextFactory ()

- (id)initWithCpp:(const std::shared_ptr<::TextFactory>&)cppRef;

@end

@implementation MCTextFactory {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::TextFactory>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::TextFactory>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (nullable id<MCTextInfoInterface>)createText:(nonnull NSArray<MCFormattedStringEntry *> *)text
                                    coordinate:(nonnull MCCoord *)coordinate
                                          font:(nonnull MCFont *)font
                                    textAnchor:(MCAnchor)textAnchor {
    try {
        auto objcpp_result_ = ::TextFactory::createText(::djinni::List<::djinni_generated::FormattedStringEntry>::toCpp(text),
                                                        ::djinni_generated::Coord::toCpp(coordinate),
                                                        ::djinni_generated::Font::toCpp(font),
                                                        ::djinni::Enum<::Anchor, MCAnchor>::toCpp(textAnchor));
        return ::djinni_generated::TextInfoInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto TextFactory::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto TextFactory::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<MCTextFactory>(cpp);
}

}  // namespace djinni_generated

@end
