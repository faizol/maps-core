// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from icon.djinni

#pragma once

#include "IconLayerCallbackInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeIconLayerCallbackInterface final : ::djinni::JniInterface<::IconLayerCallbackInterface, NativeIconLayerCallbackInterface> {
public:
    using CppType = std::shared_ptr<::IconLayerCallbackInterface>;
    using CppOptType = std::shared_ptr<::IconLayerCallbackInterface>;
    using JniType = jobject;

    using Boxed = NativeIconLayerCallbackInterface;

    ~NativeIconLayerCallbackInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeIconLayerCallbackInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeIconLayerCallbackInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeIconLayerCallbackInterface();
    friend ::djinni::JniClass<NativeIconLayerCallbackInterface>;
    friend ::djinni::JniInterface<::IconLayerCallbackInterface, NativeIconLayerCallbackInterface>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::IconLayerCallbackInterface
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        bool onClickConfirmed(const std::vector</*not-null*/ std::shared_ptr<::IconInfoInterface>> & icons) override;
        bool onLongPress(const std::vector<std::shared_ptr<::IconInfoInterface>> & icons) override;

    private:
        friend ::djinni::JniInterface<::IconLayerCallbackInterface, ::djinni_generated::NativeIconLayerCallbackInterface>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/map/layers/icon/IconLayerCallbackInterface") };
    const jmethodID method_onClickConfirmed { ::djinni::jniGetMethodID(clazz.get(), "onClickConfirmed", "(Ljava/util/ArrayList;)Z") };
    const jmethodID method_onLongPress { ::djinni::jniGetMethodID(clazz.get(), "onLongPress", "(Ljava/util/ArrayList;)Z") };
};

} // namespace djinni_generated
