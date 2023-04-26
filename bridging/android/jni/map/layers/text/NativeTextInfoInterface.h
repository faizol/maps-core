// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from text.djinni

#pragma once

#include "TextInfoInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeTextInfoInterface final : ::djinni::JniInterface<::TextInfoInterface, NativeTextInfoInterface> {
public:
    using CppType = std::shared_ptr<::TextInfoInterface>;
    using CppOptType = std::shared_ptr<::TextInfoInterface>;
    using JniType = jobject;

    using Boxed = NativeTextInfoInterface;

    ~NativeTextInfoInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeTextInfoInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeTextInfoInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeTextInfoInterface();
    friend ::djinni::JniClass<NativeTextInfoInterface>;
    friend ::djinni::JniInterface<::TextInfoInterface, NativeTextInfoInterface>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::TextInfoInterface
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        std::vector<::FormattedStringEntry> getText() override;
        ::Coord getCoordinate() override;
        ::Font getFont() override;
        ::Anchor getTextAnchor() override;
        ::TextJustify getTextJustify() override;
        ::TextSymbolPlacement getSymbolPlacement() override;
        std::optional<std::vector<::Coord>> getLineCoordinates() override;

    private:
        friend ::djinni::JniInterface<::TextInfoInterface, ::djinni_generated::NativeTextInfoInterface>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/map/layers/text/TextInfoInterface") };
    const jmethodID method_getText { ::djinni::jniGetMethodID(clazz.get(), "getText", "()Ljava/util/ArrayList;") };
    const jmethodID method_getCoordinate { ::djinni::jniGetMethodID(clazz.get(), "getCoordinate", "()Lio/openmobilemaps/mapscore/shared/map/coordinates/Coord;") };
    const jmethodID method_getFont { ::djinni::jniGetMethodID(clazz.get(), "getFont", "()Lio/openmobilemaps/mapscore/shared/map/loader/Font;") };
    const jmethodID method_getTextAnchor { ::djinni::jniGetMethodID(clazz.get(), "getTextAnchor", "()Lio/openmobilemaps/mapscore/shared/map/layers/text/Anchor;") };
    const jmethodID method_getTextJustify { ::djinni::jniGetMethodID(clazz.get(), "getTextJustify", "()Lio/openmobilemaps/mapscore/shared/map/layers/text/TextJustify;") };
    const jmethodID method_getSymbolPlacement { ::djinni::jniGetMethodID(clazz.get(), "getSymbolPlacement", "()Lio/openmobilemaps/mapscore/shared/map/layers/text/TextSymbolPlacement;") };
    const jmethodID method_getLineCoordinates { ::djinni::jniGetMethodID(clazz.get(), "getLineCoordinates", "()Ljava/util/ArrayList;") };
};

} // namespace djinni_generated
