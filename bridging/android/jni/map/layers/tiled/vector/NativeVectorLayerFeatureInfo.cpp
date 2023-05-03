// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_vector_layer.djinni

#include "NativeVectorLayerFeatureInfo.h"  // my header
#include "Marshal.hpp"
#include "NativeVectorLayerFeatureInfoValue.h"

namespace djinni_generated {

NativeVectorLayerFeatureInfo::NativeVectorLayerFeatureInfo() = default;

NativeVectorLayerFeatureInfo::~NativeVectorLayerFeatureInfo() = default;

auto NativeVectorLayerFeatureInfo::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativeVectorLayerFeatureInfo>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.identifier)),
                                                           ::djinni::get(::djinni::Map<::djinni::String, ::djinni_generated::NativeVectorLayerFeatureInfoValue>::fromCpp(jniEnv, c.properties)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativeVectorLayerFeatureInfo::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 3);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativeVectorLayerFeatureInfo>::get();
    return {::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_identifier)),
            ::djinni::Map<::djinni::String, ::djinni_generated::NativeVectorLayerFeatureInfoValue>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_properties))};
}

} // namespace djinni_generated