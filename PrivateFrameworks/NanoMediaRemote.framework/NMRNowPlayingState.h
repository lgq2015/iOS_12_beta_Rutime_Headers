/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMRNowPlayingState : NSObject <NSCopying> {
    float  _preferredPlaybackRate;
}

@property (getter=isAddToLibraryActive, nonatomic, readonly) bool addToLibraryActive;
@property (getter=isAddToLibraryCommandEnabled, nonatomic, readonly) bool addToLibraryCommandEnabled;
@property (getter=isAddToLibraryCommandSupported, nonatomic, readonly) bool addToLibraryCommandSupported;
@property (getter=isAdvertisement, nonatomic, readonly) bool advertisement;
@property (nonatomic, readonly) NSString *album;
@property (getter=isAlwaysLive, nonatomic, readonly) bool alwaysLive;
@property (nonatomic, readonly) NSString *applicationBundleIdentifier;
@property (nonatomic, readonly) NSString *applicationDisplayName;
@property (nonatomic, readonly) NSData *applicationIconImageData;
@property (nonatomic, readonly) NSString *artist;
@property (nonatomic, readonly) NSData *artworkImageData;
@property (getter=isBanCommandEnabled, nonatomic, readonly) bool banCommandEnabled;
@property (nonatomic, readonly) long long banCommandPresentationStyle;
@property (getter=isBanCommandSupported, nonatomic, readonly) bool banCommandSupported;
@property (getter=isBannedActive, nonatomic, readonly) bool bannedActive;
@property (getter=isBookmarkCommandEnabled, nonatomic, readonly) bool bookmarkCommandEnabled;
@property (getter=isBookmarkCommandSupported, nonatomic, readonly) bool bookmarkCommandSupported;
@property (getter=isBookmarkedActive, nonatomic, readonly) bool bookmarkedActive;
@property (nonatomic, readonly) NSString *displayTitle;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double elapsedTime;
@property (nonatomic, readonly) double elapsedTimeAtLastUpdate;
@property (getter=isExplicitTrack, nonatomic, readonly) bool explicitTrack;
@property (nonatomic, readonly) double fastForwardTimeInterval;
@property (getter=isFirstPartyApp, nonatomic, readonly) bool firstPartyApp;
@property (nonatomic, readonly) bool hasNowPlayingInfo;
@property (nonatomic, readonly) bool hasSupportedFeedbackCommands;
@property (nonatomic, readonly) MPIdentifierSet *identifiers;
@property (nonatomic, readonly) bool isPlayingRadio;
@property (nonatomic, readonly) NSNumber *itemAlbumPersistentID;
@property (nonatomic, readonly) NSNumber *itemCompanionPersistentID;
@property (nonatomic, readonly) NSNumber *itemPersistentID;
@property (getter=isLikeCommandEnabled, nonatomic, readonly) bool likeCommandEnabled;
@property (nonatomic, readonly) long long likeCommandPresentationStyle;
@property (getter=isLikeCommandSupported, nonatomic, readonly) bool likeCommandSupported;
@property (getter=isLikedActive, nonatomic, readonly) bool likedActive;
@property (nonatomic, readonly) NSString *localizedBanTitle;
@property (nonatomic, readonly) NSString *localizedBookmarkTitle;
@property (nonatomic, readonly) NSString *localizedLikeTitle;
@property (nonatomic, readonly) NSNumber *nextTrackCommandEnabled;
@property (nonatomic, readonly) float playbackRate;
@property (getter=isPlaybackRateCommandSupported, nonatomic, readonly) bool playbackRateCommandSupported;
@property (nonatomic, readonly) unsigned int playbackState;
@property (getter=isPlaying, nonatomic, readonly) bool playing;
@property (nonatomic, readonly) float preferredPlaybackRate;
@property (nonatomic, readonly) NSNumber *previousTrackCommandEnabled;
@property (nonatomic, readonly) NSString *radioStationHash;
@property (nonatomic, readonly) NSNumber *radioStationIdentifier;
@property (nonatomic, readonly) NSString *radioStationName;
@property (nonatomic, readonly) int repeatMode;
@property (getter=isRepeatModeCommandSupported, nonatomic, readonly) bool repeatModeCommandSupported;
@property (nonatomic, readonly) double rewindTimeInterval;
@property (nonatomic, readonly) int shuffleMode;
@property (getter=isShuffleModeCommandSupported, nonatomic, readonly) bool shuffleModeCommandSupported;
@property (getter=isSkipBackwardCommandEnabled, nonatomic, readonly) bool skipBackwardCommandEnabled;
@property (getter=isSkipForwardCommandEnabled, nonatomic, readonly) bool skipForwardCommandEnabled;
@property (nonatomic, readonly) NSNumber *storeAdamID;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) NSString *title;

+ (id)emptyNowPlayingState;

- (id)album;
- (id)applicationBundleIdentifier;
- (id)applicationDisplayName;
- (id)applicationIconImageData;
- (id)artist;
- (id)artworkImageData;
- (long long)banCommandPresentationStyle;
- (unsigned long long)compareWithNowPlayingState:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayTitle;
- (double)duration;
- (double)elapsedTime;
- (double)elapsedTimeAtLastUpdate;
- (double)fastForwardTimeInterval;
- (bool)hasNowPlayingInfo;
- (bool)hasSupportedFeedbackCommands;
- (id)identifiers;
- (bool)isAddToLibraryActive;
- (bool)isAddToLibraryCommandEnabled;
- (bool)isAddToLibraryCommandSupported;
- (bool)isAdvertisement;
- (bool)isAlwaysLive;
- (bool)isBanCommandEnabled;
- (bool)isBanCommandSupported;
- (bool)isBannedActive;
- (bool)isBookmarkCommandEnabled;
- (bool)isBookmarkCommandSupported;
- (bool)isBookmarkedActive;
- (bool)isExplicitTrack;
- (bool)isFirstPartyApp;
- (bool)isLikeCommandEnabled;
- (bool)isLikeCommandSupported;
- (bool)isLikedActive;
- (bool)isPlaybackRateCommandSupported;
- (bool)isPlaying;
- (bool)isPlayingRadio;
- (bool)isRepeatModeCommandSupported;
- (bool)isShuffleModeCommandSupported;
- (bool)isSkipBackwardCommandEnabled;
- (bool)isSkipForwardCommandEnabled;
- (id)itemAlbumPersistentID;
- (id)itemCompanionPersistentID;
- (id)itemPersistentID;
- (long long)likeCommandPresentationStyle;
- (id)localizedBanTitle;
- (id)localizedBookmarkTitle;
- (id)localizedLikeTitle;
- (id)nextTrackCommandEnabled;
- (float)playbackRate;
- (unsigned int)playbackState;
- (float)preferredPlaybackRate;
- (id)previousTrackCommandEnabled;
- (id)radioStationHash;
- (id)radioStationIdentifier;
- (id)radioStationName;
- (int)repeatMode;
- (double)rewindTimeInterval;
- (int)shuffleMode;
- (id)storeAdamID;
- (id)timestamp;
- (id)title;

@end