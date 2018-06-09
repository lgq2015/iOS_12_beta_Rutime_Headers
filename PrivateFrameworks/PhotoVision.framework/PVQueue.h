/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

@interface PVQueue : NSObject {
    PVCanceler * _canceler;
    int  _currentlyExecutingTasksCount;
    bool  _isConcurrent;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _terminating;
}

- (void).cxx_destruct;
- (void)dispatch_barrier_async:(id /* block */)arg1;
- (void)dispatch_barrier_sync:(id /* block */)arg1;
- (void)execute_after:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)execute_async:(id /* block */)arg1;
- (void)execute_sync:(id /* block */)arg1;
- (id)initQueueWithName:(id)arg1 isSerial:(bool)arg2 qos_class:(unsigned int)arg3;
- (void)resume;
- (void)suspend_async;
- (void)suspend_sync;
- (void)terminate_sync;
- (void)waitForCurrentTasksToFinish;

@end