/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSessionObservatory : NSObject {
    NSMapTable * _captureSessionsStorage;
    long long  _lastRunningIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    NSHashTable * _registeredObservers;
}

+ (void)initialize;
+ (id)sharedObservatory;

- (void)_registerObserver:(id)arg1;
- (void)_setRunning:(bool)arg1 forCaptureSession:(struct OpaqueFigCaptureSession { }*)arg2;
- (void)captureSessionWasCreated:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)dealloc;
- (id)init;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
