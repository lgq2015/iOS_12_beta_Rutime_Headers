/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLAbstractRanker : NSObject {
    NFLFeedSettings * _feedSettings;
    NFLAbstractRanker * _nextRanker;
    NFLAbstractCellPropertyProvider * _propertyProvider;
}

@property (nonatomic) NFLFeedSettings *feedSettings;
@property (nonatomic, retain) NFLAbstractRanker *nextRanker;
@property (nonatomic, retain) NFLAbstractCellPropertyProvider *propertyProvider;
@property (nonatomic, readonly) NSString *rankerName;
@property (nonatomic, readonly) long long rankerWeight;

- (void).cxx_destruct;
- (double)_applyRanksForCardWithLayoutData:(id)arg1 tileInfo:(id)arg2 successfulRankCount:(long long*)arg3 veto:(bool*)arg4 rankerDictionary:(id)arg5;
- (id)feedSettings;
- (id)initWithFeedSettings:(id)arg1;
- (id)nextRanker;
- (id)propertyProvider;
- (double)rankLayoutData:(id)arg1 withTileInfo:(id)arg2 veto:(bool*)arg3;
- (id)rankedLayoutForLayoutData:(id)arg1 withTileInfo:(id)arg2;
- (id)rankerName;
- (long long)rankerWeight;
- (void)setFeedSettings:(id)arg1;
- (void)setNextRanker:(id)arg1;
- (void)setPropertyProvider:(id)arg1;

@end