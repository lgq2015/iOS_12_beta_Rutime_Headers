/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVVideoPerformanceMetrics : NSObject {
    AVVideoPerformanceMetricsInternal * _performanceMetricsInternal;
}

@property (nonatomic, readonly) unsigned long long numberOfCorruptedVideoFrames;
@property (nonatomic, readonly) unsigned long long numberOfDroppedVideoFrames;
@property (nonatomic, readonly) double totalFrameDelay;
@property (nonatomic, readonly) unsigned long long totalNumberOfVideoFrames;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)numberOfCorruptedVideoFrames;
- (unsigned long long)numberOfDroppedVideoFrames;
- (double)totalFrameDelay;
- (unsigned long long)totalNumberOfVideoFrames;

@end
