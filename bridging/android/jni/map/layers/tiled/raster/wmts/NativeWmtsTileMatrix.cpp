// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from wmts_capabilities.djinni

#include "NativeWmtsTileMatrix.h"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeWmtsTileMatrix::NativeWmtsTileMatrix() = default;

NativeWmtsTileMatrix::~NativeWmtsTileMatrix() = default;

auto NativeWmtsTileMatrix::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativeWmtsTileMatrix>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.identifier)),
                                                           ::djinni::get(::djinni::F64::fromCpp(jniEnv, c.scaleDenominator)),
                                                           ::djinni::get(::djinni::F64::fromCpp(jniEnv, c.topLeftCornerX)),
                                                           ::djinni::get(::djinni::F64::fromCpp(jniEnv, c.topLeftCornerY)),
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.tileWidth)),
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.tileHeight)),
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.matrixWidth)),
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.matrixHeight)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativeWmtsTileMatrix::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 9);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativeWmtsTileMatrix>::get();
    return {::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_identifier)),
            ::djinni::F64::toCpp(jniEnv, jniEnv->GetDoubleField(j, data.field_scaleDenominator)),
            ::djinni::F64::toCpp(jniEnv, jniEnv->GetDoubleField(j, data.field_topLeftCornerX)),
            ::djinni::F64::toCpp(jniEnv, jniEnv->GetDoubleField(j, data.field_topLeftCornerY)),
            ::djinni::I32::toCpp(jniEnv, jniEnv->GetIntField(j, data.field_tileWidth)),
            ::djinni::I32::toCpp(jniEnv, jniEnv->GetIntField(j, data.field_tileHeight)),
            ::djinni::I32::toCpp(jniEnv, jniEnv->GetIntField(j, data.field_matrixWidth)),
            ::djinni::I32::toCpp(jniEnv, jniEnv->GetIntField(j, data.field_matrixHeight))};
}

} // namespace djinni_generated
