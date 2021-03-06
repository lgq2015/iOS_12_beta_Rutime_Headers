/* made by EzioChiu.
 */

@protocol QLPreviewScrollViewZoomDelegate <NSObject>

@optional

- (void)previewScrollView:(QLPreviewScrollView *)arg1 didEndZoomingAtScale:(double)arg2;
- (double)previewScrollView:(QLPreviewScrollView *)arg1 extraMinimumZoomForMinimumZoomScale:(double)arg2 maximumZoomScale:(double)arg3;
- (bool)previewScrollViewShouldResizeContentBasedOnPeripheryInsets:(QLPreviewScrollView *)arg1;
- (void)previewScrollViewWillBeginZooming:(QLPreviewScrollView *)arg1;

@end
