/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageFilterNode : BWNode <BWRendererResourceProvider> {
    BWColorLookupCache * _colorLookupCache;
    bool  _depthDataDeliveryEnabled;
    struct { 
        int width; 
        int height; 
    }  _depthDataMapDimensions;
    NSObject<OS_dispatch_queue> * _emitQueue;
    BWStillImageMetalBlurMapRenderer * _metalBlurMapRenderer;
    BWMetalColorCubeRenderer * _metalFilterRenderer;
    BWStillImageMetalSDOFRenderer * _metalSDOFRenderer;
    BWPixelBufferPool * _processingBufferPool;
    BWRenderList * _renderList;
    BWRenderListProcessor * _renderListProcessor;
    <BWRendererResourceProvider> * _rendererProvider;
    NSDictionary * _sensorIDDictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (int)_allocateOutputBufferPoolWithVideoFormat:(id)arg1;
- (id)_debugStringForBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_emitNodeErrorForErrorStatus:(int)arg1 numberOfNodeErrors:(int)arg2 requestedStillImageCaptureSettings:(id)arg3 resolvedStillImageCaptureSettings:(id)arg4;
- (void)_emitSampleBufferAsync:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)_initWithDepthDataDeliveryEnabled:(bool)arg1 personSegmentationEnabled:(bool)arg2 renderResourceProvider:(id)arg3;
- (void)_prepareStillImageFilterRenderersForOriginalFilters:(id)arg1 processedFilters:(id)arg2;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)handleStillImagePrewarmWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 resolvedPhotoManifest:(id)arg3 forInput:(id)arg4;
- (id)initWithDepthDataDeliveryEnabled:(bool)arg1 personSegmentationEnabled:(bool)arg2;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)provideColorLookupCache;
- (id)provideCoreImageFilterRenderer;
- (id)provideMetalFilterRenderer;
- (id)provideStillImageMetalBlurMapRenderer;
- (id)provideStillImageMetalSDOFRenderer;
- (id)provideStreamingCVAFilterRenderer;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)sensorIDDictionary;
- (void)setSensorIDDictionary:(id)arg1;

@end
