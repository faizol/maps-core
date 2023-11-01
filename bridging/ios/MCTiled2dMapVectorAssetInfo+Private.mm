// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_vector_layer.djinni

#import "MCTiled2dMapVectorAssetInfo+Private.h"
#import "DJIMarshal+Private.h"
#import "MCRectI+Private.h"
#import "MCTextureHolderInterface+Private.h"
#include <cassert>

namespace djinni_generated {

auto Tiled2dMapVectorAssetInfo::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::Map<::djinni::String, ::djinni_generated::RectI>::toCpp(obj.featureIdentifiersUv),
            ::djinni::Optional<std::optional, ::djinni_generated::TextureHolderInterface>::toCpp(obj.texture)};
}

auto Tiled2dMapVectorAssetInfo::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[MCTiled2dMapVectorAssetInfo alloc] initWithFeatureIdentifiersUv:(::djinni::Map<::djinni::String, ::djinni_generated::RectI>::fromCpp(cpp.featureIdentifiersUv))
                                                                     texture:(::djinni::Optional<std::optional, ::djinni_generated::TextureHolderInterface>::fromCpp(cpp.texture))];
}

} // namespace djinni_generated
