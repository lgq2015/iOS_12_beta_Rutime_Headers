/* made by EzioChiu.
 */

@protocol SXComponentInteractionManager <NSObject>

@required

- (void)commitViewController:(UIViewController *)arg1;
- (<SXComponentInteractionPreviewContext> *)previewViewControllerForLocation:(struct CGPoint { double x1; double x2; })arg1;

@end