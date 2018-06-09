/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCReadingHistory : FCPrivateDataController {
    NSMutableDictionary * _itemsByArticleID;
    NSMutableDictionary * _itemsByIdentifier;
    FCMTWriterMutexLock * _itemsLock;
}

@property (nonatomic, readonly) NSSet *allConsumedArticleIDs;
@property (nonatomic, readonly) NSSet *allReadArticleIDs;
@property (nonatomic, readonly) NSSet *allSeenArticleIDs;
@property (nonatomic, retain) NSMutableDictionary *itemsByArticleID;
@property (nonatomic, retain) NSMutableDictionary *itemsByIdentifier;
@property (nonatomic, retain) FCMTWriterMutexLock *itemsLock;

+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (void)configureKeyValueStoreForJSONHandling:(id)arg1;
+ (id)desiredKeys;
+ (id)localStoreFilename;
+ (id)localStoreMigrator;
+ (unsigned long long)localStoreVersion;
+ (void)populateLocalStoreClassRegistry:(id)arg1;
+ (bool)requiresBatchedSync;
+ (bool)requiresHighPriorityFirstSync;
+ (bool)requiresPushNotificationSupport;

- (void).cxx_destruct;
- (void)_addHistoryItems:(id)arg1 addToStore:(bool)arg2;
- (bool)_markArticleAsSeenWithArticleID:(id)arg1 articleVersion:(long long)arg2 historyItem:(id)arg3 modifiedHistoryFeaturesOut:(unsigned long long*)arg4;
- (bool)_markArticleAsSeenWithHeadline:(id)arg1 historyItem:(id)arg2 modifiedHistoryFeaturesOut:(unsigned long long*)arg3;
- (void)_modifyHistoryForArticleID:(id)arg1 withBlock:(id /* block */)arg2;
- (id)_readingHistoryItemForArticleID:(id)arg1;
- (void)_removeHistoryItemWithItemID:(id)arg1 articleID:(id)arg2;
- (id)_sortedReadingHistoryItemsWithMaxCount:(unsigned long long)arg1;
- (void)addObserver:(id)arg1;
- (id)allConsumedArticleIDs;
- (id)allReadArticleIDs;
- (id)allReadingHistoryItems;
- (id)allSeenArticleIDs;
- (id)allSortedArticleIDsInReadingHistory;
- (bool)canHelpPruneZoneName:(id)arg1;
- (bool)canHelpRestoreZoneName:(id)arg1;
- (void)clearHistory;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (bool)hasArticleBeenConsumed:(id)arg1;
- (bool)hasArticleBeenMarkedAsOffensive:(id)arg1;
- (bool)hasArticleBeenRead:(id)arg1;
- (bool)hasArticleBeenSeen:(id)arg1;
- (bool)hasArticleBeenVisited:(id)arg1;
- (id)historyItemsForArticleIDs:(id)arg1;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;
- (id)itemsByArticleID;
- (id)itemsByIdentifier;
- (id)itemsLock;
- (id)lastVisitedDateForArticleID:(id)arg1;
- (unsigned long long)likingStatusForArticleID:(id)arg1;
- (void)loadLocalCachesFromStore;
- (void)markArticle:(id)arg1 asArticleConsumed:(bool)arg2;
- (void)markArticle:(id)arg1 asOffensive:(bool)arg2;
- (bool)markArticle:(id)arg1 withLikingStatus:(unsigned long long)arg2;
- (bool)markArticleAsReadWithArticleID:(id)arg1 articleVersion:(long long)arg2 readDate:(id)arg3;
- (void)markArticleAsReadWithHeadline:(id)arg1;
- (void)markArticleAsReadWithHeadline:(id)arg1 fromGroupType:(long long)arg2 swipedToArticle:(bool)arg3 onScreenChecker:(id /* block */)arg4;
- (bool)markArticleAsSeenWithHeadline:(id)arg1;
- (id)mostRecentlyReadArticlesWithMaxCount:(unsigned long long)arg1;
- (id)pruneRecords:(id)arg1 forZoneName:(id)arg2;
- (id)recordsForRestoringZoneName:(id)arg1;
- (void)removeArticleFromHistory:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setItemsByArticleID:(id)arg1;
- (void)setItemsByIdentifier:(id)arg1;
- (void)setItemsLock:(id)arg1;
- (double)softMaxRecordAgeWhenMigratingZoneName:(id)arg1;
- (unsigned long long)softMaxRecordCountWhenMigratingZoneName:(id)arg1;
- (id)syncReadingHistoryItemRecords:(id)arg1 deletedArticleIDs:(id)arg2 didRemoveLastVisitedAt:(out bool*)arg3;
- (bool)toggleArticleHasBeenConsumed:(id)arg1;
- (bool)toggleArticleHasBeenMarkedAsOffensive:(id)arg1;

@end