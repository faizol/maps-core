// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from loader.djinni

#import "MCFontData+Private.h"
#import "DJIMarshal+Private.h"
#import "MCFontGlyph+Private.h"
#import "MCFontWrapper+Private.h"
#include <cassert>

namespace djinni_generated {

auto FontData::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni_generated::FontWrapper::toCpp(obj.info),
            ::djinni::List<::djinni_generated::FontGlyph>::toCpp(obj.glyphs)};
}

auto FontData::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[MCFontData alloc] initWithInfo:(::djinni_generated::FontWrapper::fromCpp(cpp.info))
                                     glyphs:(::djinni::List<::djinni_generated::FontGlyph>::fromCpp(cpp.glyphs))];
}

}  // namespace djinni_generated
