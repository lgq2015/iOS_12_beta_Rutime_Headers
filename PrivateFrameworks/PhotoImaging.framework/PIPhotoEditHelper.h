/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PIPhotoEditHelper : NSObject

+ (id)_imageRenderRequestWithComposition:(id)arg1 wideGamut:(bool)arg2;
+ (void)addAssetIdentifier:(id)arg1 toMetadataArray:(id)arg2;
+ (void)addAssetIdentifier:(id)arg1 toMetadataDictionary:(id)arg2;
+ (id)depthDataRenderRequestWithComposition:(id)arg1;
+ (id)effectNameForFilterName:(id)arg1;
+ (id)filterNameForEffectName:(id)arg1;
+ (id)geometryRequestWithComposition:(id)arg1;
+ (id)imageExportRequestWithComposition:(id)arg1 format:(id)arg2 wideGamut:(bool)arg3;
+ (id)imageRenderRequestWithComposition:(id)arg1 fillInSize:(struct CGSize { double x1; double x2; })arg2 wideGamut:(bool)arg3;
+ (id)imageRenderRequestWithComposition:(id)arg1 fitInSize:(struct CGSize { double x1; double x2; })arg2 wideGamut:(bool)arg3;
+ (id)imageSourceWithCIImage:(id)arg1 orientation:(long long)arg2;
+ (id)imageSourceWithURL:(id)arg1 type:(id)arg2;
+ (id)imageSourceWithURL:(id)arg1 type:(id)arg2 proxyImage:(id)arg3 orientation:(long long)arg4;
+ (void)initialize;
+ (bool)is3DEffect:(id)arg1;
+ (bool)isPortraitEffect:(id)arg1;
+ (bool)isSupportedAutoLoopRecipe:(id)arg1;
+ (id)livePhotoSourceWithPhotoSource:(id)arg1 videoSource:(id)arg2;
+ (id)newAdjustmentWithName:(id)arg1;
+ (struct CGImage { }*)newCGImageFromBufferImage:(id)arg1;
+ (id)newComposition;
+ (id)newImageExportClientWithName:(id)arg1;
+ (id)newImagePropertiesClientWithName:(id)arg1;
+ (id)newImageRenderClientWithName:(id)arg1;
+ (id)newJPEGExportFormatWithCompressionQuality:(double)arg1;
+ (id)newVideoExportClientWithName:(id)arg1;
+ (id)newVideoPropertiesClientWithName:(id)arg1;
+ (id)pipelineFiltersForCropping;
+ (id)pipelineFiltersForOriginalGeometry;
+ (id)pipelineFiltersForRAWShowingOriginalWithGeometry;
+ (id)pipelineFiltersForShowingOriginalWithGeometry;
+ (id)portraitEffectsMatteRenderRequestWithComposition:(id)arg1;
+ (id)priorityWithLevel:(long long)arg1;
+ (void)removeAssetIdentifierFromMetadataArray:(id)arg1;
+ (id)videoExportRequestWithComposition:(id)arg1 destinationURL:(id)arg2 wideGamut:(bool)arg3;
+ (id)videoRenderRequestWithComposition:(id)arg1 fitInSize:(struct CGSize { double x1; double x2; })arg2 wideGamut:(bool)arg3;
+ (id)videoSourceWithURL:(id)arg1;

@end
