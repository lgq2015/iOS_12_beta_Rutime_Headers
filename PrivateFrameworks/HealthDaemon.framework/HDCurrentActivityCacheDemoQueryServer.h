/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCurrentActivityCacheDemoQueryServer : HDCurrentActivityCacheQueryServer

- (id)_demoStatisticsForDataTypeIdentifier:(id)arg1 unit:(id)arg2;
- (id)_demoStatisticsForStandHours;
- (void)_queue_start;
- (bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (bool)shouldObserveActivityCache;

@end
