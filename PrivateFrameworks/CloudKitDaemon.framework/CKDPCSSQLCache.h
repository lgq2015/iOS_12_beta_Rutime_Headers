/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCSSQLCache : CKDPQLCache {
    unsigned long long  _cacheHitCount;
    unsigned long long  _cacheRequestCount;
    NSObject<OS_dispatch_queue> * _recordQueue;
}

@property unsigned long long cacheHitCount;
@property unsigned long long cacheRequestCount;
@property (nonatomic, readonly) double earliestValidDate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *recordQueue;

+ (void)_evictPCSSQLCachesForAppContainerTuples:(id)arg1;
+ (void)evictPCSSQLCachesForKnownClientContexts;
+ (id)globalPCSSQLCacheEvictionQueue;
+ (id)pathForContext:(id)arg1;
+ (void)registerPCSSQLCacheEvictionActivity;

- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (id)_initWithClientContext:(id)arg1;
- (id)_lockedFetchPCSDataForID:(id)arg1 databaseScope:(long long)arg2 itemType:(unsigned long long)arg3 ofClass:(Class)arg4;
- (void)_lockedSetPCSData:(id)arg1 databaseScope:(long long)arg2 itemType:(unsigned long long)arg3 forID:(id)arg4;
- (void)_setPCSData:(id)arg1 forItemWithID:(id)arg2 databaseScope:(long long)arg3 itemType:(unsigned long long)arg4 withCompletionHandler:(id /* block */)arg5;
- (unsigned long long)cacheHitCount;
- (unsigned long long)cacheRequestCount;
- (void)clearCache;
- (void)clearInvalidatedCacheEntriesWithCompletionHandler:(id /* block */)arg1;
- (id)createInitialTablesSQL;
- (void)dealloc;
- (double)earliestValidDate;
- (void)fetchPCSDataForRecordWithID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)fetchPCSDataForShareWithID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)fetchPCSDataForZoneWithID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)infoToUpgradeFromVersion:(unsigned long long)arg1;
- (id)path;
- (id)recordQueue;
- (void)removePCSDataForItemsInShareWithID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)removePCSDataForItemsInZoneWithID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setCacheHitCount:(unsigned long long)arg1;
- (void)setCacheRequestCount:(unsigned long long)arg1;
- (void)setRecordPCSData:(id)arg1 forRecordWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)setRecordQueue:(id)arg1;
- (void)setSharePCSData:(id)arg1 forShareWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)setZonePCSData:(id)arg1 forZoneWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(id /* block */)arg4;

@end