/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFMutableUserNotificationServiceSettings : HFUserNotificationServiceSettings

@property (nonatomic, retain) NSPredicate *notificationCondition;
@property (getter=areNotificationsEnabled, nonatomic) bool notificationsEnabled;

@end
