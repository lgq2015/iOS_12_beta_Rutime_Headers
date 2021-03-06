/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDApplicationInfo : HMFObject <HMFLogging> {
    NSMutableDictionary * _activeProcesses;
    NSString * _bundleIdentifier;
    NSString * _companionAppBundleIdentifier;
    bool  _spiClient;
    NSString * _teamIdentifier;
}

@property (nonatomic, readonly) NSMutableDictionary *activeProcesses;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *companionAppBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isSPIClient, nonatomic, readonly) bool spiClient;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *teamIdentifier;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)activeProcesses;
- (id)bundleIdentifier;
- (id)companionAppBundleIdentifier;
- (id)description;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1 teamIdentifier:(id)arg2 companionAppBundleIdentifier:(id)arg3 spiClient:(bool)arg4;
- (bool)isSPIClient;
- (id)logIdentifier;
- (id)teamIdentifier;

@end
