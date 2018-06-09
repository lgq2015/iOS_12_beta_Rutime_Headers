/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIMotionAnalyzerSettings : _UISettings {
    double  _delayBeforeIdle;
    bool  _directionalLockEnabled;
    double  _directionalLockSharpness;
    double  _directionalLockStickiness;
    double  _directionalLockThreshold;
    double  _idleLeeway;
    double  _inputSmoothingFactor;
    bool  _jumpEnabled;
    double  _jumpThreshold;
    bool  _playJumpSound;
    double  _referenceShiftDistanceDependence;
    bool  _referenceShiftEnabled;
    double  _referenceShiftSpeed;
    bool  _showDirectionalLockIndicators;
    bool  _showIdleIndicator;
}

@property double delayBeforeIdle;
@property bool directionalLockEnabled;
@property double directionalLockSharpness;
@property double directionalLockStickiness;
@property double directionalLockThreshold;
@property double idleLeeway;
@property double inputSmoothingFactor;
@property bool jumpEnabled;
@property double jumpThreshold;
@property bool playJumpSound;
@property double referenceShiftDistanceDependence;
@property bool referenceShiftEnabled;
@property double referenceShiftSpeed;
@property bool showDirectionalLockIndicators;
@property bool showIdleIndicator;

- (double)delayBeforeIdle;
- (bool)directionalLockEnabled;
- (double)directionalLockSharpness;
- (double)directionalLockStickiness;
- (double)directionalLockThreshold;
- (unsigned long long)hash;
- (double)idleLeeway;
- (double)inputSmoothingFactor;
- (bool)isEqual:(id)arg1;
- (bool)jumpEnabled;
- (double)jumpThreshold;
- (bool)playJumpSound;
- (double)referenceShiftDistanceDependence;
- (bool)referenceShiftEnabled;
- (double)referenceShiftSpeed;
- (void)setDefaultValues;
- (void)setDelayBeforeIdle:(double)arg1;
- (void)setDirectionalLockEnabled:(bool)arg1;
- (void)setDirectionalLockSharpness:(double)arg1;
- (void)setDirectionalLockStickiness:(double)arg1;
- (void)setDirectionalLockThreshold:(double)arg1;
- (void)setIdleLeeway:(double)arg1;
- (void)setInputSmoothingFactor:(double)arg1;
- (void)setJumpEnabled:(bool)arg1;
- (void)setJumpThreshold:(double)arg1;
- (void)setPlayJumpSound:(bool)arg1;
- (void)setReferenceShiftDistanceDependence:(double)arg1;
- (void)setReferenceShiftEnabled:(bool)arg1;
- (void)setReferenceShiftSpeed:(double)arg1;
- (void)setShowDirectionalLockIndicators:(bool)arg1;
- (void)setShowIdleIndicator:(bool)arg1;
- (bool)showDirectionalLockIndicators;
- (bool)showIdleIndicator;

@end