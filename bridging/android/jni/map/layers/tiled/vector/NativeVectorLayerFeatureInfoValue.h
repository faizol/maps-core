// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_vector_layer.djinni

#pragma once

#include "VectorLayerFeatureInfoValue.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeVectorLayerFeatureInfoValue final {
public:
    using CppType = ::VectorLayerFeatureInfoValue;
    using JniType = jobject;

    using Boxed = NativeVectorLayerFeatureInfoValue;

    ~NativeVectorLayerFeatureInfoValue();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeVectorLayerFeatureInfoValue();
    friend ::djinni::JniClass<NativeVectorLayerFeatureInfoValue>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/map/layers/tiled/vector/VectorLayerFeatureInfoValue") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/lang/String;Ljava/lang/Double;Ljava/lang/Long;Ljava/lang/Boolean;Lio/openmobilemaps/mapscore/shared/graphics/common/Color;Ljava/util/ArrayList;Ljava/util/ArrayList;)V") };
    const jfieldID field_stringValue { ::djinni::jniGetFieldID(clazz.get(), "stringValue", "Ljava/lang/String;") };
    const jfieldID field_doubleValue { ::djinni::jniGetFieldID(clazz.get(), "doubleValue", "Ljava/lang/Double;") };
    const jfieldID field_intValue { ::djinni::jniGetFieldID(clazz.get(), "intValue", "Ljava/lang/Long;") };
    const jfieldID field_boolValue { ::djinni::jniGetFieldID(clazz.get(), "boolValue", "Ljava/lang/Boolean;") };
    const jfieldID field_colorValue { ::djinni::jniGetFieldID(clazz.get(), "colorValue", "Lio/openmobilemaps/mapscore/shared/graphics/common/Color;") };
    const jfieldID field_listFloatValue { ::djinni::jniGetFieldID(clazz.get(), "listFloatValue", "Ljava/util/ArrayList;") };
    const jfieldID field_listStringValue { ::djinni::jniGetFieldID(clazz.get(), "listStringValue", "Ljava/util/ArrayList;") };
};

} // namespace djinni_generated
