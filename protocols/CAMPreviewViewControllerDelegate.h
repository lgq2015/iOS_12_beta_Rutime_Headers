/* made by EzioChiu.
 */

@protocol CAMPreviewViewControllerDelegate <NSObject>

@required

- (bool)previewViewController:(CAMPreviewViewController *)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 shouldRequireFailureOfGestureRecognizer:(UIGestureRecognizer *)arg3;
- (void)previewViewControllerDidChangeFocusOrExposureLocked:(CAMPreviewViewController *)arg1 shouldAnimate:(bool)arg2;

@end
