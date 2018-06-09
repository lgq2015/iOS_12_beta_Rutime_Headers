/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicTableViewSelectableHeaderFooterView : UITableViewHeaderFooterView {
    UIView * _bottomHairlineView;
    long long  _highlightOrSelectionChangeTransactionsCount;
    UIView * _highlightOverlayView;
    bool  _highlighted;
    bool  _lastHighlightOrSelectionChangeWasAnimated;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _musicSeparatorInset;
    bool  _selected;
    UIColor * _selectionTintColor;
    UIColor * _separatorColor;
    bool  _showsBottomSeparator;
    bool  _showsTopSeparator;
    UIView * _topHairlineView;
}

@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, readonly) MusicTableView *parentTableView;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, retain) UIColor *selectionTintColor;
@property (nonatomic, retain) UIColor *separatorColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } separatorInset;
@property (nonatomic) bool showsBottomSeparator;
@property (nonatomic) bool showsTopSeparator;

- (void).cxx_destruct;
- (id)_effectiveHighlightOverlayBackgroundColor;
- (void)_updateBackgroundColorAnimated:(bool)arg1;
- (void)beginHighlightOrSelectionChangeTransaction;
- (void)endHighlightOrSelectionChangeTransaction;
- (id)initWithReuseIdentifier:(id)arg1;
- (bool)isHighlighted;
- (bool)isSelected;
- (void)layoutSubviews;
- (id)parentTableView;
- (void)prepareForReuse;
- (id)selectionTintColor;
- (id)separatorColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInset;
- (void)setFloating:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setSelectionTintColor:(id)arg1;
- (void)setSeparatorColor:(id)arg1;
- (void)setSeparatorInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setShowsBottomSeparator:(bool)arg1;
- (void)setShowsTopSeparator:(bool)arg1;
- (bool)showsBottomSeparator;
- (bool)showsTopSeparator;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end