/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDBTLEHeartRateDataCollector : NSObject <HDDataCollector> {
    HDDataCollectorConfiguration * _configuration;
    HKHealthService * _connectedService;
    unsigned long long  _connectedSessionIdentifier;
    NSArray * _oneShotServices;
    NSMutableDictionary * _pendingSessions;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelSessionsWithIdentifiers:(id)arg1;
- (id)_heartRatePairingsWithError:(id*)arg1;
- (void)_queue_configurationChanged:(id)arg1;
- (id)_queue_currentState;
- (void)_queue_handleCharacteristic:(id)arg1 device:(id)arg2;
- (void)_queue_service:(id)arg1 session:(unsigned long long)arg2 statusDidChange:(long long)arg3 finished:(bool)arg4 error:(id)arg5;
- (void)_queue_service:(id)arg1 sessionDidConnect:(unsigned long long)arg2;
- (void)_queue_service:(id)arg1 sessionDidDisconnect:(unsigned long long)arg2;
- (void)_queue_startHeartRateCollection;
- (void)_queue_startHeartRateServices:(id)arg1;
- (void)_queue_stateDidChange;
- (void)_queue_stopHeartRateCollection;
- (void)_queue_updateForCurrentConfiguration;
- (id)aggregator;
- (void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2;
- (void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2;
- (id)description;
- (id)deviceForDataAggregator:(id)arg1;
- (id)identifierForDataAggregator:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (Class)sensorDatumClassForAggregator:(id)arg1;
- (id)sourceForDataAggregator:(id)arg1;
- (void)startOneShotCollectionForService:(id)arg1;

@end