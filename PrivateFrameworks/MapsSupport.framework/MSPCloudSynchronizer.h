/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPCloudSynchronizer : NSObject <MSPJournaling> {
    <MSPCloudAccess> * _access;
    unsigned long long  _countOfInFlightMerges;
    <MSPCloudSynchronizerDelegate> * _delegate;
    struct atomic_flag { 
        bool _Value; 
    }  _didScheduleInitialMerge;
    unsigned long long  _failedResolutionAttempts;
    NSTimer * _identityRecheckTimer;
    MSPJournal * _journal;
    long long  _loginStatus;
    NSMutableArray * _mergeCompletionHandlers;
    NSDate * _minimumDateAfterTooManyFailedResolutionAttempts;
    bool  _needsMerge;
    MSPMapsPaths * _paths;
    bool  _started;
    NSOperationQueue * _taskAttemptsQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSPCloudSynchronizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_loginStatus, setter=_setLoginStatus:) long long loginStatus;
@property (readonly) Class superclass;

+ (double)_batchingTimeInterval;
+ (long long)_boostedQualityOfServiceForOpportunisticTask;
+ (long long)_boostedQualityOfServiceForUserObservableTask;
+ (double)_identityRecheckInterval;
+ (long long)_maximumResolutionAttemptsCount;
+ (double)_minimumReattemptInterval;
+ (long long)_qualityOfServiceForInitialDownload;
+ (long long)_qualityOfServiceForOpportunisticTask;
+ (long long)_qualityOfServiceForUserObservableTask;
+ (double)_timeIntervalToWaitAfterTooManyResolutionAttempts;
+ (double)_timeIntervalToWaitBetweenBoosts;

- (void).cxx_destruct;
- (void)_availabilityDidChange;
- (void)_beginWaitingForAvailabilityAndStartQueueIfPossible;
- (long long)_boostIfNeededQualityOfServiceForTask:(id)arg1 thatIsUserObservable:(bool)arg2;
- (void)_cancelAllOperationsWithCompletion:(id /* block */)arg1;
- (void)_completeOperation:(id)arg1 isMerge:(bool)arg2 withError:(id)arg3 canReattempt:(bool)arg4 maxAttempts:(unsigned long long)arg5 minimumReattemptDate:(id)arg6 completion:(id /* block */)arg7;
- (void)_enqueueOperation:(id)arg1 requireBeingLoggedIn:(bool)arg2;
- (long long)_loginStatus;
- (bool)_mergesAreSuspendedAfterTooManyFailedResolvingAttempts;
- (id)_minimumReattemptDateForProposedDate:(id)arg1;
- (void)_resetTooManyResolvingAttemptsHolds;
- (void)_scheduleMergeForUserObservableChange:(bool)arg1;
- (void)_scheduleMergeForUserObservableChange:(bool)arg1 isInitialMerge:(bool)arg2;
- (id)_scheduleTaskIfAny:(id)arg1 isMerge:(bool)arg2 qualityOfService:(long long)arg3 completion:(id /* block */)arg4;
- (void)_setLoginStatus:(long long)arg1;
- (bool)_shouldContinueAfterFailingResolutionAttempt;
- (void)_taskThatIncludedResolutionAttemptSucceeded;
- (bool)_wasTaskScheduledWhenTokenCreated:(id)arg1;
- (id)delegate;
- (id)init;
- (id)initWithAccess:(id)arg1;
- (id)scheduleTask:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNeedsMergeForUserObservableChange:(bool)arg1 completion:(id /* block */)arg2;
- (void)setNeedsMergeWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (bool)shouldReportState:(id)arg1;
- (void)start;
- (void)stop;

@end