/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVProgressBarView : UIView {
    UIColor * _completeTintColor;
    double  _cornerRadius;
    double  _progress;
    UIColor * _progressTintColor;
    bool  _useMaterial;
}

@property (nonatomic, retain) UIColor *completeTintColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double progress;
@property (nonatomic, retain) UIColor *progressTintColor;
@property (nonatomic) bool useMaterial;

- (void).cxx_destruct;
- (id)completeTintColor;
- (double)cornerRadius;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)progress;
- (id)progressTintColor;
- (void)setCompleteTintColor:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgressTintColor:(id)arg1;
- (void)setUseMaterial:(bool)arg1;
- (bool)useMaterial;

@end