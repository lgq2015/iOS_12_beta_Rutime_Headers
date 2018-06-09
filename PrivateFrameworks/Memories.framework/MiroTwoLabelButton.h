/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroTwoLabelButton : UIButton {
    NSParagraphStyle * _defaultParagraphStyle;
    NSString * _primaryLabelText;
    UIFont * _secondaryLabelFont;
    NSString * _secondaryLabelText;
    bool  _titleIsDirty;
}

@property (nonatomic, retain) NSParagraphStyle *defaultParagraphStyle;
@property (nonatomic, retain) UIFont *primaryLabelFont;
@property (nonatomic, retain) NSString *primaryLabelText;
@property (nonatomic, retain) UIFont *secondaryLabelFont;
@property (nonatomic, retain) NSString *secondaryLabelText;
@property (nonatomic) bool titleIsDirty;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_syncButtonState;
- (void)_updateAttributedTitle;
- (void)awakeFromNib;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)defaultParagraphStyle;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)primaryLabelFont;
- (id)primaryLabelText;
- (id)secondaryLabelFont;
- (id)secondaryLabelText;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setDefaultParagraphStyle:(id)arg1;
- (void)setPrimaryLabelFont:(id)arg1;
- (void)setPrimaryLabelText:(id)arg1;
- (void)setSecondaryLabelFont:(id)arg1;
- (void)setSecondaryLabelText:(id)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleIsDirty:(bool)arg1;
- (bool)titleIsDirty;

@end