// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni

#pragma once

#include "RenderPassConfig.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeRenderPassConfig final {
public:
    using CppType = ::RenderPassConfig;
    using JniType = jobject;

    using Boxed = NativeRenderPassConfig;

    ~NativeRenderPassConfig();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeRenderPassConfig();
    friend ::djinni::JniClass<NativeRenderPassConfig>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/graphics/RenderPassConfig") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(I)V") };
    const jfieldID field_renderPassIndex { ::djinni::jniGetFieldID(clazz.get(), "renderPassIndex", "I") };
};

} // namespace djinni_generated
