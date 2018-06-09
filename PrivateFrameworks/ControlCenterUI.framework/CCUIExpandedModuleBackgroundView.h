/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIExpandedModuleBackgroundView : UIView {
    id  _client;
    MTMaterialView * _materialView;
    UIView * _obscuringBackgroundView;
    double  _weighting;
}

@property (nonatomic) id client;
@property (nonatomic, retain) MTMaterialView *materialView;
@property (nonatomic, retain) UIView *obscuringBackgroundView;
@property (nonatomic) double weighting;

- (void).cxx_destruct;
- (id)client;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)materialView;
- (id)obscuringBackgroundView;
- (void)setClient:(id)arg1;
- (void)setMaterialView:(id)arg1;
- (void)setObscuringBackgroundView:(id)arg1;
- (void)setWeighting:(double)arg1;
- (double)weighting;

@end