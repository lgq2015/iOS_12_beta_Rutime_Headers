/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFigCaptureSessionExternal : NSObject <BWGraphStatusDelegate> {
    struct OpaqueFigCaptureSession { } * _captureSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)graph:(id)arg1 didFinishStartingWithError:(int)arg2;
- (void)graphDidPrepareNodes:(id)arg1;
- (id)initWithFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;

@end