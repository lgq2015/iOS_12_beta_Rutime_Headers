/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
 */

@interface ITIdleTimerStateRequestShim : NSObject <ITIdleTimerStateRequestHandling> {
    BSTimer * _idleTimerResetTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)setIdleTimerDisabled:(bool)arg1 forReason:(id)arg2;

@end