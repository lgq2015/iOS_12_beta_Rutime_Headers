/* made by EzioChiu.
 */

@protocol UNSNotificationRepositoryDelegate <NSObject>

@required

- (void)willPresentNotification:(void *)arg1 forBundleIdentifier:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 9: UNSNotificationRecord *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*

@end