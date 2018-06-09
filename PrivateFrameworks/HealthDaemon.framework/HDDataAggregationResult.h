/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataAggregationResult : NSObject {
    NSArray * _aggregatedObjects;
    <HDCollectedSensorDatum> * _lastSensorData;
    NSArray * _remainingSensorData;
}

@property (nonatomic, readonly, copy) NSArray *aggregatedObjects;
@property (nonatomic, readonly, copy) <HDCollectedSensorDatum> *lastSensorData;
@property (nonatomic, readonly, copy) NSArray *remainingSensorData;

- (void).cxx_destruct;
- (id)aggregatedObjects;
- (id)initWithAggregatedObjects:(id)arg1 remainingSensorData:(id)arg2 lastSensorData:(id)arg3;
- (id)lastSensorData;
- (id)remainingSensorData;

@end