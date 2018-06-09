/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMPeopleStripView : UIView {
    UIButton * _addButton;
    UICollectionView * _collectionView;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) UIButton *addButton;
@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_preferredSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)addButton;
- (id)collectionView;
- (id)init;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;

@end