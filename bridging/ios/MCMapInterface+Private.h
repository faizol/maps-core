// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni
#ifdef __cplusplus

#include "MapInterface.h"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class MCMapInterface;

namespace djinni_generated {

class MapInterface
{
public:
    using CppType = std::shared_ptr<::MapInterface>;
    using CppOptType = std::shared_ptr<::MapInterface>;
    using ObjcType = MCMapInterface*;

    using Boxed = MapInterface;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

} // namespace djinni_generated

#endif
