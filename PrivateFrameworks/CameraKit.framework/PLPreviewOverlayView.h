/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface PLPreviewOverlayView : UIView {
    CMKCameraView * cameraView;
}

@property (nonatomic) CMKCameraView *cameraView;

- (id)cameraView;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setCameraView:(id)arg1;

@end