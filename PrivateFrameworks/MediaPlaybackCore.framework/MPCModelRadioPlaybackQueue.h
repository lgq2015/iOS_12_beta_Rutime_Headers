/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCModelRadioPlaybackQueue : NSObject {
    NSString * _originalStationName;
    _MPCModelRadioPlaybackQueueAVItemSection * _placeholderItemSection;
    ICRadioPlaybackHistoryStore * _playbackHistoryStore;
    _MPCModelRadioPlaybackQueueExternalFeederSection * _prefixItemSection;
    MPModelRadioStation * _radioStation;
    NSMutableArray * _sections;
    _MPCModelRadioPlaybackQueueStationTracksSection * _stationTracksSection;
    ICStoreRequestContext * _storeRequestContext;
}

@property (nonatomic, readonly) long long numberOfItems;
@property (nonatomic, readonly, copy) ICRadioPlaybackHistory *playbackHistory;
@property (nonatomic, retain) MPModelRadioStation *radioStation;
@property (nonatomic, readonly) MPSectionedCollection *trackModels;
@property (nonatomic, readonly) MPSectionedCollection *tracks;

+ (bool)identifiersIdentifyRadioStation:(id)arg1;

- (void).cxx_destruct;
- (id)AVItemAtIndex:(long long)arg1;
- (id)AVItemQueueIdentifierAtIndex:(long long)arg1;
- (long long)_globalIndexForIndexPath:(id)arg1;
- (id)_indexPathForGlobalIndex:(long long)arg1;
- (long long)indexOfItemWithAVItemQueueIdentifier:(id)arg1;
- (id)initWithPlaybackContext:(id)arg1;
- (bool)isExplicitItemAtIndex:(long long)arg1;
- (bool)isPlaceholderAVItem:(id)arg1;
- (bool)isPlaceholderItemForQueueIdentifier:(id)arg1;
- (bool)needsMoreTracksForPlaybackIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)playbackHistory;
- (id)radioStation;
- (long long)removeExplicitItems;
- (void)removeTrailingLoadingPlaceholder;
- (void)savePlaybackHistoryWithUpdates:(id /* block */)arg1;
- (void)savePlaybackHistoryWithUpdates:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)setRadioStation:(id)arg1;
- (id)trackForItemAtIndex:(long long)arg1;
- (id)trackModels;
- (id)tracks;
- (id)tracksByApplyingTracksResponse:(id)arg1 currentIndex:(long long)arg2;
- (void)updateWithPersonalizedResponse:(id)arg1;

@end