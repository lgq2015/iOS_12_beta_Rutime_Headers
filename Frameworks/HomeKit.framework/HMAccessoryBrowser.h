/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAccessoryBrowser : NSObject <HMFMessageReceiver> {
    HMThreadSafeMutableArrayCollection * _accessories;
    bool  _browsing;
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HMAccessoryBrowserDelegate> * _delegate;
    HMDelegateCaller * _delegateCaller;
    unsigned long long  _generationCounter;
    HMFMessageDispatcher * _msgDispatcher;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSUUID * _uuid;
    HMXpcClient * _xpcClient;
}

@property (nonatomic, retain) HMThreadSafeMutableArrayCollection *accessories;
@property (getter=isBrowsing, nonatomic) bool browsing;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMAccessoryBrowserDelegate> *delegate;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *discoveredAccessories;
@property (nonatomic) unsigned long long generationCounter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, retain) HMXpcClient *xpcClient;

- (void).cxx_destruct;
- (void)_fetchNewAccessories;
- (void)_fetchNewAccessoriesWithPrivacyCheck;
- (void)_handleNewAccessoriesFound:(id)arg1;
- (void)_handleNewAccessoriesRemoved:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_start;
- (void)_startSearchingForNewAccessories;
- (void)_stopSearchingForNewAccessories;
- (void)_updateNewAccessories:(id)arg1;
- (id)accessories;
- (id)clientQueue;
- (void)dealloc;
- (id)delegate;
- (id)delegateCaller;
- (id)discoveredAccessories;
- (unsigned long long)generationCounter;
- (void)handleStartWithError:(id)arg1 response:(id)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (bool)isBrowsing;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)propertyQueue;
- (void)setAccessories:(id)arg1;
- (void)setBrowsing:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setGenerationCounter:(unsigned long long)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setXpcClient:(id)arg1;
- (void)startSearchingForNewAccessories;
- (void)stopSearchingForNewAccessories;
- (id)uuid;
- (id)xpcClient;

@end
