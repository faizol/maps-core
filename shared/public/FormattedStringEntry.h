// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from text.djinni

#pragma once

#include <string>
#include <utility>

struct FormattedStringEntry final {
    std::string text;
    float scale;

    friend bool operator==(const FormattedStringEntry& lhs, const FormattedStringEntry& rhs);
    friend bool operator!=(const FormattedStringEntry& lhs, const FormattedStringEntry& rhs);

    friend bool operator<(const FormattedStringEntry& lhs, const FormattedStringEntry& rhs);
    friend bool operator>(const FormattedStringEntry& lhs, const FormattedStringEntry& rhs);

    friend bool operator<=(const FormattedStringEntry& lhs, const FormattedStringEntry& rhs);
    friend bool operator>=(const FormattedStringEntry& lhs, const FormattedStringEntry& rhs);

    FormattedStringEntry(std::string text_,
                         float scale_)
    : text(std::move(text_))
    , scale(std::move(scale_))
    {}
};
