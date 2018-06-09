/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMBulletinBoardNotificationServiceGroup : NSObject <HMFLogging, HMFMessageReceiver, HMObjectMerge, NSSecureCoding> {
    NSSet * _associatedServiceUUIDs;
    NSArray * _associatedServices;
    HMBulletinBoardNotification * _bulletinBoardNotification;
    NSSet * _cameraProfileUUIDs;
    NSArray * _cameraProfiles;
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMDelegateCaller * _delegateCaller;
    NSString * _logID;
    HMFMessageDispatcher * _msgDispatcher;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSUUID * _targetUUID;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, retain) NSSet *associatedServiceUUIDs;
@property (nonatomic, retain) NSArray *associatedServices;
@property (nonatomic, readonly) HMBulletinBoardNotification *bulletinBoardNotification;
@property (nonatomic, retain) NSSet *cameraProfileUUIDs;
@property (nonatomic, retain) NSArray *cameraProfiles;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *logID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *targetUUID;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_callServiceGroupUpdate;
- (void)_configureClientQueue:(id)arg1 delegateCaller:(id)arg2 msgDispatcher:(id)arg3;
- (void)_findObjects;
- (void)_handleBulletinBoardNotificationServiceGroupUpdateNotification:(id)arg1;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)_requestServiceGroup;
- (id)associatedServiceUUIDs;
- (id)associatedServices;
- (id)bulletinBoardNotification;
- (id)cameraProfileUUIDs;
- (id)cameraProfiles;
- (id)clientQueue;
- (void)dealloc;
- (id)delegateCaller;
- (void)encodeWithCoder:(id)arg1;
- (void)handleConfigureNotification:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)logID;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)propertyQueue;
- (void)setAssociatedServiceUUIDs:(id)arg1;
- (void)setAssociatedServices:(id)arg1;
- (void)setCameraProfileUUIDs:(id)arg1;
- (void)setCameraProfiles:(id)arg1;
- (void)setClientQueue:(id)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setPropertyQueue:(id)arg1;
- (id)targetUUID;
- (id)uniqueIdentifier;

@end