// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni
#ifdef __cplusplus

#include "RendererInterface.h"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol MCRendererInterface;

namespace djinni_generated {

class RendererInterface
{
public:
    using CppType = std::shared_ptr<::RendererInterface>;
    using CppOptType = std::shared_ptr<::RendererInterface>;
    using ObjcType = id<MCRendererInterface>;

    using Boxed = RendererInterface;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

} // namespace djinni_generated

#endif
