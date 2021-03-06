/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUIProductSportsGridView : UIView {
    UIColor * _columnColor;
    UIView * _dividerView;
    UIFont * _gridFont;
    NSArray * _sportsLabels;
    NSArray * _sportsRows;
    NSArray * _sportsScores;
}

@property (nonatomic, retain) UIColor *columnColor;
@property (nonatomic, readonly) UIView *dividerView;
@property (nonatomic, retain) UIFont *gridFont;
@property (nonatomic, copy) NSArray *sportsLabels;
@property (nonatomic, copy) NSArray *sportsRows;
@property (nonatomic, copy) NSArray *sportsScores;

+ (id)sportsGridViewWithElement:(id)arg1 existingView:(id)arg2;

- (void).cxx_destruct;
- (id)columnColor;
- (id)dividerView;
- (id)gridFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setColumnColor:(id)arg1;
- (void)setGridFont:(id)arg1;
- (void)setSportsLabels:(id)arg1;
- (void)setSportsRows:(id)arg1;
- (void)setSportsScores:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)sportsLabels;
- (id)sportsRows;
- (id)sportsScores;

@end
