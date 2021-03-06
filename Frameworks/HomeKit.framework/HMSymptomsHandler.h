/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMSymptomsHandler : NSObject <HMFLogging, HMFMessageReceiver, HMObjectMerge, NSSecureCoding> {
    bool  _canInitiateFix;
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMThreadSafeMutableArrayCollection * _currentSymptoms;
    <HMSymptomsHandlerDelegate> * _delegate;
    HMDelegateCaller * _delegateCaller;
    long long  _fixState;
    HMFMessageDispatcher * _msgDispatcher;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (readonly) bool canInitiateFix;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) HMThreadSafeMutableArrayCollection *currentSymptoms;
@property (readonly, copy) NSString *debugDescription;
@property <HMSymptomsHandlerDelegate> *delegate;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (readonly) long long fixState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hf_isFixingSymptom;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (readonly, copy) NSSet *symptoms;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSUUID *uuid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_callCanFixUpdatedDelegate:(bool)arg1;
- (void)_callFixStateUpdatedDelegate:(long long)arg1;
- (void)_callStatusUpdateDelegate:(id)arg1;
- (void)_configureClientQueue:(id)arg1 delegateCaller:(id)arg2 msgDispatcher:(id)arg3;
- (void)_handleCanPromptFixProxCard:(id)arg1;
- (void)_handleFixStateUpdated:(id)arg1;
- (void)_handleSymptomsUpdated:(id)arg1;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (bool)canInitiateFix;
- (id)clientQueue;
- (id)currentSymptoms;
- (id)delegate;
- (id)delegateCaller;
- (void)encodeWithCoder:(id)arg1;
- (long long)fixState;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)initiateFixWithCompletionHandler:(id /* block */)arg1;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)propertyQueue;
- (void)registerForMessages;
- (void)setCanInitiateFix:(bool)arg1;
- (void)setClientQueue:(id)arg1;
- (void)setCurrentSymptoms:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setFixState:(long long)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (id)symptoms;
- (id)uniqueIdentifier;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id /* block */)hf_symptomArraySortComparator;
+ (id)hf_symptomTypesSortedByPriority;
+ (void)initialize;

- (id)hf_fakeSymptomsImplementationUsedForDebuggingPleaseDontTouchThisItIsFragileSwizzlingIsBadMKay;
- (bool)hf_isFixingSymptom;
- (id)hf_symptomsSortedByPriority;

@end
