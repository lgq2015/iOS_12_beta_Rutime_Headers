/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXConnectionsCalendarSource : PEXConnectionsSource <PEXConnectionsLocationSource> {
    NSArray * _calendars;
    NSCache * _ekEventsCache;
    PEXEventCache * _eventCache;
    NSObject<OS_dispatch_queue> * _eventLoadingQueue;
    EKEventStore * _eventStore;
    bool  _eventStoreAccessGranted;
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
- (id)_filterOutAllDayAndMultiDayEvents:(id)arg1;
- (id)_loadCalendars;
- (id)_predicateForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)clearEKEventCaches;
- (id)ekEventWithExternalID:(id)arg1;
- (id)init;
- (bool)isCalendarEventEligibleForLocationPrediction:(id)arg1;
- (id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 category:(unsigned long long)arg6;
- (void)preloadEKEvents;
- (void)registerForCalendarNotifications;
- (void)requestAccessToEventStore;
- (void)setEventStoreAccessGranted:(bool)arg1;
- (id)upcomingCalendarEventsOfInterestFrom:(id)arg1 lookaheadTime:(double)arg2;

@end