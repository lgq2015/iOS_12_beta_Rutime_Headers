/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSNavigationAlertProgressView : UIView {
    double  _duration;
    bool  _hasStartedAnimating;
    UIView * _progressView;
}

@property (nonatomic) double duration;
@property (nonatomic) bool hasStartedAnimating;
@property (nonatomic, retain) UIView *progressView;

- (void).cxx_destruct;
- (double)duration;
- (bool)hasStartedAnimating;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 duration:(double)arg2;
- (id)progressView;
- (void)setDuration:(double)arg1;
- (void)setHasStartedAnimating:(bool)arg1;
- (void)setProgressView:(id)arg1;
- (void)startAnimating;

@end
