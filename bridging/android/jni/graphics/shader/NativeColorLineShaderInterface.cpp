// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from shader.djinni

#include "NativeColorLineShaderInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeLineStyle.h"
#include "NativeShaderProgramInterface.h"

namespace djinni_generated {

NativeColorLineShaderInterface::NativeColorLineShaderInterface() : ::djinni::JniInterface<::ColorLineShaderInterface, NativeColorLineShaderInterface>("io/openmobilemaps/mapscore/shared/graphics/shader/ColorLineShaderInterface$CppProxy") {}

NativeColorLineShaderInterface::~NativeColorLineShaderInterface() = default;


CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_shader_ColorLineShaderInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::ColorLineShaderInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_shader_ColorLineShaderInterface_00024CppProxy_native_1setStyle(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeLineStyle::JniType j_lineStyle)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::ColorLineShaderInterface>(nativeRef);
        ref->setStyle(::djinni_generated::NativeLineStyle::toCpp(jniEnv, j_lineStyle));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_shader_ColorLineShaderInterface_00024CppProxy_native_1setHighlighted(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jboolean j_highlighted)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::ColorLineShaderInterface>(nativeRef);
        ref->setHighlighted(::djinni::Bool::toCpp(jniEnv, j_highlighted));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_shader_ColorLineShaderInterface_00024CppProxy_native_1asShaderProgramInterface(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::ColorLineShaderInterface>(nativeRef);
        auto r = ref->asShaderProgramInterface();
        return ::djinni::release(::djinni_generated::NativeShaderProgramInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

} // namespace djinni_generated
