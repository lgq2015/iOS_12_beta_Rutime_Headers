/* made by EzioChiu.
 */

@protocol SUPreviewOverlayContainer <NSObject>

@optional

- (void)hidePreviewOverlay:(void *)arg1 animated:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 7: SUPreviewOverlayViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)isShowingPreviewOverlay;
- (bool)showPreviewOverlay:(void *)arg1 animated:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 7: SUPreviewOverlayViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end