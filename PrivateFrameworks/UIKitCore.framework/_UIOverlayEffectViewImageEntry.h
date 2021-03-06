/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIOverlayEffectViewImageEntry : _UIVisualEffectViewEntry {
    double  _alpha;
    NSString * _filterType;
    UIImage * _image;
}

@property (nonatomic) double alpha;
@property (nonatomic, copy) NSString *filterType;
@property (nonatomic, retain) UIImage *image;

- (void).cxx_destruct;
- (void)addEffectToView:(id)arg1;
- (double)alpha;
- (void)applyIdentityEffectToView:(id)arg1;
- (void)applyRequestedEffectToView:(id)arg1;
- (bool)canTransitionToEffect:(id)arg1;
- (id)description;
- (id)filterType;
- (id)image;
- (void)removeEffectFromView:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)setFilterType:(id)arg1;
- (void)setImage:(id)arg1;

@end
