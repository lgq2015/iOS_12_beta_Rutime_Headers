/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface PXPlacesMapAdaptiveClusterLayout : PXPlacesMapLayout {
    <PXPlacesMapLayoutResult> * _currentMapLayoutResult;
    NSMapTable * _geotaggableToLayoutItemTable;
    double  _horizontalClusteringDistancePixels;
    bool  _requestLayoutCancel;
    double  _verticalClusteringDistancePixels;
}

@property (nonatomic, retain) <PXPlacesMapLayoutResult> *currentMapLayoutResult;
@property (retain) NSMapTable *geotaggableToLayoutItemTable;
@property (nonatomic) double horizontalClusteringDistancePixels;
@property (nonatomic) double verticalClusteringDistancePixels;

- (void).cxx_destruct;
- (id)_clusterGeotaggables:(id)arg1 forViewPort:(id)arg2;
- (id)_clusterGeotaggables:(id)arg1 usingHorizontalClusteringDistance:(double)arg2 verticalClusteringDistance:(double)arg3 mapScale:(double)arg4 dataSource:(id)arg5 primaryLayoutGeotaggables:(id)arg6;
- (id)currentMapLayoutResult;
- (id)geotaggableToLayoutItemTable;
- (double)horizontalClusteringDistancePixels;
- (id)layoutForViewPort:(id)arg1 andDataSourceChange:(id)arg2;
- (id)layoutItemForGeotaggable:(id)arg1;
- (void)reset;
- (void)setCurrentMapLayoutResult:(id)arg1;
- (void)setGeotaggableToLayoutItemTable:(id)arg1;
- (void)setHorizontalClusteringDistancePixels:(double)arg1;
- (void)setVerticalClusteringDistancePixels:(double)arg1;
- (double)verticalClusteringDistancePixels;

@end
