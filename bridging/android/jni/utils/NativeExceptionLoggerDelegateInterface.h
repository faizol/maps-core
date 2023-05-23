// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from exception_logger.djinni

#pragma once

#include "ExceptionLoggerDelegateInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeExceptionLoggerDelegateInterface final : ::djinni::JniInterface<::ExceptionLoggerDelegateInterface, NativeExceptionLoggerDelegateInterface> {
public:
    using CppType = std::shared_ptr<::ExceptionLoggerDelegateInterface>;
    using CppOptType = std::shared_ptr<::ExceptionLoggerDelegateInterface>;
    using JniType = jobject;

    using Boxed = NativeExceptionLoggerDelegateInterface;

    ~NativeExceptionLoggerDelegateInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeExceptionLoggerDelegateInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeExceptionLoggerDelegateInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeExceptionLoggerDelegateInterface();
    friend ::djinni::JniClass<NativeExceptionLoggerDelegateInterface>;
    friend ::djinni::JniInterface<::ExceptionLoggerDelegateInterface, NativeExceptionLoggerDelegateInterface>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::ExceptionLoggerDelegateInterface
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void logMessage(const std::string & errorDomain, int32_t code, const std::unordered_map<std::string, std::string> & customValues, const std::string & function, const std::string & file, int32_t line) override;

    private:
        friend ::djinni::JniInterface<::ExceptionLoggerDelegateInterface, ::djinni_generated::NativeExceptionLoggerDelegateInterface>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/utils/ExceptionLoggerDelegateInterface") };
    const jmethodID method_logMessage { ::djinni::jniGetMethodID(clazz.get(), "logMessage", "(Ljava/lang/String;ILjava/util/HashMap;Ljava/lang/String;Ljava/lang/String;I)V") };
};

} // namespace djinni_generated
