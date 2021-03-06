/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLAWDAvailableSessionsTrackerMock : PMLAWDAvailableSessionsTracker {
    NSMutableArray * _internalTrackedStats;
    NSArray * _trackedStats;
}

@property (readonly) NSArray *trackedStats;

- (void).cxx_destruct;
- (void)clearTrackedMessages;
- (id)init;
- (void)postMetricId:(unsigned int)arg1 message:(id)arg2;
- (id)recentStatsForModelName:(id)arg1;
- (id)trackedStats;
- (void)triggerAWDMetricRequest;

@end
