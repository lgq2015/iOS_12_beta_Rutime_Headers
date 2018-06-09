/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTTimerServer : NSObject <MTAgentDiagnosticDelegate, MTTimerObserver, MTTimerServer> {
    MTXPCConnectionListenerProvider * _connectionListenerProvider;
    <NAScheduler> * _serializer;
    MTTimerStorage * _storage;
    bool  _systemReady;
}

@property (nonatomic, readonly) MTXPCConnectionListenerProvider *connectionListenerProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (nonatomic, readonly) MTTimerStorage *storage;
@property (readonly) Class superclass;
@property (getter=isSystemReady, nonatomic, readonly) bool systemReady;

- (void).cxx_destruct;
- (bool)_isSystemReady;
- (id)_systemNotReadyError;
- (void)addTimer:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)checkIn;
- (id)connectionListenerProvider;
- (void)dismissTimerWithIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)gatherDiagnostics;
- (void)getTimersWithCompletion:(id /* block */)arg1;
- (void)handleSystemReady;
- (id)initWithStorage:(id)arg1;
- (id)initWithStorage:(id)arg1 connectionListenerProvider:(id)arg2;
- (bool)isSystemReady;
- (void)nextTimerDidChange:(id)arg1;
- (void)printDiagnostics;
- (void)removeTimer:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)repeatTimerWithIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)serializer;
- (void)setSerializer:(id)arg1;
- (void)source:(id)arg1 didAddTimers:(id)arg2;
- (void)source:(id)arg1 didDismissTimer:(id)arg2;
- (void)source:(id)arg1 didFireTimer:(id)arg2;
- (void)source:(id)arg1 didRemoveTimers:(id)arg2;
- (void)source:(id)arg1 didUpdateTimers:(id)arg2;
- (void)startListening;
- (void)stopListening;
- (id)storage;
- (void)updateTimer:(id)arg1 withCompletion:(id /* block */)arg2;

@end