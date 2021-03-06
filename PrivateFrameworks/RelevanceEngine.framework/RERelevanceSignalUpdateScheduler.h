/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RERelevanceSignalUpdateScheduler : RESingleton {
    bool  _alreadyScheduled;
    NSDate * _lastFireDate;
    NSObject<OS_dispatch_queue> * _queue;
    REUpNextTimer * _timer;
    NSMutableDictionary * _updateBlocks;
}

- (void).cxx_destruct;
- (void)_rescheduleTimer;
- (void)_updateBlocks;
- (void)dealloc;
- (id)init;
- (void)scheduleEventWithIdentifier:(id)arg1 updateFrequency:(double)arg2 completion:(id /* block */)arg3;
- (void)unscheduleEventWithIdentifier:(id)arg1;

@end
