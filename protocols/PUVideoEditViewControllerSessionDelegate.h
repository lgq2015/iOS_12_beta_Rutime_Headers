/* made by EzioChiu.
 */

@protocol PUVideoEditViewControllerSessionDelegate <NSObject>

@optional

- (void)videoEditViewController:(PUVideoEditViewController *)arg1 didFinishEditingSessionForAsset:(id <PUEditableAsset>)arg2 completed:(bool)arg3;

@end