/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNQuickActionButton : UIView {
    CNQuickAction * _action;
    NSArray * _activatedConstraints;
    UIButton * _button;
    <CNQuickActionButtonDelegate> * _delegate;
    UILabel * _label;
    bool  _showBackgroundPlatter;
    bool  _showTitle;
}

@property (nonatomic, retain) CNQuickAction *action;
@property (nonatomic, retain) NSArray *activatedConstraints;
@property (nonatomic, retain) UIButton *button;
@property (nonatomic) <CNQuickActionButtonDelegate> *delegate;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic) bool showBackgroundPlatter;
@property (nonatomic) bool showTitle;

- (void).cxx_destruct;
- (id)action;
- (id)activatedConstraints;
- (id)button;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)onLongPress:(id)arg1;
- (void)performAction;
- (void)setAction:(id)arg1;
- (void)setActivatedConstraints:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setShowBackgroundPlatter:(bool)arg1;
- (void)setShowTitle:(bool)arg1;
- (bool)showBackgroundPlatter;
- (bool)showTitle;
- (void)updateConstraints;

@end