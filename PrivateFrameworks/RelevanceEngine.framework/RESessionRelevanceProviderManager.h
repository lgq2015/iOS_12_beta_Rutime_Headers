/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RESessionRelevanceProviderManager : RERelevanceProviderManager {
    NSDate * _lastDateUpdate;
}

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (bool)_supportsHistoricProviders;

- (void).cxx_destruct;
- (void)_addedProvider:(id)arg1;
- (void)_closeDataStoresAndObserveChanges;
- (void)_handleSignificantTimeChange;
- (bool)_isHistoricProvider:(id)arg1;
- (void)_openDataStoresAndObserveChanges;
- (void)_prepareForUpdate;
- (float)_relevanceForHistoricProvider:(id)arg1;
- (float)_relevanceForProvider:(id)arg1;
- (void)_scheduleUpdatesForSessionProvider:(id)arg1;
- (void)collectLoggableState:(id /* block */)arg1;

@end