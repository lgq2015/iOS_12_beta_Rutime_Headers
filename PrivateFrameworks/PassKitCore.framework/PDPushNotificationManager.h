/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PDPushNotificationManager : NSObject <APSConnectionDelegate> {
    APSConnection * _apsConnection;
    NSHashTable * _consumers;
    NSLock * _consumersLock;
    NSString * _pushToken;
    NSMutableSet * _registeredTopics;
    NSObject<OS_dispatch_queue> * _replyQueue;
}

@property (nonatomic, readonly) NSArray *currentConsumers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *pushToken;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *topics;

- (void).cxx_destruct;
- (void)connect;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (id)currentConsumers;
- (void)dealloc;
- (id)init;
- (id)pushToken;
- (void)recalculatePushTopics;
- (void)registerConsumer:(id)arg1;
- (void)setPushToken:(id)arg1;
- (id)topics;
- (void)unregisterAllConsumers;
- (void)unregisterConsumer:(id)arg1;

@end