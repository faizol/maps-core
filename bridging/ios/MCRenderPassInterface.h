// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#import "MCGraphicsObjectInterface.h"
#import "MCRenderPassConfig.h"
#import <Foundation/Foundation.h>
@class MCRenderObjectInterface;


@protocol MCRenderPassInterface

- (nonnull NSArray<MCRenderObjectInterface *> *)getRenderObjects;

- (void)addRenderObject:(nullable MCRenderObjectInterface *)renderObject;

- (nonnull MCRenderPassConfig *)getRenderPassConfig;

- (nullable id<MCGraphicsObjectInterface>)getMaskingObject;

@end
