/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTSyncCommandListener : NSObject <MTAgentNotificationListener> {
    MTAlarmStorage * _alarmStorage;
    <MTSyncService> * _service;
}

@property (nonatomic, retain) MTAlarmStorage *alarmStorage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MTSyncService> *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_supportedNotificationNames;
- (id)alarmStorage;
- (void)handleNotification:(id)arg1;
- (bool)handlesNotification:(id)arg1;
- (id)initWithService:(id)arg1 alarmStorage:(id)arg2;
- (id)service;
- (void)setAlarmStorage:(id)arg1;
- (void)setService:(id)arg1;

@end
