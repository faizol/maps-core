// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from loader.djinni

#pragma once

#include "Font.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeFont final {
public:
    using CppType = ::Font;
    using JniType = jobject;

    using Boxed = NativeFont;

    ~NativeFont();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeFont();
    friend ::djinni::JniClass<NativeFont>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/map/loader/Font") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/lang/String;)V") };
    const jfieldID field_name { ::djinni::jniGetFieldID(clazz.get(), "name", "Ljava/lang/String;") };
};

} // namespace djinni_generated
