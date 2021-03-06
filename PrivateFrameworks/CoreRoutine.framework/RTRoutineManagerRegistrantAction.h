/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTRoutineManagerRegistrantAction : RTRoutineManagerRegistrant {
    NSMutableDictionary * __actionHandlers;
    bool  _registered;
}

@property (nonatomic, readonly, copy) NSDictionary *actionHandlers;
@property (nonatomic, readonly) bool registered;

- (void).cxx_destruct;
- (id)actionHandlers;
- (id)init;
- (void)onActionConditions:(id)arg1 error:(id)arg2;
- (bool)registered;
- (id)startMonitoringPredictedConditionsForAction:(id)arg1 handler:(id /* block */)arg2;
- (id)stopMonitoringPredictedConditionsForAction:(id)arg1;

@end
