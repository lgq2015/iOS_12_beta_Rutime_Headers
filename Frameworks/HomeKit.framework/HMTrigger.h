/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMTrigger : NSObject <HFPrettyDescription, HFStateDumpSerializable, HMFMessageReceiver, HMObjectMerge, NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMThreadSafeMutableArrayCollection * _currentActionSets;
    HMDelegateCaller * _delegateCaller;
    bool  _enabled;
    HMHome * _home;
    NSDate * _lastFireDate;
    HMFMessageDispatcher * _msgDispatcher;
    NSString * _name;
    HMUser * _owner;
    HMDevice * _ownerDevice;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic, readonly, copy) NSArray *actionSets;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) HMThreadSafeMutableArrayCollection *currentActionSets;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hf_requiresConfirmationToRun;
@property (nonatomic) HMHome *home;
@property (nonatomic, copy) NSDate *lastFireDate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) HMUser *owner;
@property (nonatomic, retain) HMDevice *ownerDevice;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, retain) NSUUID *uuid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addActionSet:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_addActionSetWithCompletionHandler:(id /* block */)arg1;
- (void)_configure:(id)arg1 uuid:(id)arg2 messageDispatcher:(id)arg3 clientQueue:(id)arg4 delegateCaller:(id)arg5;
- (void)_enable:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleTriggerActivatedNotification:(id)arg1;
- (void)_handleTriggerFired:(id)arg1;
- (void)_handleTriggerFiredNotification:(id)arg1;
- (void)_handleTriggerRenamedNotification:(id)arg1;
- (void)_handleUpdatedActionSetNotification:(id)arg1;
- (void)_invalidate;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)_removeActionSet:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_serializeForAdd;
- (void)_unconfigure;
- (void)_updateActionSet:(id)arg1 add:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)actionSets;
- (void)addActionSet:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addActionSetWithCompletionHandler:(id /* block */)arg1;
- (id)clientQueue;
- (bool)compatibleWithApp;
- (id)creator;
- (id)creatorDevice;
- (id)currentActionSets;
- (void)dealloc;
- (id)delegateCaller;
- (void)enable:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (bool)isEnabled;
- (id)lastFireDate;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)name;
- (id)owner;
- (id)ownerDevice;
- (id)propertyQueue;
- (void)removeActionSet:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setClientQueue:(id)arg1;
- (void)setCurrentActionSets:(id)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setLastFireDate:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setOwnerDevice:(id)arg1;
- (void)setPropertyQueue:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uniqueIdentifier;
- (void)updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_localizedStringForSignficantEvent:(id)arg1 offset:(id)arg2;
+ (id)hf_sanitizeTriggerName:(id)arg1 home:(id)arg2;

- (id)hf_forceDisableReasons;
- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;
- (bool)hf_requiresConfirmationToRun;
- (id)hf_serializedStateDumpRepresentation;

@end
