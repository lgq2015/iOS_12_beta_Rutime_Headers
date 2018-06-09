/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUNetworkObserver : NSObject <ISSingleton, ISStoreURLOperationDelegate> {
    ISStoreURLOperation * _partnerDetectOperation;
    NSString * _partnerIdentifier;
    bool  _partnersEnabled;
    NSTimer * _startupTimer;
    long long  _storeServicesNetworkUsageCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentage;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSessionDuration;
@property (nonatomic, retain) NSString *partnerIdentifier;
@property (readonly) Class superclass;

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (void)_cancelStartupTimer;
- (void)_handleNetworkTypeChange:(id)arg1;
- (void)_handleUsingNetworkChange:(id)arg1;
- (void)_mainThreadHandleNetworkTypeChange:(id)arg1;
- (void)_mainThreadScheduleNetworkActivityUpdate;
- (void)_mainThreadSetPartnerIdentifier:(id)arg1;
- (void)_networkTypeChanged:(id)arg1;
- (void)_networkUsageStateChanged:(id)arg1;
- (void)_partnerHeaderChanged:(id)arg1;
- (void)_startupTimer:(id)arg1;
- (void)_storeServicesNetworkStartNotification:(id)arg1;
- (void)_storeServicesNetworkStopNotification:(id)arg1;
- (void)_updateNetworkActivityIndicator;
- (void)checkPartnerAvailability;
- (void)dealloc;
- (id)init;
- (id)partnerIdentifier;
- (void)setPartnerIdentifier:(id)arg1;
- (void)setPartnersEnabled:(bool)arg1;
- (void)startNetworkAvailabilityTimer;

@end