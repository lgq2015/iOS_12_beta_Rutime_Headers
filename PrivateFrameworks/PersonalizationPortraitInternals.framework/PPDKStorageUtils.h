/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPDKStorageUtils : NSObject

+ (void)_registerForSyncNotifications;
+ (id)entityStream;
+ (void)initialize;
+ (id)namedEntityRecordFromEvent:(id)arg1;
+ (id)readOnlyKnowledgeStore;
+ (id)readWriteKnowledgeStore;
+ (id)registerForNamedEntitiesRemoteAdditionWithBlock:(id /* block */)arg1;
+ (id)registerForNamedEntitiesRemoteDeletionWithBlock:(id /* block */)arg1;
+ (id)registerForTopicsRemoteAdditionWithBlock:(id /* block */)arg1;
+ (id)registerForTopicsRemoteDeletionWithBlock:(id /* block */)arg1;
+ (void)removeObserver:(id)arg1;
+ (id)topicRecordFromEvent:(id)arg1;
+ (id)topicStream;

@end
