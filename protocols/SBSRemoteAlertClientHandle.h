/* made by EzioChiu.
 */

@protocol SBSRemoteAlertClientHandle <NSObject>

@required

- (void)queue_noteInvalidWithError:(NSError *)arg1;
- (void)queue_setActive:(bool)arg1;
- (BSMachPortSendRight *)queue_token;

@end
