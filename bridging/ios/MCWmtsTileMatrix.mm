// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wmts_capabilities.djinni

#import "MCWmtsTileMatrix.h"


@implementation MCWmtsTileMatrix

- (nonnull instancetype)initWithIdentifier:(nonnull NSString *)identifier
                          scaleDenominator:(double)scaleDenominator
                            topLeftCornerX:(double)topLeftCornerX
                            topLeftCornerY:(double)topLeftCornerY
                                 tileWidth:(int32_t)tileWidth
                                tileHeight:(int32_t)tileHeight
                               matrixWidth:(int32_t)matrixWidth
                              matrixHeight:(int32_t)matrixHeight
{
    if (self = [super init]) {
        _identifier = [identifier copy];
        _scaleDenominator = scaleDenominator;
        _topLeftCornerX = topLeftCornerX;
        _topLeftCornerY = topLeftCornerY;
        _tileWidth = tileWidth;
        _tileHeight = tileHeight;
        _matrixWidth = matrixWidth;
        _matrixHeight = matrixHeight;
    }
    return self;
}

+ (nonnull instancetype)wmtsTileMatrixWithIdentifier:(nonnull NSString *)identifier
                                    scaleDenominator:(double)scaleDenominator
                                      topLeftCornerX:(double)topLeftCornerX
                                      topLeftCornerY:(double)topLeftCornerY
                                           tileWidth:(int32_t)tileWidth
                                          tileHeight:(int32_t)tileHeight
                                         matrixWidth:(int32_t)matrixWidth
                                        matrixHeight:(int32_t)matrixHeight
{
    return [(MCWmtsTileMatrix*)[self alloc] initWithIdentifier:identifier
                                              scaleDenominator:scaleDenominator
                                                topLeftCornerX:topLeftCornerX
                                                topLeftCornerY:topLeftCornerY
                                                     tileWidth:tileWidth
                                                    tileHeight:tileHeight
                                                   matrixWidth:matrixWidth
                                                  matrixHeight:matrixHeight];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p identifier:%@ scaleDenominator:%@ topLeftCornerX:%@ topLeftCornerY:%@ tileWidth:%@ tileHeight:%@ matrixWidth:%@ matrixHeight:%@>", self.class, (void *)self, self.identifier, @(self.scaleDenominator), @(self.topLeftCornerX), @(self.topLeftCornerY), @(self.tileWidth), @(self.tileHeight), @(self.matrixWidth), @(self.matrixHeight)];
}

@end
