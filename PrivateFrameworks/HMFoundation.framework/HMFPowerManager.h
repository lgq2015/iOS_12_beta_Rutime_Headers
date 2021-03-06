/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFPowerManager : HMFObject {
    float  _batteryLevel;
    long long  _batteryState;
    NSObject<OS_dispatch_queue> * _clientQueue;
    bool  _hasBattery;
    unsigned int  _interestNotification;
    struct IONotificationPort { } * _notificationPort;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    bool  _running;
}

@property float batteryLevel;
@property long long batteryState;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) bool hasBattery;
@property (nonatomic, readonly) unsigned int interestNotification;
@property (nonatomic, readonly) struct IONotificationPort { }*notificationPort;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (getter=isRunning, nonatomic) bool running;

+ (void)initialize;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_deregisterForPowerSourceNotifications:(bool)arg1;
- (void)_registerForPowerSourceNotifications;
- (float)batteryLevel;
- (long long)batteryState;
- (id)clientQueue;
- (void)dealloc;
- (bool)hasBattery;
- (id)init;
- (unsigned int)interestNotification;
- (bool)isRunning;
- (struct IONotificationPort { }*)notificationPort;
- (void)notifyBatteryLevelChange:(float)arg1;
- (void)notifyBatteryStateChange:(long long)arg1;
- (id)propertyQueue;
- (void)setBatteryLevel:(float)arg1;
- (void)setBatteryState:(long long)arg1;
- (void)setRunning:(bool)arg1;
- (void)start;
- (void)stop;
- (void)updateBatteryState:(unsigned int)arg1;

@end
