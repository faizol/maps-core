// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tiled_raster_layer.djinni

#import "MCLayerInterface.h"
#import "MCTileLoaderInterface.h"
#import "MCTiled2dMapLayerConfig.h"
#import <Foundation/Foundation.h>
@class MCTiled2dMapRasterLayerInterface;
@protocol MCTiled2dMapRasterLayerCallbackInterface;


@interface MCTiled2dMapRasterLayerInterface : NSObject

+ (nullable MCTiled2dMapRasterLayerInterface *)create:(nullable id<MCTiled2dMapLayerConfig>)layerConfig
                                           tileLoader:(nullable id<MCTileLoaderInterface>)tileLoader;

- (nullable id<MCLayerInterface>)asLayerInterface;

- (void)setCallbackHandler:(nullable id<MCTiled2dMapRasterLayerCallbackInterface>)handler;

- (nullable id<MCTiled2dMapRasterLayerCallbackInterface>)getCallbackHandler;

- (void)removeCallbackHandler;

- (void)setAlpha:(double)alpha;

- (double)getAlpha;

@end
