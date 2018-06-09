/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISAVAssetReaderImageDataGenerator : ISImageDataGenerator {
    AVAssetReader * __assetReader;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  __preferredTransform;
    AVAssetTrack * __videoTrack;
}

@property (setter=_setAssetReader:, nonatomic, retain) AVAssetReader *_assetReader;
@property (setter=_setPreferredTransform:, nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } _preferredTransform;
@property (setter=_setVideoTrack:, nonatomic, retain) AVAssetTrack *_videoTrack;

- (void).cxx_destruct;
- (id)_assetReader;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_preferredTransform;
- (void)_setAssetReader:(id)arg1;
- (void)_setPreferredTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)_setVideoTrack:(id)arg1;
- (id)_videoTrack;
- (id)error;
- (void)generateImageDataForTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 minimumFrameInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 pixelBufferSize:(struct CGSize { double x1; double x2; })arg3 completionHandler:(id /* block */)arg4;
- (id)initWithAsset:(id)arg1 videoComposition:(id)arg2 error:(id*)arg3;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (long long)status;

@end