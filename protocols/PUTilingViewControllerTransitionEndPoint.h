/* made by EzioChiu.
 */

@protocol PUTilingViewControllerTransitionEndPoint <NSObject>

@required

- (void)tilingViewControllerTransition:(id <PUTilingViewControllerTransition>)arg1 abandonTilingView:(PUTilingView *)arg2 toEndPoint:(id <PUTilingViewControllerTransitionEndPoint>)arg3;
- (void)tilingViewControllerTransition:(void *)arg1 adoptTilingView:(void *)arg2 fromEndPoint:(void *)arg3 isCancelingTransition:(void *)arg4 animationSetupCompletionHandler:(void *)arg5; // needs 5 arg types, found 10: <PUTilingViewControllerTransition> *, PUTilingView *, <PUTilingViewControllerTransitionEndPoint> *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PUAnimationGroup *, void*
- (PUTilingView *)tilingViewControllerTransition:(id <PUTilingViewControllerTransition>)arg1 tilingViewToTransferToEndPoint:(id <PUTilingViewControllerTransitionEndPoint>)arg2;
- (UIView *)tilingViewControllerTransitionTilingViewHostView:(id <PUTilingViewControllerTransition>)arg1;

@optional

- (long long)tilingViewControllerTransitionPreferredBarStyle:(id <PUTilingViewControllerTransition>)arg1;
- (bool)tilingViewControllerTransitionUsesTransientTilingView:(id <PUTilingViewControllerTransition>)arg1;
- (void)tilingViewControllerTransitionWasAborted:(id <PUTilingViewControllerTransition>)arg1;

@end