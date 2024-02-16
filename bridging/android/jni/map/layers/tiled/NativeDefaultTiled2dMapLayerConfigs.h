// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_layer.djinni

#pragma once

#include "DefaultTiled2dMapLayerConfigs.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeDefaultTiled2dMapLayerConfigs final : ::djinni::JniInterface<::DefaultTiled2dMapLayerConfigs, NativeDefaultTiled2dMapLayerConfigs> {
public:
    using CppType = std::shared_ptr<::DefaultTiled2dMapLayerConfigs>;
    using CppOptType = std::shared_ptr<::DefaultTiled2dMapLayerConfigs>;
    using JniType = jobject;

    using Boxed = NativeDefaultTiled2dMapLayerConfigs;

    ~NativeDefaultTiled2dMapLayerConfigs();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeDefaultTiled2dMapLayerConfigs>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeDefaultTiled2dMapLayerConfigs>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeDefaultTiled2dMapLayerConfigs();
    friend ::djinni::JniClass<NativeDefaultTiled2dMapLayerConfigs>;
    friend ::djinni::JniInterface<::DefaultTiled2dMapLayerConfigs, NativeDefaultTiled2dMapLayerConfigs>;

};

} // namespace djinni_generated