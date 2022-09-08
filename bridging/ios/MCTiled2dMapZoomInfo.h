// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tiled_layer.djinni

#import <Foundation/Foundation.h>

@interface MCTiled2dMapZoomInfo : NSObject
- (nonnull instancetype)initWithZoomLevelScaleFactor:(float)zoomLevelScaleFactor
                               numDrawPreviousLayers:(int32_t)numDrawPreviousLayers
                                  adaptScaleToScreen:(BOOL)adaptScaleToScreen
                                            maskTile:(BOOL)maskTile;
+ (nonnull instancetype)tiled2dMapZoomInfoWithZoomLevelScaleFactor:(float)zoomLevelScaleFactor
                                             numDrawPreviousLayers:(int32_t)numDrawPreviousLayers
                                                adaptScaleToScreen:(BOOL)adaptScaleToScreen
                                                          maskTile:(BOOL)maskTile;

/** this factor is applied to the the scale */
@property (nonatomic, readonly) float zoomLevelScaleFactor;

@property (nonatomic, readonly) int32_t numDrawPreviousLayers;

/**
 * if this flag is set to true the map is scaled according to the wmts scaledenominator (https://gis.stackexchange.com/questions/315881/what-is-wmts-scaledenominator)
 * and the screen ppi
 */
@property (nonatomic, readonly) BOOL adaptScaleToScreen;

@property (nonatomic, readonly) BOOL maskTile;

@end
