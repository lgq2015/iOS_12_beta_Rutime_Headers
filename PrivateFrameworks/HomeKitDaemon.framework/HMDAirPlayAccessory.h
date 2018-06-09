/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAirPlayAccessory : HMDMediaAccessory <HMDAccessoryDisassociation, HMDAccessoryMinimumUserPrivilegeCapable, HMDAccessoryUserManagement, HMFLogging, HMFTimerDelegate> {
    HMFExponentialBackoffTimer * _configurationRetryTimer;
    long long  _minimumUserPriviledge;
    HMFPairingIdentity * _pairingIdentity;
    NSString * _password;
}

@property (nonatomic, readonly) HMFExponentialBackoffTimer *configurationRetryTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) long long minimumUserPriviledge;
@property (readonly, copy) HMFPairingIdentity *pairingIdentity;
@property (readonly, copy) NSString *password;
@property (readonly) Class superclass;
@property (readonly) bool supportsDisassociation;
@property (readonly) bool supportsUserManagement;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addUser:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)advertisement;
- (id)backingStoreObjects:(long long)arg1;
- (id)configurationRetryTimer;
- (void)configure:(id)arg1 msgDispatcher:(id)arg2 accessoryConfigureGroup:(id)arg3;
- (void)disassociateUser:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)disassociateWithCompletionHandler:(id /* block */)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)handleUpdatedAdvertisement:(id)arg1;
- (void)handleUpdatedMinimumUserPrivilege:(long long)arg1;
- (void)handleUpdatedName:(id)arg1;
- (void)handleUpdatedPassword:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransaction:(id)arg1 home:(id)arg2;
- (long long)minimumUserPriviledge;
- (id)pairingIdentity;
- (void)pairingsWithCompletionHandler:(id /* block */)arg1;
- (id)password;
- (void)populateModelObject:(id)arg1 version:(long long)arg2;
- (void)removeUser:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setAdvertisement:(id)arg1;
- (void)setMinimumUserPriviledge:(long long)arg1;
- (void)setPairingIdentity:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setReachable:(bool)arg1;
- (bool)supportsDisassociation;
- (bool)supportsMinimumUserPrivilege;
- (bool)supportsUserManagement;
- (void)timerDidFire:(id)arg1;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;

@end