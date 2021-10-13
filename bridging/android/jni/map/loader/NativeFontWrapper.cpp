// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from loader.djinni

#include "NativeFontWrapper.h"  // my header
#include "Marshal.hpp"
#include "NativeVec2D.h"

namespace djinni_generated {

NativeFontWrapper::NativeFontWrapper() = default;

NativeFontWrapper::~NativeFontWrapper() = default;

auto NativeFontWrapper::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativeFontWrapper>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.name)),
                                                           ::djinni::get(::djinni::F64::fromCpp(jniEnv, c.ascender)),
                                                           ::djinni::get(::djinni::F64::fromCpp(jniEnv, c.descender)),
                                                           ::djinni::get(::djinni::F64::fromCpp(jniEnv, c.spaceAdvance)),
                                                           ::djinni::get(::djinni_generated::NativeVec2D::fromCpp(jniEnv, c.bitmapSize)),
                                                           ::djinni::get(::djinni::F64::fromCpp(jniEnv, c.size)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativeFontWrapper::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 7);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativeFontWrapper>::get();
    return {::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_name)),
            ::djinni::F64::toCpp(jniEnv, jniEnv->GetDoubleField(j, data.field_ascender)),
            ::djinni::F64::toCpp(jniEnv, jniEnv->GetDoubleField(j, data.field_descender)),
            ::djinni::F64::toCpp(jniEnv, jniEnv->GetDoubleField(j, data.field_spaceAdvance)),
            ::djinni_generated::NativeVec2D::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_bitmapSize)),
            ::djinni::F64::toCpp(jniEnv, jniEnv->GetDoubleField(j, data.field_size))};
}

}  // namespace djinni_generated