// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wmts_capabilities.djinni

#import "MCWmtsTileMatrix.h"
#import <Foundation/Foundation.h>

@interface MCWmtsTileMatrixSet : NSObject
- (nonnull instancetype)initWithIdentifier:(nonnull NSString *)identifier
                coordinateSystemIdentifier:(nonnull NSString *)coordinateSystemIdentifier
                                  matrices:(nonnull NSArray<MCWmtsTileMatrix *> *)matrices;
+ (nonnull instancetype)wmtsTileMatrixSetWithIdentifier:(nonnull NSString *)identifier
                             coordinateSystemIdentifier:(nonnull NSString *)coordinateSystemIdentifier
                                               matrices:(nonnull NSArray<MCWmtsTileMatrix *> *)matrices;

@property (nonatomic, readonly, nonnull) NSString * identifier;

@property (nonatomic, readonly, nonnull) NSString * coordinateSystemIdentifier;

@property (nonatomic, readonly, nonnull) NSArray<MCWmtsTileMatrix *> * matrices;

@end