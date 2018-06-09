/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface _GUWhiteColorCalculator : NSObject {
    NUBufferRenderClient * _bufferRenderClient;
    NUComposition * _composition;
    NUImageDataClient * _imageDataClient;
    NSObject<OS_dispatch_queue> * _q;
    bool  _useSushi;
}

- (void).cxx_destruct;
- (id)_brightnessMultiplierFromImageProperties:(id)arg1;
- (void)_computeGreenPercentage:(id /* block */)arg1;
- (struct { struct { double x_1_1_1[4]; } x1; struct { double x_2_1_1[4]; } x2; double x3; })_computeWhitePointColorWithGrayEdgesBuffer:(id)arg1 grayWorldBuffer:(id)arg2 greenChannelPercentage:(double)arg3 RAWCameraSpaceProperties:(id)arg4;
- (void)_configureRequest:(id)arg1;
- (void)_submitGERenderRequest:(id /* block */)arg1;
- (void)_submitGWRenderRequest:(id /* block */)arg1;
- (struct { struct { double x_1_1_1[4]; } x1; struct { double x_2_1_1[4]; } x2; double x3; })_whitePointColorFromGrayEdgesImage:(id)arg1 grayWorldImage:(id)arg2 greenChannelPercentage:(double)arg3 RAWCameraSpaceProperties:(id)arg4;
- (void)calculateColorWithProperties:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithComposition:(id)arg1 useSushi:(bool)arg2;
- (void)readBufferFromImage:(id)arg1 withRGBAfBufferBlock:(id /* block */)arg2;

@end