/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

@interface REUpNextThumbnailCell : REUpNextBaseCell {
    UIFont * _boldFont;
    UIVisualEffectView * _descriptionLine1EffectView;
    UILabel * _descriptionLine1Label;
    UIVisualEffectView * _descriptionLine2EffectView;
    UILabel * _descriptionLine2Label;
    UIVisualEffectView * _headerEffectView;
    UILabel * _headerLabel;
    UIVisualEffectView * _imageEffectView;
    NSLayoutConstraint * _imageHeightConstraint;
    UIImageView * _imageView;
    NSLayoutConstraint * _imageWidthConstraint;
    UIFont * _italicFont;
    UILayoutGuide * _labelLayoutGuide;
    bool  _showingHeader;
    bool  _showingThreeLineLayout;
    UIFont * _standardFont;
    NSArray * _withDescription2Constraints;
    NSArray * _withHeaderConstraints;
    NSArray * _withoutDescription2Constraints;
    NSArray * _withoutHeaderConstraints;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)configureWithContent:(id)arg1;
- (void)defaultTextColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)primaryEffectViews;
- (id)secondaryEffectViews;
- (void)updateConstraints;

@end