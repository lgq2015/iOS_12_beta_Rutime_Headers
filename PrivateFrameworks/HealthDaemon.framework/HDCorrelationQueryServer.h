/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCorrelationQueryServer : HDBatchedQueryServer {
    NSDictionary * _dataFilters;
    bool  _permitPartiallyFilteredCorrelations;
    bool  _suspended;
}

@property (nonatomic, readonly) NSDictionary *dataFilters;

+ (Class)queryClass;
+ (id)requiredEntitlements;

- (void).cxx_destruct;
- (void)_queue_start;
- (bool)_queue_validateConfiguration:(id*)arg1;
- (id)dataFilters;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;

@end