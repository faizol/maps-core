// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tiled_vector_layer.djinni

#import "MCFontLoaderInterface.h"
#import "MCLayerInterface.h"
#import "MCLoaderInterface.h"
#import <Foundation/Foundation.h>
@class MCTiled2dMapVectorLayerInterface;


@interface MCTiled2dMapVectorLayerInterface : NSObject

+ (nullable MCTiled2dMapVectorLayerInterface *)createFromStyleJson:(nonnull NSString *)path
                                                      vectorSource:(nonnull NSString *)vectorSource
                                                           loaders:(nonnull NSArray<id<MCLoaderInterface>> *)loaders
                                                        fontLoader:(nullable id<MCFontLoaderInterface>)fontLoader
                                                          dpFactor:(double)dpFactor;

- (nullable id<MCLayerInterface>)asLayerInterface;

@end
