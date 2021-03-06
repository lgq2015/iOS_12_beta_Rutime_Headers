/* made by EzioChiu.
 */

@protocol WLKNotificationsImpl

@required

- (<WLKNotificationCenterDelegate> *)delegate;
- (void)post:(NSString *)arg1 title:(NSString *)arg2 body:(NSString *)arg3 options:(NSDictionary *)arg4;
- (void)setDelegate:(id <WLKNotificationCenterDelegate>)arg1;

@end
