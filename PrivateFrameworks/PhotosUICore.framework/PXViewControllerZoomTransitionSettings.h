/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXViewControllerZoomTransitionSettings : PXSettings {
    bool  _animateEndPointsContents;
    bool  _animateViewControllersViews;
    long long  _animationType;
    long long  _crossfadeType;
    double  _maximumZoomScale;
    double  _minimumZoomScale;
    bool  _showRectsOfInterest;
    double  _titleCrossfadeAmount;
    double  _transitionDuration;
}

@property (nonatomic) bool animateEndPointsContents;
@property (nonatomic) bool animateViewControllersViews;
@property (nonatomic) long long animationType;
@property (nonatomic) long long crossfadeType;
@property (nonatomic) double maximumZoomScale;
@property (nonatomic) double minimumZoomScale;
@property (nonatomic) bool showRectsOfInterest;
@property (nonatomic) double titleCrossfadeAmount;
@property (nonatomic) double transitionDuration;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)animateEndPointsContents;
- (bool)animateViewControllersViews;
- (long long)animationType;
- (long long)crossfadeType;
- (double)maximumZoomScale;
- (double)minimumZoomScale;
- (id)parentSettings;
- (void)setAnimateEndPointsContents:(bool)arg1;
- (void)setAnimateViewControllersViews:(bool)arg1;
- (void)setAnimationType:(long long)arg1;
- (void)setCrossfadeType:(long long)arg1;
- (void)setDefaultValues;
- (void)setMaximumZoomScale:(double)arg1;
- (void)setMinimumZoomScale:(double)arg1;
- (void)setShowRectsOfInterest:(bool)arg1;
- (void)setTitleCrossfadeAmount:(double)arg1;
- (void)setTransitionDuration:(double)arg1;
- (bool)showRectsOfInterest;
- (double)titleCrossfadeAmount;
- (double)transitionDuration;

@end