// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from icon.djinni

#include "NativeIconInfoInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeBlendMode.h"
#include "NativeCoord.h"
#include "NativeIconType.h"
#include "NativeTextureHolderInterface.h"
#include "NativeVec2F.h"

namespace djinni_generated {

NativeIconInfoInterface::NativeIconInfoInterface() : ::djinni::JniInterface<::IconInfoInterface, NativeIconInfoInterface>("io/openmobilemaps/mapscore/shared/map/layers/icon/IconInfoInterface$CppProxy") {}

NativeIconInfoInterface::~NativeIconInfoInterface() = default;


CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconInfoInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::IconInfoInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jstring JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconInfoInterface_00024CppProxy_native_1getIdentifier(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::IconInfoInterface>(nativeRef);
        auto r = ref->getIdentifier();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT ::djinni_generated::NativeTextureHolderInterface::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconInfoInterface_00024CppProxy_native_1getTexture(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::IconInfoInterface>(nativeRef);
        auto r = ref->getTexture();
        return ::djinni::release(::djinni_generated::NativeTextureHolderInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconInfoInterface_00024CppProxy_native_1setCoordinate(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeCoord::JniType j_coord)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::IconInfoInterface>(nativeRef);
        ref->setCoordinate(::djinni_generated::NativeCoord::toCpp(jniEnv, j_coord));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT ::djinni_generated::NativeCoord::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconInfoInterface_00024CppProxy_native_1getCoordinate(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::IconInfoInterface>(nativeRef);
        auto r = ref->getCoordinate();
        return ::djinni::release(::djinni_generated::NativeCoord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconInfoInterface_00024CppProxy_native_1setIconSize(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeVec2F::JniType j_size)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::IconInfoInterface>(nativeRef);
        ref->setIconSize(::djinni_generated::NativeVec2F::toCpp(jniEnv, j_size));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT ::djinni_generated::NativeVec2F::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconInfoInterface_00024CppProxy_native_1getIconSize(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::IconInfoInterface>(nativeRef);
        auto r = ref->getIconSize();
        return ::djinni::release(::djinni_generated::NativeVec2F::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconInfoInterface_00024CppProxy_native_1setType(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_scaleType)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::IconInfoInterface>(nativeRef);
        ref->setType(::djinni_generated::NativeIconType::toCpp(jniEnv, j_scaleType));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconInfoInterface_00024CppProxy_native_1getType(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::IconInfoInterface>(nativeRef);
        auto r = ref->getType();
        return ::djinni::release(::djinni_generated::NativeIconType::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT ::djinni_generated::NativeVec2F::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconInfoInterface_00024CppProxy_native_1getIconAnchor(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::IconInfoInterface>(nativeRef);
        auto r = ref->getIconAnchor();
        return ::djinni::release(::djinni_generated::NativeVec2F::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT ::djinni_generated::NativeBlendMode::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconInfoInterface_00024CppProxy_native_1getBlendMode(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::IconInfoInterface>(nativeRef);
        auto r = ref->getBlendMode();
        return ::djinni::release(::djinni_generated::NativeBlendMode::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

} // namespace djinni_generated
