// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#pragma once

#include "RenderPassInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeRenderPassInterface final : ::djinni::JniInterface<::RenderPassInterface, NativeRenderPassInterface> {
public:
    using CppType = std::shared_ptr<::RenderPassInterface>;
    using CppOptType = std::shared_ptr<::RenderPassInterface>;
    using JniType = jobject;

    using Boxed = NativeRenderPassInterface;

    ~NativeRenderPassInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeRenderPassInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeRenderPassInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeRenderPassInterface();
    friend ::djinni::JniClass<NativeRenderPassInterface>;
    friend ::djinni::JniInterface<::RenderPassInterface, NativeRenderPassInterface>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::RenderPassInterface
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        std::vector<std::shared_ptr<::RenderObjectInterface>> getRenderObjects() override;
        void addRenderObject(const std::shared_ptr<::RenderObjectInterface> & renderObject) override;
        ::RenderPassConfig getRenderPassConfig() override;
        std::shared_ptr<::GraphicsObjectInterface> getMaskingObject() override;

    private:
        friend ::djinni::JniInterface<::RenderPassInterface, ::djinni_generated::NativeRenderPassInterface>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/graphics/RenderPassInterface") };
    const jmethodID method_getRenderObjects { ::djinni::jniGetMethodID(clazz.get(), "getRenderObjects", "()Ljava/util/ArrayList;") };
    const jmethodID method_addRenderObject { ::djinni::jniGetMethodID(clazz.get(), "addRenderObject", "(Lio/openmobilemaps/mapscore/shared/graphics/RenderObjectInterface;)V") };
    const jmethodID method_getRenderPassConfig { ::djinni::jniGetMethodID(clazz.get(), "getRenderPassConfig", "()Lio/openmobilemaps/mapscore/shared/graphics/RenderPassConfig;") };
    const jmethodID method_getMaskingObject { ::djinni::jniGetMethodID(clazz.get(), "getMaskingObject", "()Lio/openmobilemaps/mapscore/shared/graphics/objects/GraphicsObjectInterface;") };
};

}  // namespace djinni_generated
