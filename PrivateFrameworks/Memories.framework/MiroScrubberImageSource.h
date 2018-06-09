/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroScrubberImageSource : NSObject {
    NSMutableDictionary * _cachedImages;
    bool  _cancelled;
    NSLock * _cancelledLock;
    AVAssetImageGenerator * _imageGenerator;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumThumbnailSize;
    NSMutableArray * _pendingTimestampRequests;
    NSMutableDictionary * _requestCompletionHandlers;
}

@property (nonatomic) struct CGSize { double x1; double x2; } maximumThumbnailSize;

- (void).cxx_destruct;
- (void)cancelPendingThubmnailRequests;
- (void)dealloc;
- (void)enqueueThumbnailRequestForTimestamp:(id)arg1 withResultHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithAVAsset:(id)arg1;
- (struct CGSize { double x1; double x2; })maximumThumbnailSize;
- (void)processPendingThumbnailRequests;
- (void)setMaximumThumbnailSize:(struct CGSize { double x1; double x2; })arg1;

@end