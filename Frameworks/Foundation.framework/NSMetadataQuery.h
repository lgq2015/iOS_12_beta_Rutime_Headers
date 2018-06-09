/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMetadataQuery : NSObject {
    unsigned long long  _flags;
    double  _interval;
    /* Warning: unhandled array encoding: '[11@]' */ id  _private;
    void * _reserved;
}

@property <NSMetadataQueryDelegate> *delegate;
@property (getter=isGathering, readonly) bool gathering;
@property (readonly, copy) NSArray *groupedResults;
@property (copy) NSArray *groupingAttributes;
@property double notificationBatchingInterval;
@property (retain) NSOperationQueue *operationQueue;
@property (copy) NSPredicate *predicate;
@property (readonly) unsigned long long resultCount;
@property (readonly, copy) NSArray *results;
@property (copy) NSArray *searchItems;
@property (copy) NSArray *searchScopes;
@property (copy) NSArray *sortDescriptors;
@property (getter=isStarted, readonly) bool started;
@property (getter=isStopped, readonly) bool stopped;
@property (copy) NSArray *valueListAttributes;
@property (readonly, copy) NSDictionary *valueLists;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (Class)_stitchingClass;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)didEndPossibleFileOperation:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)willBeginPossibleCreationOfItemAtURL:(id)arg1;
+ (id)willBeginPossibleDeletionOfItemAtURL:(id)arg1;
+ (id)willBeginPossibleMoveOfItemAtURL:(id)arg1 toURL:(id)arg2;

- (id)_allAttributes;
- (bool)_canModifyQueryOrObserversInCurrentContext;
- (void)_disableAutoUpdates;
- (void)_enableAutoUpdates;
- (id)_externalDocumentsBundleIdentifier;
- (void)_inOriginalContextInvokeBlock:(id /* block */)arg1;
- (bool)_isMDQuery;
- (void)_noteNote1:(id)arg1;
- (void)_noteNote2:(id)arg1;
- (void)_noteNote3:(id)arg1;
- (void)_noteNote4:(id)arg1;
- (void)_noteNote5:(id)arg1;
- (id)_pendingChangeNotificationsArrayForKey:(id)arg1 create:(bool)arg2;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (id)_queryString;
- (void)_recreateQuery;
- (void)_resetQueryState;
- (void)_setBatchingParams;
- (void)_setExternalDocumentsBundleIdentifier:(id)arg1;
- (id)_sortingAttributes;
- (void)_update;
- (void)_validateInvocationContext;
- (void)_validatePredicate:(id)arg1 withScopes:(id)arg2;
- (void)_zapResultArrayIfIdenticalTo:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)disableUpdates;
- (void)enableUpdates;
- (void)enumerateResultsUsingBlock:(id /* block */)arg1;
- (void)enumerateResultsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)groupedResults;
- (id)groupingAttributes;
- (unsigned long long)indexOfResult:(id)arg1;
- (id)init;
- (bool)isGathering;
- (bool)isStarted;
- (bool)isStopped;
- (double)notificationBatchingInterval;
- (id)operationQueue;
- (id)predicate;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (id)resultAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultCount;
- (id)results;
- (id)searchItemURLs;
- (id)searchItems;
- (id)searchScopes;
- (void)setDelegate:(id)arg1;
- (void)setGroupingAttributes:(id)arg1;
- (void)setNotificationBatchingInterval:(double)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setSearchItemURLs:(id)arg1;
- (void)setSearchItems:(id)arg1;
- (void)setSearchScopes:(id)arg1;
- (void)setSortDescriptors:(id)arg1;
- (void)setValueListAttributes:(id)arg1;
- (id)sortDescriptors;
- (bool)startQuery;
- (void)stopQuery;
- (id)valueListAttributes;
- (id)valueLists;
- (id)valueOfAttribute:(id)arg1 forResultAtIndex:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

- (void)br_setupForMonitoringChildrenOfFolderAtURL:(id)arg1;
- (void)br_setupForMonitoringChildrenOfFolderAtURL:(id)arg1 searchScopes:(id)arg2;
- (bool)br_setupForMonitoringChildrenOfItemAtURL:(id)arg1;
- (bool)br_setupForMonitoringChildrenOfItemAtURL:(id)arg1 searchScopes:(id)arg2;
- (bool)br_setupForMonitoringItemAtURL:(id)arg1;
- (bool)br_setupForMonitoringItemAtURL:(id)arg1 searchScopes:(id)arg2;

@end