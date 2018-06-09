/* made by EzioChiu.
 */

@protocol ICDeviceBrowserDelegate <NSObject>

@required

- (void)deviceBrowser:(ICDeviceBrowser *)arg1 didAddDevice:(ICDevice *)arg2 moreComing:(bool)arg3;
- (void)deviceBrowser:(ICDeviceBrowser *)arg1 didRemoveDevice:(ICDevice *)arg2 moreGoing:(bool)arg3;

@end