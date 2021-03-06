/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFDimmingButton : UIButton {
    double  _highlightAnimationDuration;
    double  _highlightedImageAlpha;
    double  _normalImageAlpha;
}

@property (nonatomic) double highlightAnimationDuration;
@property (nonatomic) double highlightedImageAlpha;
@property (nonatomic) double normalImageAlpha;

- (void)_updateImageAlpha;
- (double)highlightAnimationDuration;
- (double)highlightedImageAlpha;
- (void)layoutSubviews;
- (double)normalImageAlpha;
- (void)setHighlightAnimationDuration:(double)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedImageAlpha:(double)arg1;
- (void)setNormalImageAlpha:(double)arg1;

@end
