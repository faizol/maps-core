// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from coordinate_system.djinni

#pragma once

#include "RectCoord.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeRectCoord final {
public:
    using CppType = ::RectCoord;
    using JniType = jobject;

    using Boxed = NativeRectCoord;

    ~NativeRectCoord();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeRectCoord();
    friend ::djinni::JniClass<NativeRectCoord>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/map/coordinates/RectCoord") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Lio/openmobilemaps/mapscore/shared/map/coordinates/Coord;Lio/openmobilemaps/mapscore/shared/map/coordinates/Coord;)V") };
    const jfieldID field_topLeft { ::djinni::jniGetFieldID(clazz.get(), "topLeft", "Lio/openmobilemaps/mapscore/shared/map/coordinates/Coord;") };
    const jfieldID field_bottomRight { ::djinni::jniGetFieldID(clazz.get(), "bottomRight", "Lio/openmobilemaps/mapscore/shared/map/coordinates/Coord;") };
};

} // namespace djinni_generated
