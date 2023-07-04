// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from coordinate_system.djinni

#include "NativeBoundingBoxInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeCoord.h"
#include "NativeRectCoord.h"

namespace djinni_generated {

NativeBoundingBoxInterface::NativeBoundingBoxInterface() : ::djinni::JniInterface<::BoundingBoxInterface, NativeBoundingBoxInterface>("io/openmobilemaps/mapscore/shared/map/coordinates/BoundingBoxInterface$CppProxy") {}

NativeBoundingBoxInterface::~NativeBoundingBoxInterface() = default;


CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_coordinates_BoundingBoxInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::BoundingBoxInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_coordinates_BoundingBoxInterface_create(JNIEnv* jniEnv, jobject /*this*/, jint j_systemIdentifier)
{
    try {
        auto r = ::BoundingBoxInterface::create(::djinni::I32::toCpp(jniEnv, j_systemIdentifier));
        return ::djinni::release(::djinni_generated::NativeBoundingBoxInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_coordinates_BoundingBoxInterface_00024CppProxy_native_1addPoint(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_p)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::BoundingBoxInterface>(nativeRef);
        ref->addPoint(::djinni_generated::NativeCoord::toCpp(jniEnv, j_p));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_coordinates_BoundingBoxInterface_00024CppProxy_native_1asRectCoord(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::BoundingBoxInterface>(nativeRef);
        auto r = ref->asRectCoord();
        return ::djinni::release(::djinni_generated::NativeRectCoord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_coordinates_BoundingBoxInterface_00024CppProxy_native_1getCenter(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::BoundingBoxInterface>(nativeRef);
        auto r = ref->getCenter();
        return ::djinni::release(::djinni_generated::NativeCoord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_coordinates_BoundingBoxInterface_00024CppProxy_native_1getMin(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::BoundingBoxInterface>(nativeRef);
        auto r = ref->getMin();
        return ::djinni::release(::djinni_generated::NativeCoord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_coordinates_BoundingBoxInterface_00024CppProxy_native_1getMax(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::BoundingBoxInterface>(nativeRef);
        auto r = ref->getMax();
        return ::djinni::release(::djinni_generated::NativeCoord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jint JNICALL Java_io_openmobilemaps_mapscore_shared_map_coordinates_BoundingBoxInterface_00024CppProxy_native_1getSystemIdentifier(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::BoundingBoxInterface>(nativeRef);
        auto r = ref->getSystemIdentifier();
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

} // namespace djinni_generated
