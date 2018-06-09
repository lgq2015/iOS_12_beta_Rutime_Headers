/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapView : CALayer {
    GEOResourceManifestConfiguration * _additionalManifestConfiguration;
    bool  _additionalManifestConfigurationLoaderOpen;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _animatingToEdgeInsets;
    unsigned char  _applicationState;
    MDARController * _arController;
    VKMapCanvas * _canvas;
    bool  _containsOverlay;
    bool  _didFinishSnapshotting;
    long long  _displayRate;
    unsigned char  _displayedSearchResultsType;
    VKTimedAnimation * _edgeInsetAnimation;
    int  _flyoverMode;
    VKClassicGlobeCanvas * _globe;
    bool  _isChangingMapType;
    bool  _isInBackground;
    struct Unit<RadianUnitDescription, double> { 
        double _value; 
    }  _lastAnimatedCourse;
    struct Coordinate3D<Radians, double> { 
        struct Unit<RadianUnitDescription, double> { 
            double _value; 
        } latitude; 
        struct Unit<RadianUnitDescription, double> { 
            double _value; 
        } longitude; 
        struct Unit<MeterUnitDescription, double> { 
            double _value; 
        } altitude; 
    }  _lastAnimatedUserCoordinate;
    bool  _loaderOpen;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    VKMapCameraController * _mapCameraController;
    <VKMapViewDelegate> * _mapDelegate;
    struct { 
        unsigned char timePeriod; 
        unsigned char overlayType; 
        unsigned char applicationState; 
        unsigned char searchResultsType; 
        bool mapHasLabels; 
    }  _mapDisplayStyle;
    VKTimedAnimation * _mapDisplayStyleAnimation;
    struct unique_ptr<md::MapEngine, std::__1::default_delete<md::MapEngine> > { 
        struct __compressed_pair<md::MapEngine *, std::__1::default_delete<md::MapEngine> > { 
            struct MapEngine {} *__value_; 
        } __ptr_; 
    }  _mapEngine;
    long long  _mapType;
    VKMemoryObserver * _memoryObserver;
    VKNavContext * _navContext;
    VKNavCameraController * _navigationCameraController;
    long long  _navigationDisplayRate;
    unsigned long long  _regionChangeCount;
    long long  _requestedRate;
    NSString * _tileLoaderClientID;
    VKPuckAnimator * _userLocationAnimator;
    double  _verticalYaw;
}

@property (nonatomic, retain) GEOResourceManifestConfiguration *additionalManifestConfiguration;
@property (nonatomic) bool allowDatelineWraparound;
@property (nonatomic, readonly) double altitude;
@property (getter=isAnimatingToTrackAnnotation, nonatomic, readonly) bool animatingToTrackAnnotation;
@property (nonatomic) long long annotationTrackingHeadingAnimationDisplayRate;
@property (nonatomic) long long annotationTrackingZoomStyle;
@property (nonatomic) unsigned char applicationState;
@property (nonatomic) long long applicationUILayout;
@property (nonatomic, readonly) bool canEnter3DMode;
@property (nonatomic, readonly) bool canShowFlyover;
@property (nonatomic, readonly) bool canShowFlyoverAnimation;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } centerCoordinate;
@property (nonatomic, readonly) float debugFramesPerSecond;
@property (nonatomic) bool debugLayoutContinuously;
@property (nonatomic) long long displayRate;
@property (nonatomic) unsigned char displayedSearchResultsType;
@property (nonatomic) struct VKEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property (nonatomic) unsigned char emphasis;
@property (nonatomic, readonly) bool enableDebugLabelHighlighting;
@property (nonatomic, readonly) int flyoverMode;
@property (nonatomic, retain) VKPolylineOverlay *focusedLabelsPolyline;
@property (getter=isFullyDrawn, nonatomic, readonly) bool fullyDrawn;
@property (nonatomic) struct VKEdgeInsets { float x1; float x2; float x3; float x4; } fullyOccludedEdgeInsets;
@property (getter=isFullyPitched, nonatomic, readonly) bool fullyPitched;
@property (getter=isGesturing, nonatomic) bool gesturing;
@property (nonatomic, retain) CADisplay *hostDisplay;
@property (nonatomic) bool iconsShouldAlignToPixels;
@property (nonatomic) bool isPitchable;
@property (nonatomic) struct VKEdgeInsets { float x1; float x2; float x3; float x4; } labelEdgeInsets;
@property (getter=isLabelMarkerSelectionEnabled, nonatomic) bool labelMarkerSelectionEnabled;
@property (nonatomic, readonly) NSArray *labelMarkers;
@property (nonatomic) long long labelScaleFactor;
@property (nonatomic) bool localizeLabels;
@property (nonatomic, readonly) VKMapCanvas *mapCanvas;
@property (nonatomic) <VKMapViewDelegate> *mapDelegate;
@property (nonatomic) struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; } mapDisplayStyle;
@property (nonatomic, readonly) const struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; /* Warning: unhandled struct encoding: '{_retain_ptr<GEOResourceManifestConfiguration *' */ struct x3; }*mapEngine; /* unknown property attribute:  std::__1::default_delete<md::LogicManager> >=^{LogicManager}}}BBB{atomic<bool>=AB}{atomic<bool>=AB}B} */
@property (nonatomic, readonly) GEOMapRegion *mapRegion;
@property (nonatomic) long long mapType;
@property (nonatomic) long long navigationDisplayRate;
@property (nonatomic) long long navigationShieldSize;
@property (nonatomic, readonly) double pitch;
@property (getter=isPitched, nonatomic, readonly) bool pitched;
@property (nonatomic, readonly) double presentationYaw;
@property (nonatomic) bool rendersInBackground;
@property (nonatomic, retain) <GEORoutePreloadSession> *routePreloadSession;
@property (nonatomic, readonly) VKSceneConfiguration *sceneConfiguration;
@property (nonatomic, readonly) VKLabelMarker *selectedLabelMarker;
@property (nonatomic) long long shieldIdiom;
@property (nonatomic) long long shieldSize;
@property (nonatomic) bool shouldLoadFallbackTiles;
@property (nonatomic) bool shouldLoadMapMargin;
@property (getter=isShowingFlyover, nonatomic, readonly) bool showingFlyover;
@property (nonatomic) bool showsBuildings;
@property (nonatomic) bool showsPointsOfInterest;
@property (nonatomic) bool showsVenues;
@property (nonatomic) bool staysCenteredDuringPinch;
@property (nonatomic) bool staysCenteredDuringRotation;
@property (nonatomic) long long targetDisplay;
@property (nonatomic) bool trackingCameraShouldHandleGestures;
@property (nonatomic) double trackingZoomScale;
@property (nonatomic) bool trafficEnabled;
@property (nonatomic) bool trafficIncidentsEnabled;
@property (nonatomic, readonly) VKPuckAnimator *userLocationAnimator;
@property (nonatomic) struct { bool x1; } vehicleState;
@property (nonatomic, readonly) double verticalYaw;
@property (nonatomic, readonly) NSArray *visibleTileSets;
@property (nonatomic, readonly) double yaw;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_clearAnalytics;
- (void)_closeAdditionalManifestConfigurationLoaderConnection;
- (bool)_createDisplayLayer;
- (void)_createGlobe;
- (void)_forceLayoutForSuspensionSnapShot;
- (id)_mapDelegateQueue;
- (void)_notifyDelegateFlyoverTourLabelChanged:(id)arg1;
- (void)_openAdditionalManifestConfigurationLoaderConnection;
- (void)_postDelegateCallbackBlock:(id /* block */)arg1;
- (void)_runFlyoverTourStateChange:(int)arg1 completion:(id /* block */)arg2;
- (void)_setFloorSwitcherZoomPadding:(float)arg1;
- (void)_setStyleTransitionProgress:(double)arg1 targetStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })arg2 step:(long long)arg3;
- (double)_styleTransitionProgress;
- (void)_updateAnalytics:(bool)arg1;
- (void)_updateBackgroundColor;
- (void)_updateDisplayRate;
- (void)_updateMapDisplayStyle;
- (void)activateInternalSettings;
- (void)addCustomFeatureDataSource:(id)arg1;
- (void)addExternalAnchor:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
- (void)addRasterOverlay:(id)arg1;
- (id)additionalManifestConfiguration;
- (bool)allowDatelineWraparound;
- (double)altitude;
- (void)animateStylesWithDuration:(double)arg1 animations:(id /* block */)arg2;
- (id /* block */)annotationCoordinateTest;
- (id /* block */)annotationRectTest;
- (long long)annotationTrackingHeadingAnimationDisplayRate;
- (long long)annotationTrackingZoomStyle;
- (unsigned char)applicationState;
- (long long)applicationUILayout;
- (void)arController:(id)arg1 arSessionWasInterrupted:(unsigned long long)arg2;
- (void)arController:(id)arg1 didChangeTrackingState:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)arController:(id)arg1 didEncounterError:(id)arg2;
- (void)arControllerSessionInterruptionEnded:(id)arg1;
- (id)attributionsForCurrentRegion;
- (id)boundsContextForSelectedTransitLines;
- (bool)buildingFootprintsDisabled;
- (struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; })buildingMarkerAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)canEnter3DMode;
- (bool)canEnter3DModeFlyoverForTileSize:(long long)arg1;
- (bool)canRotate;
- (bool)canShowFlyover;
- (bool)canShowFlyoverAnimation;
- (bool)canZoomInForTileSize:(long long)arg1;
- (bool)canZoomOutForTileSize:(long long)arg1;
- (struct { double x1; double x2; double x3; })centerCoordinate;
- (void)clearScene;
- (id)clearVenueBuildingFloorSelections;
- (void)closeLoaderConnection;
- (id)consoleString:(bool)arg1;
- (struct CGPoint { double x1; double x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toCameraModelPointToLayer:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toPointToLayer:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertMapPoint:(struct { double x1; double x2; })arg1 toPointToLayer:(id)arg2;
- (struct { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toCoordinateFromLayer:(id)arg2;
- (struct { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toMapPointFromLayer:(id)arg2;
- (id)currentCanvas;
- (long long)currentMapMode;
- (double)currentZoomLevelForTileSize:(long long)arg1;
- (void)dealloc;
- (float)debugFramesPerSecond;
- (void)debugHighlightFeatureMarker:(const struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (void)debugHighlightLabelAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)debugLabelString:(bool)arg1;
- (bool)debugLayoutContinuously;
- (void)debugRunPerformanceTestWithOutputHeader:(id)arg1;
- (void)deselectFeatureId;
- (void)deselectLabelMarker;
- (void)deselectTransitLineMarker;
- (void)deselectVenuePoiFeatureId;
- (id)detailedDescription;
- (id)detailedDescriptionDictionaryRepresentation;
- (void)didEnterBackground;
- (void)didFinishSnapshotting;
- (void)didPresent;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)disableFlyoverStatistics;
- (long long)displayRate;
- (bool)displayedFloorIsDefaultForVenueBuilding:(id)arg1;
- (short)displayedFloorOrdinalForVenueBuilding:(id)arg1;
- (unsigned char)displayedSearchResultsType;
- (double)distanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2 fromLayer:(id)arg3 withPrecision:(long long)arg4;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (unsigned char)emphasis;
- (bool)enableDebugLabelHighlighting;
- (void)enableFlyoverStatistics;
- (void)enter3DMode;
- (void)enterARModeAtCoordinate:(struct { double x1; double x2; })arg1;
- (void)exit3DMode;
- (void)exitARMode;
- (struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; })featureMarkerAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)flushTileLoads;
- (int)flyoverMode;
- (id)flyoverStatistics;
- (id)focusedLabelsPolyline;
- (void)forceFrame;
- (void)forceLayout;
- (void)forceSceneLoad;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })fullyOccludedEdgeInsets;
- (void)goToTileX:(int)arg1 Y:(int)arg2 Z:(int)arg3 tileSize:(int)arg4;
- (bool)gridDisabled;
- (id)hostDisplay;
- (id)iconForStyleAttributes:(id)arg1 contentScale:(double)arg2 size:(long long)arg3 customIconID:(unsigned long long)arg4 transparent:(bool)arg5;
- (bool)iconsShouldAlignToPixels;
- (id)initShouldRasterize:(bool)arg1 inBackground:(bool)arg2 manifestConfiguration:(id)arg3 contentScale:(double)arg4;
- (void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2;
- (bool)isAnimatingToTrackAnnotation;
- (bool)isDimmingBaseMap;
- (bool)isEffectivelyHidden;
- (bool)isFullyDrawn;
- (bool)isFullyPitched;
- (bool)isGesturing;
- (bool)isLabelMarkerSelectionEnabled;
- (bool)isPitchable;
- (bool)isPitched;
- (bool)isPointValidForGesturing:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isShowingFlyover;
- (bool)isShowingNoDataPlaceholders;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })labelEdgeInsets;
- (id)labelMarkerForCustomFeatureAnnotation:(id)arg1;
- (id)labelMarkerForCustomFeatureAnnotation:(id)arg1 dataSource:(id)arg2;
- (id)labelMarkerForSelectionAtPoint:(struct CGPoint { double x1; double x2; })arg1 selectableLabelsOnly:(bool)arg2;
- (id)labelMarkers;
- (long long)labelScaleFactor;
- (bool)labelsDisabled;
- (bool)localizeLabels;
- (void)map:(id)arg1 canEnter3DModeDidChange:(bool)arg2;
- (void)map:(id)arg1 canShowFlyoverDidChange:(bool)arg2;
- (void)map:(id)arg1 canZoomInDidChange:(bool)arg2;
- (void)map:(id)arg1 canZoomOutDidChange:(bool)arg2;
- (void)map:(id)arg1 didBecomePitched:(bool)arg2;
- (void)map:(id)arg1 didChangeRegionAnimated:(bool)arg2;
- (void)map:(id)arg1 didEnterARMode:(bool)arg2;
- (void)map:(id)arg1 didUpdateContainsOverlay:(bool)arg2;
- (void)map:(id)arg1 didUpdateVerticalYawTo:(double)arg2;
- (void)map:(id)arg1 flyoverModeDidChange:(int)arg2;
- (void)map:(id)arg1 flyoverModeWillChange:(int)arg2;
- (void)map:(id)arg1 labelMarkerDidChangeState:(const struct shared_ptr<md::LabelMarker> { struct LabelMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg2;
- (id)map:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)map:(id)arg1 selectedLabelMarkerWillDisappear:(const struct shared_ptr<md::LabelMarker> { struct LabelMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg2;
- (void)map:(id)arg1 willChangeRegionAnimated:(bool)arg2;
- (void)map:(id)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
- (id)mapCanvas;
- (void)mapController:(id)arg1 requestsDisplayRate:(long long)arg2;
- (id)mapDelegate;
- (void)mapDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(bool)arg2;
- (void)mapDidBecomePartiallyDrawn:(id)arg1;
- (void)mapDidChangeVisibleRegion:(id)arg1;
- (void)mapDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapDidFinishChangingMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })arg1;
- (void)mapDidFinishInitialTrackingAnimation:(id)arg1;
- (void)mapDidFinishLoadingTiles:(id)arg1;
- (void)mapDidLeaveDefaultZoom:(id)arg1;
- (void)mapDidReloadStylesheet:(id)arg1;
- (void)mapDidReturnToDefaultZoom:(id)arg1;
- (void)mapDidStartLoadingTiles:(id)arg1;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })mapDisplayStyle;
- (const struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<GEOResourceManifestConfiguration *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; }*)mapEngine;
- (void)mapHasStartedPanning:(id)arg1;
- (void)mapHasStoppedPanning:(id)arg1;
- (void)mapLabelsDidLayout:(id)arg1;
- (id)mapRegion;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })mapRegionBounds;
- (long long)mapType;
- (double)maximumZoomLevelForTileSize:(long long)arg1;
- (double)minimumZoomLevelForTileSize:(long long)arg1;
- (void)moveToFlyoverTourStartPosition:(id)arg1 duration:(double)arg2 completion:(id /* block */)arg3;
- (void)navigationCameraReturnToPuck;
- (long long)navigationDisplayRate;
- (id)navigationPuck;
- (long long)navigationShieldSize;
- (void)nearestVenueDidChange:(const struct Venue { unsigned long long x1; unsigned long long x2; struct vector<md::VenueBuilding, std::__1::allocator<md::VenueBuilding> > { struct VenueBuilding {} *x_3_1_1; struct VenueBuilding {} *x_3_1_2; struct __compressed_pair<md::VenueBuilding *, std::__1::allocator<md::VenueBuilding> > { struct VenueBuilding {} *x_3_2_1; } x_3_1_3; } x3; struct Polygon2<double> { struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_1_2_1; struct Matrix<double, 2, 1> {} *x_1_2_2; struct __compressed_pair<gm::Matrix<double, 2, 1> *, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_3_3_1; } x_1_2_3; } x_4_1_1; } x4; struct ConvexHull2<double> { struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_1_2_1; struct Matrix<double, 2, 1> {} *x_1_2_2; struct __compressed_pair<gm::Matrix<double, 2, 1> *, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_3_3_1; } x_1_2_3; } x_5_1_1; } x5; }*)arg1 building:(const struct VenueBuilding { struct vector<md::VenueLevel, std::__1::allocator<md::VenueLevel> > { struct VenueLevel {} *x_1_1_1; struct VenueLevel {} *x_1_1_2; struct __compressed_pair<md::VenueLevel *, std::__1::allocator<md::VenueLevel> > { struct VenueLevel {} *x_3_2_1; } x_1_1_3; } x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; short x6; struct Matrix<double, 2, 1> { double x_7_1_1[2]; } x7; struct ConvexHull2<double> { struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_1_2_1; struct Matrix<double, 2, 1> {} *x_1_2_2; struct __compressed_pair<gm::Matrix<double, 2, 1> *, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_3_3_1; } x_1_2_3; } x_8_1_1; } x8; }*)arg2;
- (void)openLoaderConnection;
- (void)panWithOffset:(struct CGPoint { double x1; double x2; })arg1 relativeToScreenPoint:(struct CGPoint { double x1; double x2; })arg2 animated:(bool)arg3 duration:(double)arg4 completionHandler:(id /* block */)arg5;
- (void)pauseFlyoverTourAnimation;
- (void)pauseTracking;
- (void)performStylesheetDidChange;
- (double)pitch;
- (bool)polygonsDisabled;
- (void)populateDebugNode:(struct shared_ptr<md::DebugTreeNode> { struct DebugTreeNode {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)preloadNavigationSceneResources;
- (void)prepareFlyoverAnimation:(id)arg1 completion:(id /* block */)arg2;
- (double)presentationYaw;
- (void)puckAnimator:(id)arg1 runAnimation:(id)arg2;
- (void)puckAnimator:(id)arg1 updatedPosition:(const struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; }*)arg2 course:(const struct Unit<RadianUnitDescription, double> { double x1; }*)arg3;
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(const struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; }*)arg2;
- (void)puckAnimatorDidStop:(id)arg1;
- (bool)rastersDisabled;
- (void)reloadStylesheet;
- (void)removeCustomFeatureDataSource:(id)arg1;
- (void)removeExternalAnchor:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)removePersistentOverlay:(id)arg1;
- (void)removeRasterOverlay:(id)arg1;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (bool)rendersInBackground;
- (void)resetFlyoverStatistics;
- (bool)restoreViewportFromInfo:(id)arg1;
- (void)resumeFlyoverTourAnimation;
- (bool)roadClassDisabled:(int)arg1;
- (id)roadLabelTilesInScene;
- (bool)roadsDisabled;
- (id)routePreloadSession;
- (void)runAnimation:(id)arg1;
- (id)sceneConfiguration;
- (id)secondaryCanvas;
- (void)selectLabelMarker:(id)arg1;
- (void)selectTransitLineMarker:(id)arg1;
- (id)selectedLabelMarker;
- (id)selectedTransitLineIDs;
- (void)setARInterfaceOrientation:(long long)arg1;
- (void)setAdditionalManifestConfiguration:(id)arg1;
- (void)setAllowDatelineWraparound:(bool)arg1;
- (void)setAnnotationTrackingHeadingAnimationDisplayRate:(long long)arg1;
- (void)setAnnotationTrackingZoomStyle:(long long)arg1;
- (void)setApplicationState:(unsigned char)arg1;
- (void)setApplicationState:(unsigned char)arg1 displayedSearchResultsType:(unsigned char)arg2;
- (void)setApplicationUILayout:(long long)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCameraFramingInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setCameraHorizontalOffset:(double)arg1 duration:(double)arg2 timingFunction:(id)arg3;
- (void)setCanonicalSkyHeight:(double)arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 timingCurve:(id /* block */)arg6 completion:(id /* block */)arg7;
- (void)setClientLocalizedStrings:(id)arg1;
- (void)setContentsScale:(double)arg1;
- (void)setCurrentLocationText:(id)arg1;
- (void)setDebugLayoutContinuously:(bool)arg1;
- (void)setDesiredMapMode:(long long)arg1 immediate:(bool)arg2;
- (void)setDimmingBaseMap:(bool)arg1;
- (void)setDimmingBaseMap:(bool)arg1 animated:(bool)arg2 duration:(double)arg3;
- (void)setDisableBuildingFootprints:(bool)arg1;
- (void)setDisableGrid:(bool)arg1;
- (void)setDisableLabels:(bool)arg1;
- (void)setDisablePolygons:(bool)arg1;
- (void)setDisableRasters:(bool)arg1;
- (void)setDisableRoadClass:(bool)arg1 forRoadClass:(int)arg2;
- (void)setDisableRoads:(bool)arg1;
- (void)setDisableTransitLines:(bool)arg1;
- (void)setDisplayRate:(long long)arg1;
- (void)setDisplayedFloorOrdinal:(short)arg1 forVenueBuilding:(id)arg2;
- (void)setDisplayedSearchResultsType:(unsigned char)arg1;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1 duration:(double)arg2 timingFunction:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setEmphasis:(unsigned char)arg1;
- (void)setExternalTrafficFeatures:(id)arg1 areRouteTrafficFeaturesActive:(bool)arg2;
- (void)setFlyoverMode:(int)arg1;
- (void)setFocusedLabelsPolyline:(id)arg1;
- (void)setFullyOccludedEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setGesturing:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHostDisplay:(id)arg1;
- (void)setIconsShouldAlignToPixels:(bool)arg1;
- (void)setIsPitchable:(bool)arg1;
- (void)setLabelEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setLabelMarkerSelectionEnabled:(bool)arg1;
- (void)setLabelScaleFactor:(long long)arg1;
- (void)setLocalizeLabels:(bool)arg1;
- (void)setMapDelegate:(id)arg1;
- (void)setMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })arg1;
- (void)setMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })arg1 animated:(bool)arg2;
- (void)setMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })arg1 animated:(bool)arg2 duration:(double)arg3;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(id /* block */)arg5;
- (void)setMapType:(long long)arg1;
- (void)setMapType:(long long)arg1 animated:(bool)arg2;
- (void)setNavContext:(id)arg1;
- (void)setNavigationDisplayRate:(long long)arg1;
- (void)setNavigationShieldSize:(long long)arg1;
- (void)setNeedsLayout;
- (void)setRendersInBackground:(bool)arg1;
- (void)setRouteContext:(id)arg1;
- (void)setRouteLineSplitAnnotation:(id)arg1;
- (void)setRoutePreloadSession:(id)arg1;
- (void)setRouteUserOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setSelectedFeatureId:(unsigned long long)arg1;
- (void)setSelectedVenuePoiFeatureId:(unsigned long long)arg1;
- (void)setShieldIdiom:(long long)arg1;
- (void)setShieldSize:(long long)arg1;
- (void)setShouldLoadFallbackTiles:(bool)arg1;
- (void)setShouldLoadMapMargin:(bool)arg1;
- (void)setShowsBuildings:(bool)arg1;
- (void)setShowsPointsOfInterest:(bool)arg1;
- (void)setShowsVenues:(bool)arg1;
- (void)setStaysCenteredDuringPinch:(bool)arg1;
- (void)setStaysCenteredDuringRotation:(bool)arg1;
- (void)setStylesheetName:(id)arg1;
- (void)setTargetDisplay:(long long)arg1;
- (void)setTrackingCameraShouldHandleGestures:(bool)arg1;
- (void)setTrackingZoomScale:(double)arg1;
- (void)setTrafficEnabled:(bool)arg1;
- (void)setTrafficIncidentsEnabled:(bool)arg1;
- (void)setVehicleState:(struct { bool x1; })arg1;
- (void)setYaw:(double)arg1 animated:(bool)arg2;
- (long long)shieldIdiom;
- (long long)shieldSize;
- (bool)shouldHideOffscreenSelectedAnnotation;
- (bool)shouldLoadFallbackTiles;
- (bool)shouldLoadMapMargin;
- (bool)showsBuildings;
- (bool)showsPointsOfInterest;
- (bool)showsVenues;
- (void)startFlyoverAnimation:(id)arg1 animateToStart:(bool)arg2 completion:(id /* block */)arg3;
- (void)startFlyoverTourAnimation:(unsigned long long)arg1 animateToStart:(bool)arg2 completion:(id /* block */)arg3;
- (void)startPanningAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startPanningAtPoint:(struct CGPoint { double x1; double x2; })arg1 panAtStartPoint:(bool)arg2;
- (void)startPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startPitchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startRotatingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(bool)arg2 animated:(bool)arg3;
- (bool)staysCenteredDuringPinch;
- (bool)staysCenteredDuringRotation;
- (void)stopFlyoverAnimation;
- (void)stopPanningAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopPitchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopSnappingAnimations;
- (void)stopTracking;
- (void)stopTrackingAnnotation;
- (struct shared_ptr<gss::CartoStyle<gss::PropertyID> > { struct CartoStyle<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })styleForFeature:(struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })styleManager;
- (struct shared_ptr<gss::StyleSheet<gss::PropertyID> > { struct StyleSheet<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })stylesheet;
- (bool)stylesheetIsDevResource;
- (bool)supportsMapType:(long long)arg1;
- (bool)supportsNightMode;
- (long long)targetDisplay;
- (double)topDownMinimumZoomLevelForTileSize:(long long)arg1;
- (bool)trackingCameraShouldHandleGestures;
- (double)trackingZoomScale;
- (bool)trafficEnabled;
- (bool)trafficIncidentsEnabled;
- (id)transitLineMarkersForSelectionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)transitLineMarkersInCurrentViewport;
- (bool)transitLinesDisabled;
- (void)transitionToTracking:(bool)arg1 mapMode:(long long)arg2 startLocation:(struct { double x1; double x2; })arg3 startCourse:(double)arg4 pounceCompletionHandler:(id /* block */)arg5;
- (void)updatePanWithTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)updatePitchWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 translation:(double)arg2;
- (void)updateRotationWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 newValue:(double)arg2;
- (id)userLocationAnimator;
- (struct { bool x1; })vehicleState;
- (id)venueAtLocation:(struct { double x1; double x2; })arg1;
- (id)venueAtLocation:(struct { double x1; double x2; })arg1 withMarginForError:(bool)arg2;
- (id)venueAtLocation:(struct { double x1; double x2; })arg1 withMarginForError:(bool)arg2 includeNonRevealedVenues:(bool)arg3;
- (id)venueBuildingWithFocus;
- (id)venueWithFocus;
- (id)venueWithID:(unsigned long long)arg1;
- (double)verticalYaw;
- (id)viewportInfo;
- (id)visibleTileSets;
- (bool)wantsTimerTick;
- (void)willEnterForeground;
- (void)willLayoutWithTimestamp:(double)arg1;
- (float)worldSpaceWidthOfView;
- (double)yaw;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint { double x1; double x2; })arg2 completionHandler:(id /* block */)arg3;
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;
- (void)zoomToLevel:(double)arg1 withFocusPoint:(struct CGPoint { double x1; double x2; })arg2;
- (float)zoomToRevealVenueBuildingFloorplan:(id)arg1;
- (float)zoomToRevealVenueFloorplan:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (void)_mapkit_configureFromDefaults:(bool)arg1;

@end