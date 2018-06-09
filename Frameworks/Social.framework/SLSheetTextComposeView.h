/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLSheetTextComposeView : UIView {
    UILabel * _placeholderLabel;
    double  _textRightInset;
    UITextView * _textView;
}

@property (nonatomic, retain) UILabel *placeholderLabel;
@property (nonatomic) double textRightInset;
@property (nonatomic, retain) UITextView *textView;

- (void).cxx_destruct;
- (void)_assembleView;
- (bool)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)placeholderLabel;
- (bool)resignFirstResponder;
- (void)restoreKeyboard;
- (void)setPlaceholderLabel:(id)arg1;
- (void)setTextRightInset:(double)arg1;
- (void)setTextView:(id)arg1;
- (double)textRightInset;
- (id)textView;
- (void)traitCollectionDidChange:(id)arg1;

@end