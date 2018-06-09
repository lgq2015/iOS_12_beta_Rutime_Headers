/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLWallpaperButton : UIButton <_UIBackdropViewObserver> {
    _UIBackdropView * _backdropView;
    UIImageView * _titleMaskImageView;
}

@property (nonatomic, retain) _UIBackdropView *backdropView;
@property (nonatomic, retain) UIImageView *titleMaskImageView;

+ (id)autoLayoutCommonWallpaperButton;
+ (id)autoLayoutCommonWallpaperButtonWithStyle:(long long)arg1;

- (void)_setupBackdropView;
- (void)_updateContentEdgeInsets;
- (id)backdropView;
- (void)backdropViewDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (void)safeAreaInsetsDidChange;
- (void)setBackdropView:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTitleMaskImageView:(id)arg1;
- (id)titleMaskImageView;

@end