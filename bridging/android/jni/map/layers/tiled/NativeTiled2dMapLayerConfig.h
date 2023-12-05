// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_layer.djinni

#pragma once

#include "Tiled2dMapLayerConfig.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeTiled2dMapLayerConfig final : ::djinni::JniInterface<::Tiled2dMapLayerConfig, NativeTiled2dMapLayerConfig> {
public:
    using CppType = std::shared_ptr<::Tiled2dMapLayerConfig>;
    using CppOptType = std::shared_ptr<::Tiled2dMapLayerConfig>;
    using JniType = jobject;

    using Boxed = NativeTiled2dMapLayerConfig;

    ~NativeTiled2dMapLayerConfig();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeTiled2dMapLayerConfig>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeTiled2dMapLayerConfig>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeTiled2dMapLayerConfig();
    friend ::djinni::JniClass<NativeTiled2dMapLayerConfig>;
    friend ::djinni::JniInterface<::Tiled2dMapLayerConfig, NativeTiled2dMapLayerConfig>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::Tiled2dMapLayerConfig
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        int32_t getCoordinateSystemIdentifier() override;
        std::string getTileUrl(int32_t x, int32_t y, int32_t t, int32_t zoom) override;
        std::vector<::Tiled2dMapZoomLevelInfo> getZoomLevelInfos() override;
        ::Tiled2dMapZoomInfo getZoomInfo() override;
        std::string getLayerName() override;
        std::optional<::Tiled2dMapVectorSettings> getVectorSettings() override;
        std::optional<std::vector<double>> getBounds() override;

    private:
        friend ::djinni::JniInterface<::Tiled2dMapLayerConfig, ::djinni_generated::NativeTiled2dMapLayerConfig>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/map/layers/tiled/Tiled2dMapLayerConfig") };
    const jmethodID method_getCoordinateSystemIdentifier { ::djinni::jniGetMethodID(clazz.get(), "getCoordinateSystemIdentifier", "()I") };
    const jmethodID method_getTileUrl { ::djinni::jniGetMethodID(clazz.get(), "getTileUrl", "(IIII)Ljava/lang/String;") };
    const jmethodID method_getZoomLevelInfos { ::djinni::jniGetMethodID(clazz.get(), "getZoomLevelInfos", "()Ljava/util/ArrayList;") };
    const jmethodID method_getZoomInfo { ::djinni::jniGetMethodID(clazz.get(), "getZoomInfo", "()Lio/openmobilemaps/mapscore/shared/map/layers/tiled/Tiled2dMapZoomInfo;") };
    const jmethodID method_getLayerName { ::djinni::jniGetMethodID(clazz.get(), "getLayerName", "()Ljava/lang/String;") };
    const jmethodID method_getVectorSettings { ::djinni::jniGetMethodID(clazz.get(), "getVectorSettings", "()Lio/openmobilemaps/mapscore/shared/map/layers/tiled/Tiled2dMapVectorSettings;") };
    const jmethodID method_getBounds { ::djinni::jniGetMethodID(clazz.get(), "getBounds", "()Ljava/util/ArrayList;") };
};

} // namespace djinni_generated
