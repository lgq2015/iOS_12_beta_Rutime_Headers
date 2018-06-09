/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMCollectionViewCollageLayout : UICollectionViewLayout {
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    double  _interitemSpacing;
    NSMutableDictionary * _layoutAttributesForIndexPath;
    bool  _portraitBias;
}

@property (nonatomic) double interitemSpacing;
@property (nonatomic) bool portraitBias;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)init;
- (double)interitemSpacing;
- (void)invalidateLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (bool)portraitBias;
- (void)prepareLayout;
- (void)setInteritemSpacing:(double)arg1;
- (void)setPortraitBias:(bool)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end