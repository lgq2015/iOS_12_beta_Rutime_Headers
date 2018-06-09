/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleProgressFooterView : UIView {
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    bool  _usesEmphasizedTitle;
}

@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic) bool usesEmphasizedTitle;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_setupViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)preferredHeightForWidth:(double)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUsesEmphasizedTitle:(bool)arg1;
- (id)subtitleLabel;
- (id)titleLabel;
- (bool)usesEmphasizedTitle;

@end