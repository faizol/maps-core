// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from text.djinni

#import "MCAnchor.h"
#import "MCCoord.h"
#import "MCFont.h"
#import "MCFormattedStringEntry.h"
#import "MCTextJustify.h"
#import "MCTextSymbolPlacement.h"
#import <Foundation/Foundation.h>


@protocol MCTextInfoInterface

- (nonnull NSArray<MCFormattedStringEntry *> *)getText;

- (nonnull MCCoord *)getCoordinate;

- (nonnull MCFont *)getFont;

- (MCAnchor)getTextAnchor;

- (MCTextJustify)getTextJustify;

- (MCTextSymbolPlacement)getSymbolPlacement;

- (nullable NSArray<MCCoord *> *)getLineCoordinates;

@end
