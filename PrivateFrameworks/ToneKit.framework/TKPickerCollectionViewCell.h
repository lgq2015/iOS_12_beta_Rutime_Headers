/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKPickerCollectionViewCell : UICollectionViewTableCell {
    bool  _shouldTintTextLabel;
    UIColor * _textLabelColor;
}

@property (nonatomic) bool shouldTintTextLabel;
@property (nonatomic, retain) UIColor *textLabelColor;

- (void).cxx_destruct;
- (void)_updateTextLabelColor;
- (void)setShouldTintTextLabel:(bool)arg1;
- (void)setTextLabelColor:(id)arg1;
- (bool)shouldTintTextLabel;
- (id)textLabelColor;
- (void)tintColorDidChange;

@end
