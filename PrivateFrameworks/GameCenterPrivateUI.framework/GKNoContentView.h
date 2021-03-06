/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKNoContentView : UIView {
    SEL  _buttonAction;
    id  _buttonTarget;
    _UIContentUnavailableView * _contentUnavailableView;
}

@property (nonatomic) SEL buttonAction;
@property (nonatomic) id buttonTarget;
@property (nonatomic, copy) NSString *buttonTitle;
@property (nonatomic) _UIContentUnavailableView *contentUnavailableView;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *title;

- (SEL)buttonAction;
- (id)buttonTarget;
- (id)buttonTitle;
- (id)contentUnavailableView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)message;
- (void)setButtonAction:(SEL)arg1;
- (void)setButtonTarget:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setContentUnavailableView:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
