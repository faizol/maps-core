// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_vector_layer.djinni

#import "MCFontLoaderInterface.h"
#import "MCLayerInterface.h"
#import "MCLoaderInterface.h"
#import "MCTiled2dMapReadyStateListener.h"
#import "MCTiled2dMapZoomInfo.h"
#import "MCVectorLayerFeatureInfoValue.h"
#import <Foundation/Foundation.h>
@class MCTiled2dMapVectorLayerInterface;
@protocol MCTiled2dMapVectorLayerLocalDataProviderInterface;
@protocol MCTiled2dMapVectorLayerSelectionCallbackInterface;
@protocol MCTiled2dMapVectorLayerSymbolDelegateInterface;


@interface MCTiled2dMapVectorLayerInterface : NSObject

/** Creator method for a vector layer specified by a url to a style json and the compulsory loader interfaces */
+ (nullable MCTiled2dMapVectorLayerInterface *)createFromStyleJson:(nonnull NSString *)layerName
                                                      styleJsonUrl:(nonnull NSString *)styleJsonUrl
                                                           loaders:(nonnull NSArray<id<MCLoaderInterface>> *)loaders
                                                        fontLoader:(nullable id<MCFontLoaderInterface>)fontLoader;

/**
 * Create a vector layer instance by fully providing a combination of properties, specifying the functionality of the layer. Non-optionals
 * are strictly needed in every case.
 * @param    layerName  name for the created layer
 * @param    styleJson  Optional string to specify a url to a style json or a style json string itself (see parameter "localStyleJson")
 * @param    localStyleJson  Optional flag to indicate whether parameter "styleJson" is local style json string or the url to a style json. Default is false.
 * @param    loaders Mandatory list of data loaders, which are used in the provided order
 * @param    fontLoader Mandatory interface to load font data
 * @param    localDataProvider When provided, the vector layer loads the style json, geojsons and the sprite infos via this interface
 * @param    customZoomInfo    Optionally specify a custom zoom info
 * @param    symbolDelegate Optional texture provider, when layers in the style use the flag "icon-image-custom-provider"
 * @return   the interface to the newly configured layer
 */
+ (nullable MCTiled2dMapVectorLayerInterface *)createExplicitly:(nonnull NSString *)layerName
                                                      styleJson:(nullable NSString *)styleJson
                                                 localStyleJson:(nullable NSNumber *)localStyleJson
                                                        loaders:(nonnull NSArray<id<MCLoaderInterface>> *)loaders
                                                     fontLoader:(nullable id<MCFontLoaderInterface>)fontLoader
                                              localDataProvider:(nullable id<MCTiled2dMapVectorLayerLocalDataProviderInterface>)localDataProvider
                                                 customZoomInfo:(nullable MCTiled2dMapZoomInfo *)customZoomInfo
                                                 symbolDelegate:(nullable id<MCTiled2dMapVectorLayerSymbolDelegateInterface>)symbolDelegate
                                                sourceUrlParams:(nullable NSDictionary<NSString *, NSString *> *)sourceUrlParams;

- (void)setSelectionDelegate:(nullable id<MCTiled2dMapVectorLayerSelectionCallbackInterface>)selectionDelegate;

- (nullable id<MCLayerInterface>)asLayerInterface;

- (void)setMinZoomLevelIdentifier:(nullable NSNumber *)value;

- (nullable NSNumber *)getMinZoomLevelIdentifier;

- (void)setMaxZoomLevelIdentifier:(nullable NSNumber *)value;

- (nullable NSNumber *)getMaxZoomLevelIdentifier;

- (nullable NSString *)getStyleMetadataJson;

- (void)setFeatureState:(nonnull NSString *)identifier
             properties:(nonnull NSDictionary<NSString *, MCVectorLayerFeatureInfoValue *> *)properties;

- (void)setGlobalState:(nonnull NSDictionary<NSString *, MCVectorLayerFeatureInfoValue *> *)properties;

- (void)setReadyStateListener:(nullable id<MCTiled2dMapReadyStateListener>)listener;

- (void)reloadDataSource:(nonnull NSString *)sourceName;

- (void)reloadLocalDataSource:(nonnull NSString *)sourceName
                      geoJson:(nonnull NSString *)geoJson;

@end
