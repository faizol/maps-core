// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from graphicsobjects.djinni

#include "NativeMaskingObjectInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeRenderPassConfig.h"
#include "NativeRenderingContextInterface.h"

namespace djinni_generated {

NativeMaskingObjectInterface::NativeMaskingObjectInterface() : ::djinni::JniInterface<::MaskingObjectInterface, NativeMaskingObjectInterface>("io/openmobilemaps/mapscore/shared/graphics/objects/MaskingObjectInterface$CppProxy") {}

NativeMaskingObjectInterface::~NativeMaskingObjectInterface() = default;

NativeMaskingObjectInterface::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeMaskingObjectInterface::JavaProxy::~JavaProxy() = default;

void NativeMaskingObjectInterface::JavaProxy::renderAsMask(const std::shared_ptr<::RenderingContextInterface> & c_context, const ::RenderPassConfig & c_renderPass, int64_t c_mvpMatrix) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeMaskingObjectInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_renderAsMask,
                           ::djinni::get(::djinni_generated::NativeRenderingContextInterface::fromCpp(jniEnv, c_context)),
                           ::djinni::get(::djinni_generated::NativeRenderPassConfig::fromCpp(jniEnv, c_renderPass)),
                           ::djinni::get(::djinni::I64::fromCpp(jniEnv, c_mvpMatrix)));
    ::djinni::jniExceptionCheck(jniEnv);
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_MaskingObjectInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::MaskingObjectInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_MaskingObjectInterface_00024CppProxy_native_1renderAsMask(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeRenderingContextInterface::JniType j_context, ::djinni_generated::NativeRenderPassConfig::JniType j_renderPass, jlong j_mvpMatrix)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::MaskingObjectInterface>(nativeRef);
        ref->renderAsMask(::djinni_generated::NativeRenderingContextInterface::toCpp(jniEnv, j_context),
                          ::djinni_generated::NativeRenderPassConfig::toCpp(jniEnv, j_renderPass),
                          ::djinni::I64::toCpp(jniEnv, j_mvpMatrix));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated
