// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#include "NativeLayerInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeMapInterface.h"
#include "NativeMaskingObjectInterface.h"
#include "NativeRenderPassInterface.h"

namespace djinni_generated {

NativeLayerInterface::NativeLayerInterface() : ::djinni::JniInterface<::LayerInterface, NativeLayerInterface>("io/openmobilemaps/mapscore/shared/map/LayerInterface$CppProxy") {}

NativeLayerInterface::~NativeLayerInterface() = default;

NativeLayerInterface::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeLayerInterface::JavaProxy::~JavaProxy() = default;

void NativeLayerInterface::JavaProxy::setMaskingObject(const std::shared_ptr<::MaskingObjectInterface> & c_maskingObject) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeLayerInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_setMaskingObject,
                           ::djinni::get(::djinni_generated::NativeMaskingObjectInterface::fromCpp(jniEnv, c_maskingObject)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeLayerInterface::JavaProxy::update() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeLayerInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_update);
    ::djinni::jniExceptionCheck(jniEnv);
}
std::vector<std::shared_ptr<::RenderPassInterface>> NativeLayerInterface::JavaProxy::buildRenderPasses() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeLayerInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_buildRenderPasses);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::List<::djinni_generated::NativeRenderPassInterface>::toCpp(jniEnv, jret);
}
void NativeLayerInterface::JavaProxy::onAdded(const std::shared_ptr<::MapInterface> & c_mapInterface) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeLayerInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onAdded,
                           ::djinni::get(::djinni_generated::NativeMapInterface::fromCpp(jniEnv, c_mapInterface)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeLayerInterface::JavaProxy::onRemoved() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeLayerInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onRemoved);
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeLayerInterface::JavaProxy::pause() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeLayerInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_pause);
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeLayerInterface::JavaProxy::resume() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeLayerInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_resume);
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeLayerInterface::JavaProxy::hide() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeLayerInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_hide);
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeLayerInterface::JavaProxy::show() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeLayerInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_show);
    ::djinni::jniExceptionCheck(jniEnv);
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_LayerInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::LayerInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_LayerInterface_00024CppProxy_native_1setMaskingObject(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeMaskingObjectInterface::JniType j_maskingObject)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LayerInterface>(nativeRef);
        ref->setMaskingObject(::djinni_generated::NativeMaskingObjectInterface::toCpp(jniEnv, j_maskingObject));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_LayerInterface_00024CppProxy_native_1update(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LayerInterface>(nativeRef);
        ref->update();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_LayerInterface_00024CppProxy_native_1buildRenderPasses(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LayerInterface>(nativeRef);
        auto r = ref->buildRenderPasses();
        return ::djinni::release(::djinni::List<::djinni_generated::NativeRenderPassInterface>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_LayerInterface_00024CppProxy_native_1onAdded(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_mapInterface)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LayerInterface>(nativeRef);
        ref->onAdded(::djinni_generated::NativeMapInterface::toCpp(jniEnv, j_mapInterface));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_LayerInterface_00024CppProxy_native_1onRemoved(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LayerInterface>(nativeRef);
        ref->onRemoved();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_LayerInterface_00024CppProxy_native_1pause(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LayerInterface>(nativeRef);
        ref->pause();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_LayerInterface_00024CppProxy_native_1resume(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LayerInterface>(nativeRef);
        ref->resume();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_LayerInterface_00024CppProxy_native_1hide(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LayerInterface>(nativeRef);
        ref->hide();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_LayerInterface_00024CppProxy_native_1show(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LayerInterface>(nativeRef);
        ref->show();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated
