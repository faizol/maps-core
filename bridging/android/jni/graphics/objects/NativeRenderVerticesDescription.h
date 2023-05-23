// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#pragma once

#include "RenderVerticesDescription.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeRenderVerticesDescription final {
public:
    using CppType = ::RenderVerticesDescription;
    using JniType = jobject;

    using Boxed = NativeRenderVerticesDescription;

    ~NativeRenderVerticesDescription();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeRenderVerticesDescription();
    friend ::djinni::JniClass<NativeRenderVerticesDescription>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/graphics/objects/RenderVerticesDescription") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/util/ArrayList;I)V") };
    const jfieldID field_vertices { ::djinni::jniGetFieldID(clazz.get(), "vertices", "Ljava/util/ArrayList;") };
    const jfieldID field_styleIndex { ::djinni::jniGetFieldID(clazz.get(), "styleIndex", "I") };
};

} // namespace djinni_generated
