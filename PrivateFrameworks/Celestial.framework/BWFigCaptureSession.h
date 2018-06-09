/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFigCaptureSession : NSObject <BWGraphStatusDelegate, BWImageQueueSinkNodePreviewTapDelegate, BWIrisStagingNodeEmitIrisRequestDelegate, BWNodeFileWriterStatusDelegate, BWNodeRenderDelegate, BWPipelineNotificationDelegate, BWRemoteQueueSinkNodeDelegate, BWSourceNodeErrorDelegate, BWStillImageCaptureStatusDelegate, FigCaptureDisplayLayoutObserver> {
    struct OpaqueFigCaptureSession { } * _captureSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)fileWriter:(id)arg1 pausedRecordingForSettingsID:(unsigned long long)arg2;
- (void)fileWriter:(id)arg1 resumedRecordingForSettingsID:(unsigned long long)arg2;
- (void)fileWriter:(id)arg1 startedRecordingForSettingsID:(unsigned long long)arg2;
- (void)fileWriter:(id)arg1 stoppedRecordingForSettings:(id)arg2 withError:(int)arg3 thumbnailSurface:(struct __IOSurface { }*)arg4 irisMovieInfo:(id)arg5 debugMetadataSidecarFileURL:(id)arg6 recordingSucceeded:(bool)arg7;
- (void)graph:(id)arg1 didFinishStartingWithError:(int)arg2;
- (void)graphDidPrepareNodes:(id)arg1;
- (void)imageQueueSinkNode:(id)arg1 didAttemptToEnqueuePreviewSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 withSuccess:(bool)arg3;
- (void)imageQueueSinkNodeDidDisplayFirstFrame:(id)arg1;
- (void)imageQueueSinkNodeDidDisplayFirstFrame:(id)arg1 atHostTime:(long long)arg2;
- (id)initWithFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)layoutMonitor:(id)arg1 didUpdateLayoutWithForegroundApps:(id)arg2 layoutState:(int)arg3;
- (void)node:(id)arg1 format:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)node:(id)arg1 format:(id)arg2 didBecomeLiveForOutput:(id)arg3;
- (void)node:(id)arg1 willRenderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 forInput:(id)arg3;
- (void)postNotification:(id)arg1 notificationPayload:(id)arg2;
- (void)remoteQueueSinkNode:(id)arg1 localQueueBecameReady:(struct localQueueOpaque { }*)arg2;
- (void)remoteQueueSinkNode:(id)arg1 queueBecameReady:(struct remoteQueueSenderOpaque { }*)arg2;
- (void)sourceNode:(id)arg1 didEncounterError:(int)arg2;
- (void)stagingNode:(id)arg1 willEmitIrisRequest:(id)arg2;
- (void)stillImageCoordinator:(id)arg1 didCapturePhotoForSettings:(id)arg2;
- (void)stillImageCoordinator:(id)arg1 didResolveStillImagePTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 forSettings:(id)arg3 resolvedCaptureType:(int)arg4 isPreBracketedEV0:(bool)arg5;
- (void)stillImageCoordinator:(id)arg1 willBeginCaptureForSettings:(id)arg2 resolvedCaptureSettings:(id)arg3 photoManifest:(id)arg4;
- (void)stillImageCoordinator:(id)arg1 willCapturePhotoForSettings:(id)arg2 sisActive:(bool)arg3 error:(int)arg4;
- (void)stillImageCoordinator:(id)arg1 willPrepareStillImageCaptureWithSettings:(id)arg2 clientInitiated:(bool)arg3;

@end