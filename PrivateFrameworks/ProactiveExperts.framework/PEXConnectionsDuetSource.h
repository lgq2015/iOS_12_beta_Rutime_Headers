/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXConnectionsDuetSource : PEXConnectionsSource <PEXConnectionsLocationSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)duetUserActivitiesFromStreams:(id)arg1 limit:(unsigned long long)arg2 afterDate:(id)arg3;
+ (id)identifier;
+ (id)sharedInstance;

- (id)duetLocationUserActivitiesWithLimit:(unsigned long long)arg1;
- (id)duetLocationUserActivitiesWithLimit:(unsigned long long)arg1 afterDate:(id)arg2;
- (bool)isDuetEventAuthorized:(id)arg1 bundleID:(id)arg2;
- (bool)isEligibleForTextBasedPredictions:(id)arg1;
- (id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 category:(unsigned long long)arg6;
- (id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 duetLimit:(long long)arg5 consumer:(unsigned long long)arg6 category:(unsigned long long)arg7 richLocationItems:(bool)arg8 resolveEKLocations:(bool)arg9;
- (id)supportedSemanticTags;
- (id)whitespaceAndNewlineCharacterSet;

@end
