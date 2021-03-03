// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wmts_capabilities.djinni

#import "MCTiled2dMapLayerConfig.h"
#import "MCTiled2dMapZoomInfo.h"
#import "MCTiled2dMapZoomLevelInfo.h"
#import "MCWmtsLayerDescription.h"
#import <Foundation/Foundation.h>


@interface MCWmtsTiled2dMapLayerConfigFactory : NSObject

+ (nullable id<MCTiled2dMapLayerConfig>)create:(nonnull MCWmtsLayerDescription *)wmtsLayerConfiguration
                                 zoomLevelInfo:(nonnull NSArray<MCTiled2dMapZoomLevelInfo *> *)zoomLevelInfo
                                      zoomInfo:(nonnull MCTiled2dMapZoomInfo *)zoomInfo
                    coordinateSystemIdentifier:(nonnull NSString *)coordinateSystemIdentifier;

@end
