/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPNamedEntityReadWriteClient : NSObject {
    PPXPCClientHelper * _clientHelper;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_doSyncCallWithError:(id*)arg1 syncCall:(id /* block */)arg2;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (bool)clearWithError:(id*)arg1;
- (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 error:(id*)arg3;
- (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 error:(id*)arg2;
- (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThan:(id)arg3 error:(id*)arg4;
- (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 error:(id*)arg3;
- (bool)donateLocationNamedEntities:(id)arg1 bundleId:(id)arg2 error:(id*)arg3;
- (bool)donateMapItem:(id)arg1 forPlaceName:(id)arg2 error:(id*)arg3;
- (bool)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(bool)arg4 decayRate:(double)arg5 error:(id*)arg6;
- (bool)flushDonationsWithError:(id*)arg1;
- (id)init;
- (bool)removeMapItemForPlaceName:(id)arg1 error:(id*)arg2;
- (bool)removeMapItemsBeforeDate:(id)arg1 error:(id*)arg2;

@end