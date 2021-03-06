/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

@interface BFFSettingsManager : NSObject {
    NSNumber * _stashedAssistantEnabled;
    NSNumber * _stashedAssistantVoiceTriggerEnabled;
    NSMutableArray * _stashedButtonHaptics;
    NSArray * _stashedFlowSkipIdentifiers;
    NSNumber * _stashedLocationServicesEnabled;
    NSMutableDictionary * _stashedManagedConfigurationSettings;
    NSMutableArray * _stashedPaths;
    NSMutableDictionary * _stashedPreferences;
    NSData * _stashedWatchData;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_applyAssistantPreferences;
- (void)_applyLocationServices;
- (void)_applyStashedButtonHaptics;
- (void)_applyStashedFlowSkipIdentifiers;
- (void)_applyStashedManagedConfiguration;
- (void)_applyStashedPreferences;
- (bool)_commitStash;
- (id)_preferencesForDomain:(id)arg1;
- (void)_reset:(bool)arg1;
- (unsigned long long)_restoreConfiguration;
- (void)_restoreStashedFiles;
- (void)_restoreWatchData;
- (id)_shovePath:(id)arg1 toPath:(id)arg2;
- (bool)_stashConfiguration:(bool)arg1;
- (bool)_stashPaths;
- (void)applySafeHavenStash;
- (void)clearHapticTypeForButtonKind:(long long)arg1;
- (bool)hasStashedValues;
- (bool)hasStashedValuesOnDisk;
- (bool)hideStashInSafeHaven;
- (bool)hideStashInSafeHavenAsProvisional:(bool)arg1;
- (id)init;
- (void)populatePathsToStash;
- (void)postDidRestoreSafeHavenNotification;
- (void)removeBoolSettingForManagedConfigurationSetting:(id)arg1;
- (void)removeObjectForBuddyKey:(id)arg1;
- (bool)removeSafeHaven;
- (void)reset;
- (void)setAssistantEnabled:(bool)arg1;
- (void)setAssistantVoiceTriggerEnabled:(bool)arg1;
- (void)setBool:(bool)arg1 forBuddyKey:(id)arg2;
- (void)setBool:(bool)arg1 forDomain:(id)arg2 key:(id)arg3;
- (void)setBool:(bool)arg1 forManagedConfigurationSetting:(id)arg2;
- (void)setObject:(id)arg1 forBuddyKey:(id)arg2;
- (void)setObject:(id)arg1 forDomain:(id)arg2 key:(id)arg3;
- (id)stashBuildVersion;
- (long long)stashConfigurationType;
- (void)stashFlowSkipIdentifiers:(id)arg1;
- (void)stashHapticType:(long long)arg1 forButtonKind:(long long)arg2;
- (void)stashLocationServicesChoice:(bool)arg1;
- (void)stashPath:(id)arg1;
- (id)stashProductVersion;
- (unsigned long long)stashVersion;
- (void)stashWatchData:(id)arg1;

@end
