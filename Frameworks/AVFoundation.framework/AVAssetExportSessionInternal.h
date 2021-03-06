/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetExportSessionInternal : NSObject {
    AVAsset * asset;
    AVAudioMix * audioMix;
    AVCustomVideoCompositorSession * customVideoCompositorSession;
    struct OpaqueFigAssetExportSession { } * figExportSession;
    void * figVideoCompositor;
    id /* block */  handler;
    NSArray * metadata;
    AVMetadataItemFilter * metadataItemFilter;
    AVVideoComposition * videoComposition;
}

@end
