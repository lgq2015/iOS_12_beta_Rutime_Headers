/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVVolumeWarningView : UIView {
    UIViewPropertyAnimator * _animator;
    bool  _stopping;
}

@property (nonatomic) UIViewPropertyAnimator *animator;
@property (getter=isStopping, nonatomic) bool stopping;

- (void).cxx_destruct;
- (id)animator;
- (void)continueAnimating;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isStopping;
- (void)setAnimator:(id)arg1;
- (void)setStopping:(bool)arg1;
- (void)startAnimating;
- (void)stopAnimatingAndRemoveFromSuperview;

@end