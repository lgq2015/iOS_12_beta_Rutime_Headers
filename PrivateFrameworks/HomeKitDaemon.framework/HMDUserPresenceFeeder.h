/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUserPresenceFeeder : HMDHomePresenceBase <HMDUserPresenceFeedSessionDelegate, HMFLogging> {
    HMDBackgroundTaskAgentTimer * _btaUpdateTimer;
    HMDUserPresenceFeedSession * _currentFeedSession;
    HMDUserPresenceFeed * _lastSentFeed;
    unsigned long long  _presenceRegionStatus;
}

@property (nonatomic, readonly) HMDBackgroundTaskAgentTimer *btaUpdateTimer;
@property (nonatomic, retain) HMDUserPresenceFeedSession *currentFeedSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDUserPresenceFeed *lastSentFeed;
@property (nonatomic) unsigned long long presenceRegionStatus;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (void)submitPresenceReportMetricWithPresenceAuth:(id)arg1 presenceCompute:(id)arg2 reason:(id)arg3 error:(id)arg4;

- (void).cxx_destruct;
- (void)_handleLocationAuthorizationMessage:(id)arg1;
- (void)_registerForMessages;
- (id)_sendPresenceAuthStatusForUser:(id)arg1 presenceAuthStatus:(id)arg2 presenceRegionStatus:(id)arg3 presenceComputeStatus:(id)arg4 reason:(id)arg5;
- (void)_sendPresenceReport:(unsigned long long)arg1;
- (void)_sendPresenceUpdateToResident:(id)arg1;
- (void)_sendPresenceUpdateToResidentForUser:(id)arg1 presenceAuthStatus:(id)arg2 authChanging:(bool)arg3 reason:(id)arg4;
- (void)_sendPresenceUpdateToResidentForUser:(id)arg1 presenceAuthStatus:(id)arg2 authChanging:(bool)arg3 reason:(id)arg4 fmfStatus:(id)arg5;
- (void)_startRefreshTimer;
- (void)_submitPresenceAuthMetric:(id)arg1;
- (void)_submitPresenceComputeMetric:(id)arg1;
- (void)_updatePresenceComputeStatus:(id)arg1;
- (bool)_updatePresenceToResidentForUser:(id)arg1 presenceAuthStatus:(id)arg2 authChanging:(bool)arg3 reason:(id)arg4 fmfStatus:(id)arg5;
- (void)_upgradePresenceAuth;
- (void)accountAvailabilityChanged:(id)arg1;
- (id)btaUpdateTimer;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2;
- (id)currentFeedSession;
- (void)didEndFeedSession:(id)arg1;
- (void)fmfStatusUpdateNotification:(id)arg1;
- (void)handleHomeDataLoadedNotification:(id)arg1;
- (void)homeDataProcessed;
- (id)init;
- (id)lastSentFeed;
- (void)notifyDidArriveHome;
- (void)notifyDidEnterHomeRegion;
- (void)notifyDidLeaveHome;
- (void)notifyDidLeaveHomeRegion;
- (void)presenceAuthChanged;
- (void)presenceAuthStatusChangedForUser:(id)arg1 presenceAuthStatus:(id)arg2;
- (unsigned long long)presenceRegionStatus;
- (void)registerQueriableAwdMetrics;
- (void)residentChanged;
- (void)setCurrentFeedSession:(id)arg1;
- (void)setLastSentFeed:(id)arg1;
- (void)setPresenceRegionStatus:(unsigned long long)arg1;
- (void)timerFired:(id)arg1;

@end