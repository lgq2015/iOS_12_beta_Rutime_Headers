/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFAsyncDispatchMulticaster : PFMulticaster {
    PFDispatchQueue * _sendQueue;
}

+ (void)initialize;

- (void).cxx_destruct;
- (id)_defaultDistributionQueue;
- (void)_distributeAsyncDispatchSelector:(SEL)arg1 to:(id)arg2 distributionBlock:(id /* block */)arg3;
- (void)distributeSelector:(SEL)arg1 toReceivers:(id)arg2 distributionBlock:(id /* block */)arg3;
- (void)flushMessagesAndNotify:(id /* block */)arg1;
- (id)init;
- (void)resume;
- (void)suspend;

@end