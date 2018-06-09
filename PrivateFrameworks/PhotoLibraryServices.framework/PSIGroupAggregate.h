/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIGroupAggregate : NSObject {
    NSMutableArray * _aggregateItemPool;
    NSMutableArray * _aggregatedGroupIds;
    NSMutableArray * _groupAggregateItems;
    NSObject<OS_dispatch_queue> * _groupResultsQueue;
    NSArray * _searchTokens;
    NSString * _transientToken;
}

@property (nonatomic, readonly) NSArray *searchTokens;
@property (nonatomic, copy) NSString *transientToken;

+ (bool)_canDedupeGroupResult:(id)arg1 withGroupResult:(id)arg2;
+ (bool)_prefer:(id)arg1 over:(id)arg2;
+ (void)postProcessGroupResults:(id)arg1;

- (struct __CFArray { }*)_newSortedGroupIds;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfString:(id)arg1 inGroup:(id)arg2 extendingSearchRange:(bool)arg3 matchingFullToken:(bool)arg4 excludingRanges:(id)arg5;
- (bool)_verifySortedGroupIdsUnique;
- (id)aggregateItemWithSearchToken:(id)arg1 rangeMatchingToken:(id)arg2 group:(id)arg3;
- (void)dealloc;
- (id)initWithSearchTokens:(id)arg1 groupResultsQueue:(id)arg2;
- (id)newGroupResult;
- (id)newGroupResultWithDateToken:(id)arg1;
- (void)pop;
- (bool)pushGroup:(id)arg1;
- (id)searchTokens;
- (void)setTransientToken:(id)arg1;
- (id)transientToken;

@end