// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from icon.djinni
#ifdef __cplusplus

#include "IconLayerCallbackInterface.h"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol MCIconLayerCallbackInterface;

namespace djinni_generated {

class IconLayerCallbackInterface
{
public:
    using CppType = std::shared_ptr<::IconLayerCallbackInterface>;
    using CppOptType = std::shared_ptr<::IconLayerCallbackInterface>;
    using ObjcType = id<MCIconLayerCallbackInterface>;

    using Boxed = IconLayerCallbackInterface;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

} // namespace djinni_generated

#endif
