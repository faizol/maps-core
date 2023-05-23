// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from shader.djinni

#pragma once

#include "ColorLineShaderInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeColorLineShaderInterface final : ::djinni::JniInterface<::ColorLineShaderInterface, NativeColorLineShaderInterface> {
public:
    using CppType = std::shared_ptr<::ColorLineShaderInterface>;
    using CppOptType = std::shared_ptr<::ColorLineShaderInterface>;
    using JniType = jobject;

    using Boxed = NativeColorLineShaderInterface;

    ~NativeColorLineShaderInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeColorLineShaderInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeColorLineShaderInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeColorLineShaderInterface();
    friend ::djinni::JniClass<NativeColorLineShaderInterface>;
    friend ::djinni::JniInterface<::ColorLineShaderInterface, NativeColorLineShaderInterface>;

};

} // namespace djinni_generated
