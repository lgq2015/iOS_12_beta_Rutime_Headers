/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTTodayContext : NSObject <FCNetworkReachabilityObserving, NTTodayContext> {
    <FCContentContext> * _contentContext;
    id /* block */  _newResultsHandler;
    NSObject<OS_dispatch_queue> * _queue;
    <NTReadablePrivateDataStorage> * _readablePrivateDataStorage;
    id /* block */  _sessionProvider;
    NTSourceAvailabilityManager * _sourceAvailabilityManager;
    <NTTodayResultsSource> * _todayResultsSource;
    <NTWritablePrivateDataStorage> * _writablePrivateDataStorage;
}

@property (nonatomic, retain) <FCContentContext> *contentContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ newResultsHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) <NTReadablePrivateDataStorage> *readablePrivateDataStorage;
@property (nonatomic, copy) id /* block */ sessionProvider;
@property (nonatomic, retain) NTSourceAvailabilityManager *sourceAvailabilityManager;
@property (readonly) Class superclass;
@property (nonatomic, retain) <NTTodayResultsSource> *todayResultsSource;
@property (nonatomic, retain) <NTWritablePrivateDataStorage> *writablePrivateDataStorage;

- (void).cxx_destruct;
- (void)_setupTodayResultsSource;
- (id)contentContext;
- (void)fetchLatestResultsWithOperationInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithContentContext:(id)arg1 processVariant:(unsigned long long)arg2 queue:(id)arg3 sessionProvider:(id /* block */)arg4;
- (id)initWithContentHostDirectory:(id)arg1 processVariant:(unsigned long long)arg2 queue:(id)arg3 sessionProvider:(id /* block */)arg4;
- (void)networkReachabilityDidChange:(id)arg1;
- (id /* block */)newResultsHandler;
- (id)queue;
- (id)readablePrivateDataStorage;
- (id /* block */)sessionProvider;
- (void)setContentContext:(id)arg1;
- (void)setNewResultsHandler:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setReadablePrivateDataStorage:(id)arg1;
- (void)setSessionProvider:(id /* block */)arg1;
- (void)setSourceAvailabilityManager:(id)arg1;
- (void)setTodayResultsSource:(id)arg1;
- (void)setWritablePrivateDataStorage:(id)arg1;
- (id)sourceAvailabilityManager;
- (id)todayResultsSource;
- (void)userDidReadHeadlineWithAnalyticsElement:(id)arg1 atDate:(id)arg2;
- (void)userDidSeeHeadlinesWithAnalyticsElements:(id)arg1 atDate:(id)arg2;
- (id)writablePrivateDataStorage;

@end
