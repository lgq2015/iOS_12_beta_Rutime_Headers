/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYDevice : NSObject <NRDevicePropertyObserver, SYStateLoggable> {
    bool  _cachedIsNearby;
    NSString * _deviceClass;
    bool  _hasCachedNearby;
    NSDate * _lastActiveDate;
    NRDevice * _nrDevice;
    NSUUID * _pairingID;
    NSString * _pairingStorePath;
    long long  _state;
    NSString * _systemBuildVersion;
    NSString * _systemVersion;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic) bool cachedIsNearby;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceClass;
@property (nonatomic, readonly) long long deviceCode;
@property (nonatomic) bool hasCachedNearby;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *lastActiveDate;
@property (nonatomic, readonly) NRDevice *nrDevice;
@property (getter=isPaired, nonatomic, readonly) bool paired;
@property (nonatomic, readonly) NSUUID *pairingID;
@property (nonatomic, readonly, copy) NSString *pairingStorePath;
@property (nonatomic) long long state;
@property (nonatomic, readonly) PBCodable *stateForLogging;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFileTransferMessageSend;
@property (nonatomic, readonly) NSString *systemBuildVersion;
@property (nonatomic, readonly) NSString *systemVersion;
@property (getter=isTargetable, nonatomic, readonly) bool targetable;

+ (id)deviceForIDSDevice:(id)arg1;
+ (id)deviceForIDSDeviceID:(id)arg1 fromList:(id)arg2;
+ (id)deviceForNRDevice:(id)arg1;
+ (id)knownDevices;
+ (id)targetableDevice;

- (void).cxx_destruct;
- (void)_updateCachedStateForProperty:(id)arg1;
- (void)_updateStateFlagsPostingNotifications:(bool)arg1;
- (bool)cachedIsNearby;
- (id)debugDescription;
- (id)description;
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;
- (id)deviceClass;
- (long long)deviceCode;
- (id)findMatchingIDSDeviceFromList:(id)arg1;
- (bool)hasCachedNearby;
- (id)init;
- (id)initWithNRDevice:(id)arg1;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (bool)isPaired;
- (bool)isTargetable;
- (id)lastActiveDate;
- (id)nrDevice;
- (id)pairingID;
- (id)pairingStorePath;
- (void)setCachedIsNearby:(bool)arg1;
- (void)setHasCachedNearby:(bool)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (id)stateForLogging;
- (bool)supportsFileTransferMessageSend;
- (id)systemBuildVersion;
- (id)systemVersion;

@end