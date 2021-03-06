/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISFrameCuratorRequest : NSObject {
    bool  _cancelled;
    id /* block */  _completionHandler;
    AVAsset * _videoAsset;
    int  _videoTrackID;
}

@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (nonatomic, readonly, copy) AVAsset *videoAsset;
@property (nonatomic, readonly) int videoTrackID;

- (void).cxx_destruct;
- (void)_run;
- (void)cancel;
- (id /* block */)completionHandler;
- (id)initWithVideoAsset:(id)arg1 videoTrackID:(int)arg2 completion:(id /* block */)arg3;
- (void)startOnQueue:(id)arg1;
- (id)videoAsset;
- (int)videoTrackID;

@end
