/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMusicSubscriptionLeaseController : NSObject {
    NSHashTable * _players;
}

+ (id)sharedController;

- (void).cxx_destruct;
- (id)_init;
- (void)_playerPlaybackStateDidChangeNotification:(id)arg1;
- (void)_playerWillReloadWithPlaybackContextNotification:(id)arg1;
- (void)addPlayer:(id)arg1;
- (void)removePlayer:(id)arg1;

@end
