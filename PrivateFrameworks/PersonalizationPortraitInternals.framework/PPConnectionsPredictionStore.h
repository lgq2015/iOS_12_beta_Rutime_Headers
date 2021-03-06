/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPConnectionsPredictionStore : NSObject {
    PPConnectionsCalendarSource * _calendarSource;
    PPConnectionsDuetSource * _duetSource;
    NSString * _identifier;
    PPConnectionsMetricsTracker * _metricsTracker;
    PPConnectionsNamedEntitySource * _namedEntitySource;
    PPConnectionsParameters * _parameters;
    PPConnectionsPasteboardSource * _pasteboardSource;
}

+ (id)defaultStore;

- (void).cxx_destruct;
- (id)calendarSource;
- (id)cutoffActivityTime;
- (id)cutoffCalendarEventTime;
- (id)cutoffLinguisticTriggerTime;
- (id)cutoffLocationAppLastUseTime;
- (id)cutoffNamedEntityTime;
- (id)cutoffPasteboardItemTime;
- (id)duetSource;
- (id)init;
- (id)parameters;
- (id)pasteboardSource;
- (id)recentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 error:(id*)arg5;

@end
