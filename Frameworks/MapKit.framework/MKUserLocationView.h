/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKUserLocationView : MKAnnotationView <VKPuckAnimatorTarget> {
    CALayer * _accuracyContainerLayer;
    CALayer * _accuracyLayer;
    bool  _allowsAccuracyRing;
    bool  _allowsHeadingIndicator;
    bool  _allowsPulse;
    bool  _effectsEnabled;
    bool  _forcesConeIndicator;
    double  _heading;
    double  _headingAccuracy;
    long long  _headingIndicatorStyle;
    CALayer<MKUserLocationHeadingIndicator> * _headingLayer;
    CLLocation * _lastLocation;
    double  _locationAccuracy;
    double  _maxRadiusToShowAccuracyRing;
    VKNavigationPuck * _navigationPuckMarker;
    double  _presentationCourse;
    CALayer * _puckLayer;
    CALayer * _pulseLayer;
    bool  _shouldDisplayHeading;
    bool  _shouldDisplayInaccurateHeading;
    bool  _shouldPulse;
    bool  _stale;
    long long  _zoomDirection;
}

@property (nonatomic) double accuracyRingAlpha;
@property (nonatomic) bool allowsAccuracyRing;
@property (nonatomic) bool allowsHeadingIndicator;
@property (nonatomic) bool allowsPulse;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEffectsEnabled, nonatomic) bool effectsEnabled;
@property (nonatomic) bool forcesConeIndicator;
@property (readonly) unsigned long long hash;
@property (nonatomic) double heading;
@property (nonatomic) double headingAccuracy;
@property (nonatomic) long long headingIndicatorStyle;
@property (nonatomic, readonly) CLLocation *lastLocation;
@property (nonatomic, readonly) double locationAccuracy;
@property (nonatomic) double maxRadiusToShowAccuracyRing;
@property (nonatomic) float opacity;
@property (nonatomic) double presentationCourse;
@property (nonatomic) double puckAlpha;
@property (nonatomic) bool shouldDisplayHeading;
@property (nonatomic) bool shouldDisplayInaccurateHeading;
@property (getter=isStale, setter=setStale:, nonatomic) bool stale;
@property (readonly) Class superclass;
@property (nonatomic) long long zoomDirection;

+ (unsigned long long)_selectedZIndex;
+ (unsigned long long)_zIndex;
+ (double)accuracyDiameter:(double)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void).cxx_destruct;
- (id)_accuracyAnimation:(double)arg1;
- (id)_animationToSynchronizePulse:(id*)arg1;
- (id)_baseLayer;
- (long long)_enforcedHeadingIndicatorStyle;
- (id)_headingImageForAccuracy:(double)arg1 anchorPoint:(struct CGPoint { double x1; double x2; }*)arg2;
- (bool)_hideLargeAccuracyRing;
- (bool)_isLocationStale:(id)arg1;
- (id)_layerToMatchAccuracyRing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_mapkit_visibleRect;
- (void)_pausePulse;
- (id)_pulseAnimation;
- (id)_pulseLayer;
- (void)_removePulse;
- (void)_resetLayerToMatchAccuracyRing;
- (void)_resumePulse;
- (void)_setAnimatingToCoordinate:(bool)arg1;
- (void)_setMapPitchRadians:(double)arg1;
- (void)_setPresentationCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)_setTracking:(bool)arg1;
- (void)_setVKNavigationPuckMarker:(id)arg1;
- (bool)_shouldPulseForLocation:(id)arg1;
- (bool)_shouldShowAccuracyRing;
- (bool)_tracking;
- (void)_updateFromMap;
- (void)_updateHeadingLayerForStyleChange;
- (void)_updateHideLargeAccuracyRing;
- (void)_updateLayers;
- (void)_updatePulse;
- (void)_updateShowHeadingLayer;
- (void)_updateShowHeadingLayer:(bool)arg1 animatedIfPossible:(bool)arg2;
- (void)_updateShowHeadingLayerAnimatedIfPossible:(bool)arg1;
- (id)_vkNavigationPuckMarker;
- (double)accuracyRingAlpha;
- (bool)allowsAccuracyRing;
- (bool)allowsHeadingIndicator;
- (bool)allowsPulse;
- (void)didMoveToWindow;
- (bool)forcesConeIndicator;
- (double)heading;
- (double)headingAccuracy;
- (long long)headingIndicatorStyle;
- (id)init;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (bool)isEffectsEnabled;
- (bool)isStale;
- (id)lastLocation;
- (void)layoutSubviews;
- (double)locationAccuracy;
- (void)locationManagerFailedToUpdateLocation;
- (double)maxRadiusToShowAccuracyRing;
- (float)opacity;
- (double)presentationCourse;
- (double)puckAlpha;
- (void)setAccuracyRingAlpha:(double)arg1;
- (void)setAllowsAccuracyRing:(bool)arg1;
- (void)setAllowsHeadingIndicator:(bool)arg1;
- (void)setAllowsPulse:(bool)arg1;
- (void)setAnimatingToCoordinate:(bool)arg1;
- (void)setEffectsEnabled:(bool)arg1;
- (void)setForcesConeIndicator:(bool)arg1;
- (void)setHeading:(double)arg1;
- (void)setHeadingAccuracy:(double)arg1;
- (void)setHeadingIndicatorStyle:(long long)arg1;
- (void)setLocationAccuracy:(double)arg1 duration:(double)arg2;
- (void)setMaxRadiusToShowAccuracyRing:(double)arg1;
- (void)setOpacity:(float)arg1;
- (void)setPresentationCoordinate:(struct { double x1; double x2; })arg1;
- (void)setPresentationCourse:(double)arg1;
- (void)setPuckAlpha:(double)arg1;
- (void)setPuckScale:(double)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setShouldDisplayHeading:(bool)arg1;
- (void)setShouldDisplayInaccurateHeading:(bool)arg1;
- (void)setStale:(bool)arg1;
- (void)setZoomDirection:(long long)arg1;
- (void)setZoomDirection:(long long)arg1 deltaScale:(double)arg2;
- (bool)shouldDisplayHeading;
- (bool)shouldDisplayInaccurateHeading;
- (void)updateStateFromLocation:(id)arg1 duration:(double)arg2;
- (long long)zoomDirection;

@end