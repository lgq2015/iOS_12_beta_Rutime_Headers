/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTSectionFeedFilterTransformation : NSObject <NTFeedTransforming> {
    unsigned long long  _embedsLimit;
    <NTFeedTransforming> * _underlyingTransformation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long embedsLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <NTFeedTransforming> *underlyingTransformation;

- (void).cxx_destruct;
- (unsigned long long)embedsLimit;
- (id)init;
- (id)initWithSubscribedTagIDs:(id)arg1 mutedTagIDs:(id)arg2 purchasedTagIDs:(id)arg3 readArticlesFilterMethod:(int)arg4 recentlyReadHistoryItems:(id)arg5 seenArticlesFilterMethod:(int)arg6 minimumTimeSinceFirstSeenToFilter:(double)arg7 recentlySeenHistoryItems:(id)arg8 supplementalFeedFilterOptions:(long long)arg9 embedsLimit:(unsigned long long)arg10 otherArticleIDs:(id)arg11 otherClusterIDs:(id)arg12 filterDate:(id)arg13;
- (id)transformFeedItems:(id)arg1;
- (id)underlyingTransformation;

@end
