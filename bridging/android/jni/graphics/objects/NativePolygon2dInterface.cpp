// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#include "NativePolygon2dInterface.h"  // my header
#include "NativeGraphicsObjectInterface.h"
#include "NativeMaskingObjectInterface.h"
#include "NativeSharedBytes.h"

namespace djinni_generated {

NativePolygon2dInterface::NativePolygon2dInterface() : ::djinni::JniInterface<::Polygon2dInterface, NativePolygon2dInterface>("io/openmobilemaps/mapscore/shared/graphics/objects/Polygon2dInterface$CppProxy") {}

NativePolygon2dInterface::~NativePolygon2dInterface() = default;

NativePolygon2dInterface::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativePolygon2dInterface::JavaProxy::~JavaProxy() = default;

void NativePolygon2dInterface::JavaProxy::setVertices(const ::SharedBytes & c_vertices, const ::SharedBytes & c_indices) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativePolygon2dInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_setVertices,
                           ::djinni::get(::djinni_generated::NativeSharedBytes::fromCpp(jniEnv, c_vertices)),
                           ::djinni::get(::djinni_generated::NativeSharedBytes::fromCpp(jniEnv, c_indices)));
    ::djinni::jniExceptionCheck(jniEnv);
}
/*not-null*/ std::shared_ptr<::GraphicsObjectInterface> NativePolygon2dInterface::JavaProxy::asGraphicsObject() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativePolygon2dInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_asGraphicsObject);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeGraphicsObjectInterface::toCpp(jniEnv, jret);
}
/*not-null*/ std::shared_ptr<::MaskingObjectInterface> NativePolygon2dInterface::JavaProxy::asMaskingObject() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativePolygon2dInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_asMaskingObject);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeMaskingObjectInterface::toCpp(jniEnv, jret);
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_Polygon2dInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::Polygon2dInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_Polygon2dInterface_00024CppProxy_native_1setVertices(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeSharedBytes::JniType j_vertices, ::djinni_generated::NativeSharedBytes::JniType j_indices)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Polygon2dInterface>(nativeRef);
        ref->setVertices(::djinni_generated::NativeSharedBytes::toCpp(jniEnv, j_vertices),
                         ::djinni_generated::NativeSharedBytes::toCpp(jniEnv, j_indices));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_Polygon2dInterface_00024CppProxy_native_1asGraphicsObject(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Polygon2dInterface>(nativeRef);
        auto r = ref->asGraphicsObject();
        return ::djinni::release(::djinni_generated::NativeGraphicsObjectInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_Polygon2dInterface_00024CppProxy_native_1asMaskingObject(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Polygon2dInterface>(nativeRef);
        auto r = ref->asMaskingObject();
        return ::djinni::release(::djinni_generated::NativeMaskingObjectInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

} // namespace djinni_generated
