// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tiled_vector_layer.djinni

#include "NativeTiled2dMapVectorLayerInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeFontLoaderInterface.h"
#include "NativeLayerInterface.h"
#include "NativeLoaderInterface.h"

namespace djinni_generated {

NativeTiled2dMapVectorLayerInterface::NativeTiled2dMapVectorLayerInterface() : ::djinni::JniInterface<::Tiled2dMapVectorLayerInterface, NativeTiled2dMapVectorLayerInterface>("io/openmobilemaps/mapscore/shared/map/layers/tiled/vector/Tiled2dMapVectorLayerInterface$CppProxy") {}

NativeTiled2dMapVectorLayerInterface::~NativeTiled2dMapVectorLayerInterface() = default;


CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_vector_Tiled2dMapVectorLayerInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::Tiled2dMapVectorLayerInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_vector_Tiled2dMapVectorLayerInterface_00024CppProxy_createFromStyleJson(JNIEnv* jniEnv, jobject /*this*/, jstring j_path, jstring j_vectorSource, jobject j_loaders, ::djinni_generated::NativeFontLoaderInterface::JniType j_fontLoader, jdouble j_dpFactor)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::Tiled2dMapVectorLayerInterface::createFromStyleJson(::djinni::String::toCpp(jniEnv, j_path),
                                                                       ::djinni::String::toCpp(jniEnv, j_vectorSource),
                                                                       ::djinni::List<::djinni_generated::NativeLoaderInterface>::toCpp(jniEnv, j_loaders),
                                                                       ::djinni_generated::NativeFontLoaderInterface::toCpp(jniEnv, j_fontLoader),
                                                                       ::djinni::F64::toCpp(jniEnv, j_dpFactor));
        return ::djinni::release(::djinni_generated::NativeTiled2dMapVectorLayerInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT ::djinni_generated::NativeLayerInterface::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_vector_Tiled2dMapVectorLayerInterface_00024CppProxy_native_1asLayerInterface(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::Tiled2dMapVectorLayerInterface>(nativeRef);
        auto r = ref->asLayerInterface();
        return ::djinni::release(::djinni_generated::NativeLayerInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
