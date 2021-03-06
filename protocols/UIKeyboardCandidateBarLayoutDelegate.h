/* made by EzioChiu.
 */

@protocol UIKeyboardCandidateBarLayoutDelegate <UICollectionViewDelegate>

@required

- (struct CGSize { double x1; double x2; })collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 sizeForItemAtIndexPath:(NSIndexPath *)arg3;
- (struct CGSize { double x1; double x2; })sizeOfDummyItemForCollectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2;

@optional

- (void)candidateBarLayoutDidFinishPreparingLayout;
- (double)leftMarginForCollectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2;

@end
