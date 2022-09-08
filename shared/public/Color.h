// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from common.djinni

#pragma once

#include <utility>

struct Color final {
    float r;
    float g;
    float b;
    float a;

    friend bool operator==(const Color& lhs, const Color& rhs);
    friend bool operator!=(const Color& lhs, const Color& rhs);

    friend bool operator<(const Color& lhs, const Color& rhs);
    friend bool operator>(const Color& lhs, const Color& rhs);

    friend bool operator<=(const Color& lhs, const Color& rhs);
    friend bool operator>=(const Color& lhs, const Color& rhs);

    Color(float r_,
          float g_,
          float b_,
          float a_)
    : r(std::move(r_))
    , g(std::move(g_))
    , b(std::move(b_))
    , a(std::move(a_))
    {}
};
