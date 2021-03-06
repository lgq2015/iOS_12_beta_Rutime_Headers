/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureVideoDataSinkPipeline : FigCapturePipeline {
    BWFigVideoCaptureDevice * _captureDevice;
    BWNodeOutput * _faceTrackingVideoCaptureOutput;
    BWNodeOutput * _offlineVISMotionDataCaptureOutput;
    BWRemoteQueueSinkNode * _remoteQueueSinkNode;
    NSString * _sinkID;
    BWPixelTransferNode * _videoDataConverterRotatorNode;
    BWNodeOutput * _videoDataPipelineUpstreamOutput;
    BWVISNode * _visNode;
}

@property (nonatomic) bool discardsSampleData;
@property (nonatomic, readonly) BWNodeOutput *faceTrackingVideoCaptureOutput;
@property (nonatomic, readonly) BWNodeOutput *offlineVISMotionDataCaptureOutput;
@property (nonatomic, readonly) BWRemoteQueueSinkNode *remoteQueueSinkNode;
@property (nonatomic, readonly) NSString *sinkID;

+ (void)initialize;

- (int)_buildVideoDataSinkPipelineWithConfiguration:(id)arg1 sourceVideoOutput:(id)arg2 captureDevice:(id)arg3 graph:(id)arg4 delegate:(id)arg5;
- (void)dealloc;
- (bool)discardsSampleData;
- (id)faceTrackingVideoCaptureOutput;
- (id)initWithConfiguration:(id)arg1 sourceVideoOutput:(id)arg2 captureDevice:(id)arg3 graph:(id)arg4 delegate:(id)arg5;
- (id)offlineVISMotionDataCaptureOutput;
- (int)reconfigure:(id)arg1;
- (id)remoteQueueSinkNode;
- (void)setDiscardsSampleData:(bool)arg1;
- (id)sinkID;

@end
