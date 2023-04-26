// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from text.djinni

#pragma once

#include "Coord.h"
#include "Font.h"
#include <optional>
#include <vector>

enum class Anchor;
enum class TextJustify;
enum class TextSymbolPlacement;
struct FormattedStringEntry;

class TextInfoInterface {
public:
    virtual ~TextInfoInterface() = default;

    virtual std::vector<FormattedStringEntry> getText() = 0;

    virtual ::Coord getCoordinate() = 0;

    virtual ::Font getFont() = 0;

    virtual Anchor getTextAnchor() = 0;

    virtual TextJustify getTextJustify() = 0;

    virtual TextSymbolPlacement getSymbolPlacement() = 0;

    virtual std::optional<std::vector<::Coord>> getLineCoordinates() = 0;
};
