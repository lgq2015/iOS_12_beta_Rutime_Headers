/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMVideoCaptureResult : NSObject {
    NSDate * _captureDate;
    CAMStillImageCaptureCoordinationInfo * _coordinationInfo;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
    NSError * _error;
    NSURL * _filteredLocalDestinationURL;
    NSURL * _localDestinationURL;
    NSArray * _metadata;
    long long  _reason;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillDisplayTime;
    struct __IOSurface { } * _videoPreviewSurface;
    double  _videoZoomFactor;
}

@property (nonatomic, readonly) NSDate *captureDate;
@property (nonatomic, readonly) CAMStillImageCaptureCoordinationInfo *coordinationInfo;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSURL *filteredLocalDestinationURL;
@property (nonatomic, readonly) NSURL *localDestinationURL;
@property (nonatomic, readonly, copy) NSArray *metadata;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } stillDisplayTime;
@property (nonatomic, readonly) struct __IOSurface { }*videoPreviewSurface;
@property (nonatomic, readonly) double videoZoomFactor;

- (void).cxx_destruct;
- (id)captureDate;
- (id)coordinationInfo;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)error;
- (id)filteredLocalDestinationURL;
- (id)initWithURL:(id)arg1 filteredLocalDestinationURL:(id)arg2 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 stillDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 metadata:(id)arg5 videoZoomFactor:(double)arg6 reason:(long long)arg7 videoPreviewSurface:(void*)arg8 coordinationInfo:(id)arg9 error:(id)arg10;
- (id)localDestinationURL;
- (id)metadata;
- (long long)reason;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillDisplayTime;
- (struct __IOSurface { }*)videoPreviewSurface;
- (double)videoZoomFactor;

@end