/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetLoopUIViewTile : PXAssetUIImageViewTile {
    ISWrappedAVAudioSession * __audioSession;
    AVPlayerItem * __loopingPlayerItem;
    ISWrappedAVPlayer * _loopingVideoPlayer;
    long long  _loopingVideoRequestID;
    PXVideoPlayerView * _loopingVideoView;
    unsigned long long  _requestCount;
}

@property (setter=_setAudioSession:, nonatomic, retain) ISWrappedAVAudioSession *_audioSession;
@property (setter=_setLoopingPlayerItem:, nonatomic, retain) AVPlayerItem *_loopingPlayerItem;

- (void).cxx_destruct;
- (id)_audioSession;
- (void)_handlePlayerItemResult:(id)arg1 info:(id)arg2 expectedRequestCount:(unsigned long long)arg3;
- (id)_loopingPlayerItem;
- (void)_requestLoopingVideoIfNeeded;
- (void)_setAudioSession:(id)arg1;
- (void)_setLoopingPlayerItem:(id)arg1;
- (void)_updateLoopingVideoView;
- (void)becomeReusable;
- (void)imageDidChange;
- (void)prepareForReuse;
- (void)setImageRequester:(id)arg1;
- (id)view;

@end
