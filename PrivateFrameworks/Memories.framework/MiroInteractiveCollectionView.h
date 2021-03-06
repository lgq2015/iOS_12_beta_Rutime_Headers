/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroInteractiveCollectionView : UICollectionView {
    bool  _checkedSupportsReordering;
    bool  _supportsReordering;
}

@property (nonatomic) bool checkedSupportsReordering;
@property (nonatomic) <MiroCollectionViewDelegate> *delegate;
@property (nonatomic, readonly) bool supportsReordering;

- (bool)beginInteractiveMovementForItemAtIndexPath:(id)arg1;
- (void)cancelInteractiveMovement;
- (bool)checkedSupportsReordering;
- (void)endInteractiveMovement;
- (void)setCheckedSupportsReordering:(bool)arg1;
- (bool)supportsReordering;

@end
