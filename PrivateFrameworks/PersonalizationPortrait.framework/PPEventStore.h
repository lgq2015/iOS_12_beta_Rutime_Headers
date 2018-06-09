/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPEventStore : NSObject {
    NSMapTable * _recordLoadingDelegates;
}

- (void).cxx_destruct;
- (void)_loadEventNameRecordsWithDelegate:(id)arg1;
- (void)_resetEventNameRecordsWithDelegate:(id)arg1;
- (void)_sendChangesToDelegates:(id)arg1;
- (id)init;
- (bool)interactionSummaryMetricsError:(id*)arg1 block:(id /* block */)arg2;
- (bool)iterDailyEventHighlightsError:(id*)arg1 block:(id /* block */)arg2;
- (bool)iterDailyEventHighlightsWithOptions:(int)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)iterEventHighlightsFrom:(id)arg1 to:(id)arg2 error:(id*)arg3 block:(id /* block */)arg4;
- (bool)iterEventHighlightsFrom:(id)arg1 to:(id)arg2 options:(int)arg3 error:(id*)arg4 block:(id /* block */)arg5;
- (bool)iterEventNameRecordsForClient:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)iterWeeklyEventHighlightsError:(id*)arg1 block:(id /* block */)arg2;
- (bool)iterWeeklyEventHighlightsWithOptions:(int)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)loadEventNameRecordsAndMonitorChangesWithDelegate:(id)arg1 error:(id*)arg2;
- (void)logEventInteractionForEventWithEventIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (bool)sendRTCLogsWithError:(id*)arg1;

@end