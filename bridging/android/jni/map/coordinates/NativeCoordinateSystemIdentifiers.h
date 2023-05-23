// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from coordinate_system.djinni

#pragma once

#include "CoordinateSystemIdentifiers.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeCoordinateSystemIdentifiers final : ::djinni::JniInterface<::CoordinateSystemIdentifiers, NativeCoordinateSystemIdentifiers> {
public:
    using CppType = std::shared_ptr<::CoordinateSystemIdentifiers>;
    using CppOptType = std::shared_ptr<::CoordinateSystemIdentifiers>;
    using JniType = jobject;

    using Boxed = NativeCoordinateSystemIdentifiers;

    ~NativeCoordinateSystemIdentifiers();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeCoordinateSystemIdentifiers>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeCoordinateSystemIdentifiers>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeCoordinateSystemIdentifiers();
    friend ::djinni::JniClass<NativeCoordinateSystemIdentifiers>;
    friend ::djinni::JniInterface<::CoordinateSystemIdentifiers, NativeCoordinateSystemIdentifiers>;

};

} // namespace djinni_generated
