/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactGridViewLayout : UICollectionViewFlowLayout <NSCopying> {
    bool  _needsUpdateLayout;
    long long  _numberOfColumns;
    double  _offsetAfter;
    double  _offsetBefore;
    NSIndexPath * _selectedIndexPath;
    double  _selectedItemWidthOffset;
}

@property (nonatomic) bool needsUpdateLayout;
@property (nonatomic) long long numberOfColumns;
@property (nonatomic) double offsetAfter;
@property (nonatomic) double offsetBefore;
@property (nonatomic, retain) NSIndexPath *selectedIndexPath;
@property (nonatomic) double selectedItemWidthOffset;

- (void).cxx_destruct;
- (id /* block */)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;
- (void)_updateLayoutMetrics;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (bool)needsUpdateLayout;
- (long long)numberOfColumns;
- (double)offsetAfter;
- (double)offsetBefore;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)selectedIndexPath;
- (double)selectedItemWidthOffset;
- (void)setNeedsUpdateLayout:(bool)arg1;
- (void)setNumberOfColumns:(long long)arg1;
- (void)setOffsetAfter:(double)arg1;
- (void)setOffsetBefore:(double)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (void)setSelectedItemWidthOffset:(double)arg1;

@end