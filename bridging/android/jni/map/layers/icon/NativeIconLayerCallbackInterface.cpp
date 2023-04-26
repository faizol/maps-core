// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from icon.djinni

#include "NativeIconLayerCallbackInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeIconInfoInterface.h"

namespace djinni_generated {

NativeIconLayerCallbackInterface::NativeIconLayerCallbackInterface() : ::djinni::JniInterface<::IconLayerCallbackInterface, NativeIconLayerCallbackInterface>("io/openmobilemaps/mapscore/shared/map/layers/icon/IconLayerCallbackInterface$CppProxy") {}

NativeIconLayerCallbackInterface::~NativeIconLayerCallbackInterface() = default;

NativeIconLayerCallbackInterface::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeIconLayerCallbackInterface::JavaProxy::~JavaProxy() = default;

bool NativeIconLayerCallbackInterface::JavaProxy::onClickConfirmed(const std::vector</*not-null*/ std::shared_ptr<::IconInfoInterface>> & c_icons) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeIconLayerCallbackInterface>::get();
    auto jret = jniEnv->CallBooleanMethod(Handle::get().get(), data.method_onClickConfirmed,
                                          ::djinni::get(::djinni::List<::djinni_generated::NativeIconInfoInterface>::fromCpp(jniEnv, c_icons)));
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::Bool::toCpp(jniEnv, jret);
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconLayerCallbackInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::IconLayerCallbackInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jboolean JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconLayerCallbackInterface_00024CppProxy_native_1onClickConfirmed(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_icons)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::IconLayerCallbackInterface>(nativeRef);
        auto r = ref->onClickConfirmed(::djinni::List<::djinni_generated::NativeIconInfoInterface>::toCpp(jniEnv, j_icons));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

} // namespace djinni_generated
