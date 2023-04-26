// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from shader.djinni
#ifdef __cplusplus

#include "StretchShaderInterface.h"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol MCStretchShaderInterface;

namespace djinni_generated {

class StretchShaderInterface
{
public:
    using CppType = std::shared_ptr<::StretchShaderInterface>;
    using CppOptType = std::shared_ptr<::StretchShaderInterface>;
    using ObjcType = id<MCStretchShaderInterface>;

    using Boxed = StretchShaderInterface;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

} // namespace djinni_generated

#endif
