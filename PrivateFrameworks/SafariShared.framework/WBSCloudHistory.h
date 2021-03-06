/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCloudHistory : NSObject <WBSCloudKitThrottlerDataStore> {
    bool  _cloudHistoryEnabled;
    NSObject<OS_dispatch_queue> * _cloudHistoryQueue;
    WBSCloudHistoryConfiguration * _configuration;
    WBSCloudKitThrottler * _fetchChangesThrottler;
    bool  _fetchChangesWhenBackoffTimerFires;
    bool  _fetchChangesWhenHistoryLoads;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > { 
        struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > { 
            struct SuddenTerminationDisabler {} *__value_; 
        } __ptr_; 
    }  _fetchOperationSuddenTerminationDisabler;
    <NSObject> * _historyWasLoadedObserver;
    unsigned long long  _numberOfDevicesInSyncCircle;
    WBSCloudHistoryPushAgentProxy * _pushAgent;
    NSTimer * _pushNotificationFetchTimer;
    bool  _removedHistoryItemsArePendingSave;
    bool  _replayLongLivedSaveOperationHasBeenPerformed;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > { 
        struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > { 
            struct SuddenTerminationDisabler {} *__value_; 
        } __ptr_; 
    }  _replayLongLivedSaveOperationSuddenTerminationDisabler;
    WBSCloudKitThrottler * _saveChangesThrottler;
    bool  _saveChangesWhenBackoffTimerFires;
    bool  _saveChangesWhenHistoryLoads;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > { 
        struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > { 
            struct SuddenTerminationDisabler {} *__value_; 
        } __ptr_; 
    }  _saveOperationSuddenTerminationDisabler;
    NSTimer * _serverBackoffTimer;
    <WBSCloudHistoryDataStore> * _store;
    NSMutableDictionary * _syncCircleSizeRetrievalCompletionHandlersByOperation;
    WBSCloudKitThrottler * _syncCircleSizeRetrievalThrottler;
}

@property (getter=isCloudHistoryEnabled, nonatomic) bool cloudHistoryEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numberOfDevicesInSyncCircle;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_backOffWithInterval:(double)arg1;
- (double)_backoffTimeIntervalFromError:(id)arg1;
- (unsigned long long)_cachedNumberOfDevicesInSyncCircle;
- (void)_cloudHistoryConfigurationChanged:(id)arg1;
- (id)_currentFetchChangesThrottlerPolicyString;
- (id)_currentSaveChangesThrottlerPolicyString;
- (id)_currentSyncCircleSizeRetrievalThrottlerPolicyString;
- (void)_determineNumberOfDevicesInSyncCircleForOperation:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)_estimatedPriorityForPotentialSaveAttempt;
- (void)_fetchAndMergeChangesBypassingThrottler:(bool)arg1;
- (void)_fetchAndMergeChangesWithServerChangeTokenData:(id)arg1 intoHistory:(id)arg2 withPriority:(long long)arg3;
- (void)_fetchChangesInResponseToPushNotification:(id)arg1;
- (void)_fetchChangesWhenHistoryLoads;
- (void)_historyItemsWereRemoved:(id)arg1;
- (void)_historyWasLoaded:(id)arg1;
- (void)_initializePushNotificationSupport;
- (void)_performBlockAsynchronouslyOnCloudHistoryQueueAfterHistoryHasLoaded:(id /* block */)arg1;
- (void)_persistLongLivedSaveOperationDictionaryWithOperationID:(id)arg1 databaseGeneration:(long long)arg2;
- (void)_persistedLongLivedSaveOperationID:(id*)arg1 databaseGeneration:(long long*)arg2;
- (void)_postSaveChangesAttemptCompletedNotificationWithAllPendingDataSaved:(bool)arg1;
- (long long)_priorityForSaveWithVisits:(id)arg1 tombstones:(id)arg2 bypassingThrottler:(bool)arg3;
- (void)_processPendingPushNotifications;
- (void)_pruneTombstonesThatCanNoLongerMatchVisitsFetchedFromCloud;
- (void)_pushNotificationReceived:(id)arg1;
- (void)_registerForHistoryWasLoadedNotificationIfNecessary;
- (void)_removePersistedLongLivedSaveOperationDictionary;
- (void)_replayPersistedLongLivedSaveOperationIfNecessary;
- (long long)_resultFromError:(id)arg1;
- (void)_saveChangesToCloudHistoryStoreBypassingThrottler:(bool)arg1;
- (void)_saveChangesWhenHistoryLoads;
- (void)_saveVisits:(id)arg1 tombstones:(id)arg2 toCloudHistoryBypassingThrottler:(bool)arg3 longLivedOperationPersistenceCompletion:(id /* block */)arg4 withCallback:(id /* block */)arg5;
- (void)_serverBackoffTimerFired:(id)arg1;
- (void)_setCachedNumberOfDevicesInSyncCircle:(unsigned long long)arg1;
- (void)_updateDeviceCountInResponseToPushNotification;
- (void)_updateThrottlerPolicies;
- (id)dateOfNextPermittedSaveChangesAttempt;
- (void)dealloc;
- (void)fetchAndMergeChanges;
- (void)fetchAndMergeChangesBypassingThrottler;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 completionBlock:(id /* block */)arg2;
- (bool)isCloudHistoryEnabled;
- (unsigned long long)numberOfDevicesInSyncCircle;
- (id)recordOfPastOperationsForThrottler:(id)arg1;
- (void)resetForAccountChange;
- (void)saveChangesToCloudHistoryStore;
- (void)saveChangesToCloudHistoryStoreBypassingThrottler;
- (void)setCloudHistoryEnabled:(bool)arg1;
- (void)setNumberOfDevicesInSyncCircle:(unsigned long long)arg1;
- (void)setRecordOfPastOperations:(id)arg1 forThrottler:(id)arg2;

@end
