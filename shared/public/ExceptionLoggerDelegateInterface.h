// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from exception_logger.djinni

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>

class ExceptionLoggerDelegateInterface {
public:
    virtual ~ExceptionLoggerDelegateInterface() = default;

    virtual void logMessage(const std::string & errorDomain, int32_t code, const std::unordered_map<std::string, std::string> & customValues, const std::string & function, const std::string & file, int32_t line) = 0;
};
