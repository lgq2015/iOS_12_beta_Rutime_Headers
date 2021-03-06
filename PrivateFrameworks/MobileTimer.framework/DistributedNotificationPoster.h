/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface DistributedNotificationPoster : NSObject

+ (void)postNotificationForAlarmActiveChanged;
+ (void)postNotificationForAlarmsEdited;
+ (void)postNotificationForUserPreferences:(bool)arg1 localNotifications:(bool)arg2;

@end
