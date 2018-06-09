/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface PXPlacesMapFetchResultController : NSObject {
    PXPlacesPhotoAssetsStore * _albumAssetStore;
    PXPlacesMapPipeline * _albumPipeline;
    unsigned long long  _contentMode;
    PXPlacesMapPipeline * _currentPipeline;
    <PXPlacesMapGeotaggableInfoDelegate> * _geotaggableInfoDelegate;
    <PXPlacesMapControllerAccess> * _mapViewController;
    PXPlacesPhotoAssetsStore * _providedAssetStore;
    PXPlacesMapPipeline * _providedPipeline;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, retain) PXPlacesPhotoAssetsStore *albumAssetStore;
@property (nonatomic, retain) PXPlacesMapPipeline *albumPipeline;
@property (nonatomic) unsigned long long contentMode;
@property (nonatomic, retain) PXPlacesMapPipeline *currentPipeline;
@property (nonatomic) <PXPlacesMapGeotaggableInfoDelegate> *geotaggableInfoDelegate;
@property (nonatomic, readonly) PXPlacesMapController *mapController;
@property (nonatomic, readonly) PXPlacesMapView *mapView;
@property (nonatomic, retain) <PXPlacesMapControllerAccess> *mapViewController;
@property (retain) PXPlacesPhotoAssetsStore *providedAssetStore;
@property (retain) PXPlacesMapPipeline *providedPipeline;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;

- (void).cxx_destruct;
- (id)albumAssetStore;
- (id)albumPipeline;
- (unsigned long long)contentMode;
- (id)currentAssetStore;
- (id)currentPipeline;
- (void)focusOnGeotaggablesAnimated:(bool)arg1;
- (void)focusOnProvidedAssetsAnimated:(bool)arg1;
- (void)focusOnProvidedAssetsImmediately;
- (id)geotaggableInfoDelegate;
- (id)initWithGeotaggableInfoDelegate:(id)arg1 andMapViewController:(id)arg2;
- (void)loadFetchResult:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)loadFetchResults:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)loadProvidedAssetStoreWithCompletion:(id /* block */)arg1;
- (id)mapController;
- (id)mapView;
- (id)mapViewController;
- (id)providedAssetStore;
- (id)providedPipeline;
- (void)reloadContentModeWithCompletion:(id /* block */)arg1;
- (void)resumeWithCompletion:(id /* block */)arg1;
- (id)serialQueue;
- (void)setAlbumAssetStore:(id)arg1;
- (void)setAlbumPipeline:(id)arg1;
- (void)setContentMode:(unsigned long long)arg1;
- (void)setCurrentPipeline:(id)arg1;
- (void)setGeotaggableInfoDelegate:(id)arg1;
- (void)setMapViewController:(id)arg1;
- (void)setProvidedAssetStore:(id)arg1;
- (void)setProvidedPipeline:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (id)visibleGeotaggables;

@end