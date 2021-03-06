/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPConnectionsCalendarSource : PPConnectionsSource <PPConnectionsLocationSource> {
    PPLocalEventStore * _localEventStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)identifier;
+ (id)locationLabelFromEKEvent:(id)arg1;
+ (id)locationNameFromEKEvent:(id)arg1;
+ (id)locationValueFromEKEvent:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)ekEventWithExternalID:(id)arg1;
- (id)init;
- (bool)isCalendarEventEligibleForLocationPrediction:(id)arg1;
- (id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 explanationSet:(id)arg6;
- (id)upcomingCalendarEventsOfInterestFrom:(id)arg1 lookaheadTime:(double)arg2;

@end
