/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataAggregator : NSObject <HDHealthDaemonReadyObserver> {
    HDDataCollectionManager * _dataCollectionManager;
    bool  _hasStartedCollectors;
    NSLock * _lock;
    NSMapTable * _lock_collectorRegistry;
    HDDataAggregatorConfiguration * _lock_configuration;
}

@property (copy) HDDataAggregatorConfiguration *configuration;
@property (nonatomic, readonly) HDDataCollectionManager *dataCollectionManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) HKObjectType *objectType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_keyValueDomain;
- (void)_startCollector:(id)arg1;
- (void)_startCollectors;
- (id)allCollectors;
- (id)configuration;
- (id)configurationForCollector:(id)arg1;
- (void)daemonReady:(id)arg1;
- (id)dataCollectionManager;
- (void)dataCollector:(id)arg1 didChangeState:(id)arg2;
- (void)dataCollector:(id)arg1 didCollectSensorData:(id)arg2 device:(id)arg3;
- (void)dataCollector:(id)arg1 didCollectSensorDatum:(id)arg2;
- (void)dataCollector:(id)arg1 didCollectSensorDatum:(id)arg2 device:(id)arg3;
- (double)defaultDataCollectionInterval;
- (bool)didPersistObjects:(id)arg1 lastDatum:(id)arg2 collector:(id)arg3 error:(id*)arg4;
- (id)initWithDataCollectionManager:(id)arg1;
- (id)objectType;
- (bool)persistObjects:(id)arg1 lastDatum:(id)arg2 collector:(id)arg3 source:(id)arg4 device:(id)arg5 error:(id*)arg6;
- (void)recomputeCollectorConfiguration;
- (void)registerDataCollector:(id)arg1 state:(id)arg2;
- (void)requestAggregationThroughDate:(id)arg1 mode:(long long)arg2 completion:(id /* block */)arg3;
- (void)setConfiguration:(id)arg1;
- (void)unregisterDataCollector:(id)arg1;

@end
