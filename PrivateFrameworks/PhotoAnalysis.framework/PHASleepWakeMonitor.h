/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHASleepWakeMonitor : NSObject {
    unsigned int  _ackPort;
    unsigned int  _notifier;
    struct IONotificationPort { } * _notifyPortRef;
    unsigned int  _powerAssertionID;
}

@property unsigned int ackPort;
@property unsigned int notifier;
@property struct IONotificationPort { }*notifyPortRef;
@property unsigned int powerAssertionID;

+ (bool)isSystemInDarkWake;

- (unsigned int)ackPort;
- (void)deRegisterForSleepWake;
- (id)init;
- (unsigned int)notifier;
- (struct IONotificationPort { }*)notifyPortRef;
- (unsigned int)powerAssertionID;
- (void)powerNotificationMessage:(unsigned int)arg1 argument:(void*)arg2;
- (void)registerForSleepWake;
- (void)releaseUserIdlePowerAssertion;
- (void)setAckPort:(unsigned int)arg1;
- (void)setNotifier:(unsigned int)arg1;
- (void)setNotifyPortRef:(struct IONotificationPort { }*)arg1;
- (void)setPowerAssertionID:(unsigned int)arg1;
- (void)takeUserIdlePowerAssertion;

@end
