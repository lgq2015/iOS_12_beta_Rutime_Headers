/* made by EzioChiu.
 */

@protocol PUOneUpTilingLayoutDelegate <NSObject>

@optional

- (struct CGPoint { double x1; double x2; })layout:(PUOneUpTilingLayout *)arg1 accessoryOffsetForItemAtIndexPath:(NSIndexPath *)arg2;
- (double)layout:(PUOneUpTilingLayout *)arg1 aspectRatioForItemAtIndexPath:(NSIndexPath *)arg2;
- (struct CGSize { double x1; double x2; })layout:(PUOneUpTilingLayout *)arg1 assetExplorerReviewScreenBadgeSizeForItemAtIndexPath:(NSIndexPath *)arg2;
- (struct CGSize { double x1; double x2; })layout:(PUOneUpTilingLayout *)arg1 badgeSizeForItemAtIndexPath:(NSIndexPath *)arg2;
- (struct CGPoint { double x1; double x2; })layout:(PUOneUpTilingLayout *)arg1 contentOffsetForItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)layout:(PUOneUpTilingLayout *)arg1 disableInitialZoomToFillForItemAtIndexPath:(NSIndexPath *)arg2;
- (struct CGSize { double x1; double x2; })layout:(PUOneUpTilingLayout *)arg1 loadingIndicatorSizeForItemAtIndexPath:(NSIndexPath *)arg2;
- (double)layout:(PUOneUpTilingLayout *)arg1 minimumVisibleAccessoryHeightForItemAtIndexPath:(NSIndexPath *)arg2;
- (double)layout:(PUOneUpTilingLayout *)arg1 minimumVisibleContentHeightForItemAtIndexPath:(NSIndexPath *)arg2;
- (PUModelTileTransform *)layout:(PUOneUpTilingLayout *)arg1 modelTileTransformForItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)layout:(PUOneUpTilingLayout *)arg1 shouldScaleToFitSafeInsetsForItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)layout:(PUOneUpTilingLayout *)arg1 shouldShowAccessoryForItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)layout:(PUOneUpTilingLayout *)arg1 shouldShowBufferingIndicatorForItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)layout:(PUOneUpTilingLayout *)arg1 shouldShowPlayButtonForItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)layout:(PUOneUpTilingLayout *)arg1 shouldShowProgressIndicatorForItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)layout:(PUOneUpTilingLayout *)arg1 shouldShowVideoPlaceholderForItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)layoutShouldShowReviewScreenScrubberBar:(PUOneUpTilingLayout *)arg1;

@end