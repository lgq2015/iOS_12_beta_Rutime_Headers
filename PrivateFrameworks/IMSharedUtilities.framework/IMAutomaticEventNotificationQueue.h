/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMAutomaticEventNotificationQueue : IMEventNotificationQueue

- (void)_didAddNotification:(id)arg1;
- (void)_didCancelNotifications;
- (void)_didProcessQueue;
- (void)_invokeEvent:(id)arg1;

@end