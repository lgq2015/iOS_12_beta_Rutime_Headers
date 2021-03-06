/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STIntroStackedIconTextView : UIView {
    NSMutableArray * _entries;
}

@property (retain) NSMutableArray *entries;

- (void).cxx_destruct;
- (double)_entrySpacing;
- (void)addEntryWithIcon:(id)arg1 iconSize:(struct CGSize { double x1; double x2; })arg2 title:(id)arg3 content:(id)arg4;
- (id)entries;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setEntries:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
