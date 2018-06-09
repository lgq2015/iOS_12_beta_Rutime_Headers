/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKInlineNotificationView : UIView {
    bool  _animatingVisibility;
    _UIBackdropView * _backdropView;
    UIView * _bottomLineView;
    UIView * _clippingView;
    UIView * _containerView;
    <CKInlineNotificationViewDelegate> * _delegate;
    bool  _visible;
}

@property (nonatomic, readonly) bool _shouldSuppressLayout;
@property (nonatomic) bool animatingVisibility;
@property (nonatomic, retain) _UIBackdropView *backdropView;
@property (nonatomic, retain) UIView *bottomLineView;
@property (nonatomic, retain) UIView *clippingView;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) <CKInlineNotificationViewDelegate> *delegate;
@property (nonatomic) bool visible;

- (void).cxx_destruct;
- (void)_invalidateContentViewHeight;
- (bool)_shouldSuppressLayout;
- (bool)animatingVisibility;
- (id)backdropView;
- (id)bottomLineView;
- (id)clippingView;
- (id)containerView;
- (id)contentView;
- (struct CGSize { double x1; double x2; })contentViewSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAnimatingVisibility:(bool)arg1;
- (void)setBackdropView:(id)arg1;
- (void)setBottomLineView:(id)arg1;
- (void)setClippingView:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setVisible:(bool)arg1;
- (void)setVisible:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)visible;

@end