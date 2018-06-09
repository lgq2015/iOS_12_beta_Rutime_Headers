/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVSynchronizedLayerInternal : NSObject {
    bool  isVisible;
    AVPlayerItem * playerItem;
    NSObject<OS_dispatch_queue> * serialQueue;
}

@end