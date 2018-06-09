/* made by EzioChiu.
 */

@protocol PUTilingViewTileTransitionDelegate <NSObject>

@optional

- (PUTilingDataSourceConverter *)tilingView:(PUTilingView *)arg1 dataSourceConverterForTransitionFromLayout:(PUTilingLayout *)arg2 toLayout:(PUTilingLayout *)arg3;
- (PUTileTransitionCoordinator *)tilingView:(PUTilingView *)arg1 tileTransitionCoordinatorForChangeFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 duration:(double)arg4;
- (PUTileTransitionCoordinator *)tilingView:(PUTilingView *)arg1 tileTransitionCoordinatorForLayoutInvalidationContext:(PUTilingLayoutInvalidationContext *)arg2;
- (PUTileTransitionCoordinator *)tilingView:(PUTilingView *)arg1 tileTransitionCoordinatorForReattachedTileControllers:(id <NSFastEnumeration>)arg2 context:(PUTileReattachmentContext *)arg3;
- (PUTileTransitionCoordinator *)tilingView:(PUTilingView *)arg1 tileTransitionCoordinatorForTransitionFromLayout:(PUTilingLayout *)arg2 toLayout:(PUTilingLayout *)arg3 withContext:(PUTilingLayoutTransitionContext *)arg4;
- (PUTileTransitionCoordinator *)tilingView:(PUTilingView *)arg1 tileTransitionCoordinatorForUpdateWithItems:(NSArray *)arg2;
- (bool)tilingViewCanBypass20069585Check:(PUTilingView *)arg1;

@end