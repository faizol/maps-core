// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_raster_layer.djinni

#pragma once

#include "Tiled2dMapRasterLayerInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeTiled2dMapRasterLayerInterface final : ::djinni::JniInterface<::Tiled2dMapRasterLayerInterface, NativeTiled2dMapRasterLayerInterface> {
public:
    using CppType = std::shared_ptr<::Tiled2dMapRasterLayerInterface>;
    using CppOptType = std::shared_ptr<::Tiled2dMapRasterLayerInterface>;
    using JniType = jobject;

    using Boxed = NativeTiled2dMapRasterLayerInterface;

    ~NativeTiled2dMapRasterLayerInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeTiled2dMapRasterLayerInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeTiled2dMapRasterLayerInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeTiled2dMapRasterLayerInterface();
    friend ::djinni::JniClass<NativeTiled2dMapRasterLayerInterface>;
    friend ::djinni::JniInterface<::Tiled2dMapRasterLayerInterface, NativeTiled2dMapRasterLayerInterface>;

};

} // namespace djinni_generated
