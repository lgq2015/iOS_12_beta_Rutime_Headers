/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKDeepBreathingSession : NSObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    <_HKDeepBreathingSessionDelegate> * _delegate;
    <_HKDeepBreathingSessionLifecycleDelegate> * _lifecycleDelegate;
    NSObject<OS_dispatch_queue> * _queue;
    <NSXPCProxyCreating> * _server;
    long long  _serverState;
    _HKDeepBreathingSessionConfiguration * _sessionConfiguration;
}

@property <_HKDeepBreathingSessionDelegate> *delegate;
@property (readonly) long long serverState;
@property (readonly) _HKDeepBreathingSessionConfiguration *sessionConfiguration;

+ (id)_clientInterface;
+ (id)_serverInterface;
+ (id)sessionWithConfiguration:(id)arg1 lifecycleDelegate:(id)arg2;

- (void).cxx_destruct;
- (void)_attachServerWithClientQueue:(id)arg1 healthStore:(id)arg2 completion:(id /* block */)arg3;
- (void)_connectionDidEncounterError:(id)arg1;
- (id)_initWithSessionConfiguration:(id)arg1 lifecycleDelegate:(id)arg2;
- (bool)_isServerAttached;
- (id)_lifecycleDelegate;
- (void)_queue_alertDelegateDidEncounterError:(id)arg1;
- (void)_queue_alertDelegateDidReceiveHeartRate:(double)arg1;
- (void)_queue_deactivate;
- (bool)_queue_isServerAttached;
- (void)_queue_transitionToServerState:(long long)arg1;
- (id)_serverProxy;
- (id)_serverWithErrorHandler:(id /* block */)arg1;
- (id)_sessionConfiguration;
- (id)delegate;
- (id)description;
- (void)endSessionWithEndReason:(long long)arg1;
- (long long)serverState;
- (id)sessionConfiguration;
- (void)sessionDidReceiveError:(id)arg1;
- (void)sessionDidReceiveHeartRate:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)startGuiding;
- (void)startSessionWithStartDate:(id)arg1 completion:(id /* block */)arg2;

@end