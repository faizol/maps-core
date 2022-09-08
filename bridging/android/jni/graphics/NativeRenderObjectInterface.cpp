// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#include "NativeRenderObjectInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeGraphicsObjectInterface.h"

namespace djinni_generated {

NativeRenderObjectInterface::NativeRenderObjectInterface() : ::djinni::JniInterface<::RenderObjectInterface, NativeRenderObjectInterface>("io/openmobilemaps/mapscore/shared/graphics/RenderObjectInterface$CppProxy") {}

NativeRenderObjectInterface::~NativeRenderObjectInterface() = default;

NativeRenderObjectInterface::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeRenderObjectInterface::JavaProxy::~JavaProxy() = default;

std::shared_ptr<::GraphicsObjectInterface> NativeRenderObjectInterface::JavaProxy::getGraphicsObject() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeRenderObjectInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_getGraphicsObject);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeGraphicsObjectInterface::toCpp(jniEnv, jret);
}
bool NativeRenderObjectInterface::JavaProxy::hasCustomModelMatrix() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeRenderObjectInterface>::get();
    auto jret = jniEnv->CallBooleanMethod(Handle::get().get(), data.method_hasCustomModelMatrix);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::Bool::toCpp(jniEnv, jret);
}
bool NativeRenderObjectInterface::JavaProxy::isScreenSpaceCoords() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeRenderObjectInterface>::get();
    auto jret = jniEnv->CallBooleanMethod(Handle::get().get(), data.method_isScreenSpaceCoords);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::Bool::toCpp(jniEnv, jret);
}
std::vector<float> NativeRenderObjectInterface::JavaProxy::getCustomModelMatrix() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeRenderObjectInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_getCustomModelMatrix);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::List<::djinni::F32>::toCpp(jniEnv, jret);
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_RenderObjectInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::RenderObjectInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT ::djinni_generated::NativeGraphicsObjectInterface::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_RenderObjectInterface_00024CppProxy_native_1getGraphicsObject(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::RenderObjectInterface>(nativeRef);
        auto r = ref->getGraphicsObject();
        return ::djinni::release(::djinni_generated::NativeGraphicsObjectInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_RenderObjectInterface_00024CppProxy_native_1hasCustomModelMatrix(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::RenderObjectInterface>(nativeRef);
        auto r = ref->hasCustomModelMatrix();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_RenderObjectInterface_00024CppProxy_native_1isScreenSpaceCoords(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::RenderObjectInterface>(nativeRef);
        auto r = ref->isScreenSpaceCoords();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_RenderObjectInterface_00024CppProxy_native_1getCustomModelMatrix(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::RenderObjectInterface>(nativeRef);
        auto r = ref->getCustomModelMatrix();
        return ::djinni::release(::djinni::List<::djinni::F32>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
