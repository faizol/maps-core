// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from layer_object.djinni

#include "NativeLayerObjectInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeRenderConfigInterface.h"

namespace djinni_generated {

NativeLayerObjectInterface::NativeLayerObjectInterface() : ::djinni::JniInterface<::LayerObjectInterface, NativeLayerObjectInterface>("io/openmobilemaps/mapscore/shared/map/layers/objects/LayerObjectInterface$CppProxy") {}

NativeLayerObjectInterface::~NativeLayerObjectInterface() = default;


CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_objects_LayerObjectInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::LayerObjectInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_objects_LayerObjectInterface_00024CppProxy_native_1update(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::LayerObjectInterface>(nativeRef);
        ref->update();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_objects_LayerObjectInterface_00024CppProxy_native_1getRenderConfig(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::LayerObjectInterface>(nativeRef);
        auto r = ref->getRenderConfig();
        return ::djinni::release(::djinni::List<::djinni_generated::NativeRenderConfigInterface>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

} // namespace djinni_generated
