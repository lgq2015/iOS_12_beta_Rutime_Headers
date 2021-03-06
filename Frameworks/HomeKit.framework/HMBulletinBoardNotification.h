/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMBulletinBoardNotification : NSObject <HMFLogging, HMFMessageReceiver, HMObjectMerge, NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSPredicate * _condition;
    HMDelegateCaller * _delegateCaller;
    bool  _enabled;
    NSString * _logID;
    HMFMessageDispatcher * _msgDispatcher;
    HMBulletinBoardNotificationServiceGroup * _notificationServiceGroup;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMService * _service;
    NSUUID * _targetUUID;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) NSPredicate *condition;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *logID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, readonly) HMBulletinBoardNotificationServiceGroup *notificationServiceGroup;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly) HMService *service;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *targetUUID;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_callBulletinBoardNotificationUpdatedDelegate;
- (void)_commitWithCompletionHandler:(id /* block */)arg1;
- (void)_configureClientQueue:(id)arg1 delegateCaller:(id)arg2 msgDispatcher:(id)arg3;
- (void)_handleBulletinBoardNotificationUpdateNotification:(id)arg1;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (id)clientQueue;
- (void)commitWithCompletionHandler:(id /* block */)arg1;
- (id)condition;
- (id)delegateCaller;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (id)logID;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)notificationServiceGroup;
- (id)propertyQueue;
- (id)service;
- (void)setClientQueue:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setPropertyQueue:(id)arg1;
- (id)targetUUID;
- (id)uniqueIdentifier;

@end
