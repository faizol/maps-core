// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from line.djinni
#ifdef __cplusplus

#include "LineLayerInterface.h"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class MCLineLayerInterface;

namespace djinni_generated {

class LineLayerInterface
{
public:
    using CppType = std::shared_ptr<::LineLayerInterface>;
    using CppOptType = std::shared_ptr<::LineLayerInterface>;
    using ObjcType = MCLineLayerInterface*;

    using Boxed = LineLayerInterface;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

} // namespace djinni_generated

#endif
