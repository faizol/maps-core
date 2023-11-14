// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_vector_layer.djinni

#include "NativeTiled2dMapVectorLayerLocalDataProviderInterface.h"  // my header
#include "Future_jni.hpp"
#include "Marshal.hpp"
#include "NativeDataLoaderResult.h"
#include "NativeTextureLoaderResult.h"

namespace djinni_generated {

NativeTiled2dMapVectorLayerLocalDataProviderInterface::NativeTiled2dMapVectorLayerLocalDataProviderInterface() : ::djinni::JniInterface<::Tiled2dMapVectorLayerLocalDataProviderInterface, NativeTiled2dMapVectorLayerLocalDataProviderInterface>("io/openmobilemaps/mapscore/shared/map/layers/tiled/vector/Tiled2dMapVectorLayerLocalDataProviderInterface$CppProxy") {}

NativeTiled2dMapVectorLayerLocalDataProviderInterface::~NativeTiled2dMapVectorLayerLocalDataProviderInterface() = default;

NativeTiled2dMapVectorLayerLocalDataProviderInterface::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeTiled2dMapVectorLayerLocalDataProviderInterface::JavaProxy::~JavaProxy() = default;

std::optional<std::string> NativeTiled2dMapVectorLayerLocalDataProviderInterface::JavaProxy::getStyleJson() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTiled2dMapVectorLayerLocalDataProviderInterface>::get();
    auto jret = (jstring)jniEnv->CallObjectMethod(Handle::get().get(), data.method_getStyleJson);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::Optional<std::optional, ::djinni::String>::toCpp(jniEnv, jret);
}
::djinni::Future<::TextureLoaderResult> NativeTiled2dMapVectorLayerLocalDataProviderInterface::JavaProxy::loadSpriteAsync(int32_t c_scale) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTiled2dMapVectorLayerLocalDataProviderInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_loadSpriteAsync,
                                         ::djinni::get(::djinni::I32::fromCpp(jniEnv, c_scale)));
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::FutureAdaptor<::djinni_generated::NativeTextureLoaderResult>::toCpp(jniEnv, jret);
}
::djinni::Future<::DataLoaderResult> NativeTiled2dMapVectorLayerLocalDataProviderInterface::JavaProxy::loadSpriteJsonAsync(int32_t c_scale) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTiled2dMapVectorLayerLocalDataProviderInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_loadSpriteJsonAsync,
                                         ::djinni::get(::djinni::I32::fromCpp(jniEnv, c_scale)));
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::FutureAdaptor<::djinni_generated::NativeDataLoaderResult>::toCpp(jniEnv, jret);
}
::djinni::Future<::DataLoaderResult> NativeTiled2dMapVectorLayerLocalDataProviderInterface::JavaProxy::loadGeojson(const std::string & c_sourceName, const std::string & c_url) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTiled2dMapVectorLayerLocalDataProviderInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_loadGeojson,
                                         ::djinni::get(::djinni::String::fromCpp(jniEnv, c_sourceName)),
                                         ::djinni::get(::djinni::String::fromCpp(jniEnv, c_url)));
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::FutureAdaptor<::djinni_generated::NativeDataLoaderResult>::toCpp(jniEnv, jret);
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_vector_Tiled2dMapVectorLayerLocalDataProviderInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::Tiled2dMapVectorLayerLocalDataProviderInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jstring JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_vector_Tiled2dMapVectorLayerLocalDataProviderInterface_00024CppProxy_native_1getStyleJson(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Tiled2dMapVectorLayerLocalDataProviderInterface>(nativeRef);
        auto r = ref->getStyleJson();
        return ::djinni::release(::djinni::Optional<std::optional, ::djinni::String>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT ::djinni::FutureAdaptor<::djinni_generated::NativeTextureLoaderResult>::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_vector_Tiled2dMapVectorLayerLocalDataProviderInterface_00024CppProxy_native_1loadSpriteAsync(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_scale)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Tiled2dMapVectorLayerLocalDataProviderInterface>(nativeRef);
        auto r = ref->loadSpriteAsync(::djinni::I32::toCpp(jniEnv, j_scale));
        return ::djinni::release(::djinni::FutureAdaptor<::djinni_generated::NativeTextureLoaderResult>::fromCpp(jniEnv, std::move(r)));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT ::djinni::FutureAdaptor<::djinni_generated::NativeDataLoaderResult>::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_vector_Tiled2dMapVectorLayerLocalDataProviderInterface_00024CppProxy_native_1loadSpriteJsonAsync(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_scale)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Tiled2dMapVectorLayerLocalDataProviderInterface>(nativeRef);
        auto r = ref->loadSpriteJsonAsync(::djinni::I32::toCpp(jniEnv, j_scale));
        return ::djinni::release(::djinni::FutureAdaptor<::djinni_generated::NativeDataLoaderResult>::fromCpp(jniEnv, std::move(r)));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT ::djinni::FutureAdaptor<::djinni_generated::NativeDataLoaderResult>::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_vector_Tiled2dMapVectorLayerLocalDataProviderInterface_00024CppProxy_native_1loadGeojson(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_sourceName, jstring j_url)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Tiled2dMapVectorLayerLocalDataProviderInterface>(nativeRef);
        auto r = ref->loadGeojson(::djinni::String::toCpp(jniEnv, j_sourceName),
                                  ::djinni::String::toCpp(jniEnv, j_url));
        return ::djinni::release(::djinni::FutureAdaptor<::djinni_generated::NativeDataLoaderResult>::fromCpp(jniEnv, std::move(r)));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

} // namespace djinni_generated
