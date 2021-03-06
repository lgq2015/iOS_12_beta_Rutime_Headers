/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCloudBookmarksMigrationRampEvaluator : NSObject {
    NSDate * _dateOfLastSettingsUpdate;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _rampIncludesUserIdentity;
    WBSCloudBookmarksMigrationRampSettings * _settings;
    NSString * _userIdentity;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) bool rampIncludesUserIdentity;
@property (nonatomic, readonly) WBSCloudBookmarksMigrationRampSettings *settings;

- (void).cxx_destruct;
- (void)_didFetchSettingsDictionary:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)_evaluateRampIncludesOperatingSystemVersion;
- (bool)_evaluateRampIncludesUserIdentity;
- (bool)_isInternalBuild;
- (id)_macSafariNormalizedBundleVersion;
- (id)_operatingSystemFamily;
- (struct { long long x1; long long x2; long long x3; })_operatingSystemVersion;
- (void)_updateSettingsIfNeeded:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_updateUserIdentityIfNeededWithFetcher:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearUserIdentity;
- (id)dictionaryRepresentation;
- (id)initFromDictionaryRepresentation:(id)arg1;
- (bool)rampIncludesUserIdentity;
- (id)settings;
- (void)updateForced:(bool)arg1 withUserIdentityFetcher:(id)arg2 completionHandler:(id /* block */)arg3;

@end
