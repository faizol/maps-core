// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni
#ifdef __cplusplus

#include "CameraInterface.h"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol MCCameraInterface;

namespace djinni_generated {

class CameraInterface
{
public:
    using CppType = std::shared_ptr<::CameraInterface>;
    using CppOptType = std::shared_ptr<::CameraInterface>;
    using ObjcType = id<MCCameraInterface>;

    using Boxed = CameraInterface;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

} // namespace djinni_generated

#endif
