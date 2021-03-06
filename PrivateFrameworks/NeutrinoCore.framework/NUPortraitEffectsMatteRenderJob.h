/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUPortraitEffectsMatteRenderJob : NURenderJob {
    AVPortraitEffectsMatte * _portraitEffectsMatte;
    NUCVPixelBuffer * _portraitMatteBuffer;
    CIRenderTask * _renderTask;
}

@property (retain) AVPortraitEffectsMatte *portraitEffectsMatte;

- (void).cxx_destruct;
- (void)cleanUp;
- (bool)complete:(out id*)arg1;
- (id)newRenderPipelineStateForEvaluationMode:(long long)arg1;
- (id)portraitEffectsMatte;
- (bool)prepare:(out id*)arg1;
- (bool)render:(out id*)arg1;
- (id)result;
- (id)scalePolicy;
- (void)setPortraitEffectsMatte:(id)arg1;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputImage;
- (bool)wantsPrepareNodeCached;
- (bool)wantsRenderNodeCached;
- (bool)wantsRenderScaleClampedToNativeScale;

@end
