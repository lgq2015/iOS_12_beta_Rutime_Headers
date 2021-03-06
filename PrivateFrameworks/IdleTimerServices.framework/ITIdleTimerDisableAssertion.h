/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
 */

@interface ITIdleTimerDisableAssertion : NSObject <BSInvalidatable> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    BSSimpleAssertion * _internalAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_internalDescription;
- (id)initWithIdentifier:(id)arg1 forReason:(id)arg2 queue:(id)arg3 invalidationBlock:(id /* block */)arg4;
- (void)invalidate;
- (id)reason;

@end
