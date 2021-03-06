/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NULoggingVideoPlayerEventTracker : NSObject <NUVideoPlayerEventTracker>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)init;
- (void)muteStateChanged:(bool)arg1 withVideoItem:(id)arg2 metadata:(id)arg3;
- (void)playbackFailedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackFinishedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackInitiatedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackPausedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackResumedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)userEngagedWithAdvanceButtonWithVideoItem:(id)arg1;
- (void)userEngagedWithCallToActionBarWithVideoItem:(id)arg1;
- (void)userEngagedWithDiscoverMoreButtonWithVideoItem:(id)arg1;
- (void)userEngagedWithNowPlayingButtonWithVideoItem:(id)arg1;
- (void)userEngagedWithReplayButtonWithVideoItem:(id)arg1;
- (void)videoPlaybackPassedFirstQuartileWithVideoItem:(id)arg1;
- (void)videoPlaybackPassedSecondQuartileWithVideoItem:(id)arg1;
- (void)videoPlaybackPassedThirdQuartileWithVideoItem:(id)arg1;

@end
