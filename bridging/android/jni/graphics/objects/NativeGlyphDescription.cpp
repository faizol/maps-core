// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#include "NativeGlyphDescription.h"  // my header
#include "NativeQuad2dD.h"

namespace djinni_generated {

NativeGlyphDescription::NativeGlyphDescription() = default;

NativeGlyphDescription::~NativeGlyphDescription() = default;

auto NativeGlyphDescription::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativeGlyphDescription>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni_generated::NativeQuad2dD::fromCpp(jniEnv, c.frame)),
                                                           ::djinni::get(::djinni_generated::NativeQuad2dD::fromCpp(jniEnv, c.textureCoordinates)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativeGlyphDescription::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 3);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativeGlyphDescription>::get();
    return {::djinni_generated::NativeQuad2dD::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_frame)),
            ::djinni_generated::NativeQuad2dD::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_textureCoordinates))};
}

} // namespace djinni_generated
