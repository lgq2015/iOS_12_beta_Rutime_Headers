/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoServices.framework/CloudPhotoServices
 */

@interface CloudPhotoServices : NSObject <CPLDerivativeGenerator>

+ (unsigned long long)_bestImageResourceTypeForPixelCount:(long long)arg1;
+ (id)_createCPLResourceFromURL:(id)arg1 withResourceType:(unsigned long long)arg2 uniformTypeIdentifier:(id)arg3 itemScopedIdentifier:(id)arg4;
+ (void)_createJPEGResourcesFromInputJPEGURL:(id)arg1 resourceTypes:(id)arg2 withItemScopedIdentifier:(id)arg3 destinationDirectory:(id)arg4 outputResources:(id)arg5 convertToSRGB:(bool)arg6;
+ (void)_createPosterFrameResourcesFromInputURL:(id)arg1 withItemScopedIdentifier:(id)arg2 destinationDirectory:(id)arg3 outputResources:(id)arg4;
+ (void)_createVideoResourcesFromInputURL:(id)arg1 withItemScopedIdentifier:(id)arg2 videoAdjustments:(id)arg3 resourceType:(unsigned long long)arg4 forIris:(bool)arg5 destinationDirectory:(id)arg6 outputResources:(id)arg7;
+ (id)_filenameForResourceWithItemScopedIdentifier:(id)arg1 resourceType:(unsigned long long)arg2 extension:(id)arg3;
+ (void)_generateImageDerivativeResourcesFromInputResource:(id)arg1 destinationDirectory:(id)arg2 isAdjusted:(bool)arg3 completionHandler:(id /* block */)arg4;
+ (void)_generateVideoDerivativeResourcesFromInputResource:(id)arg1 withCPLAdjustments:(id)arg2 destinationDirectory:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)_minionConnection;
+ (void)_sendCommandToRemoteObjectProxy:(id /* block */)arg1 withErrorHandler:(id /* block */)arg2;
+ (void)_sendRetryNumber:(int)arg1 toRemoteObjectProxyWithCommand:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
+ (bool)_shouldGenerateLargeVideoDerivativeForAVAsset:(id)arg1;
+ (void)generateDerivativeResourcesFromInputResource:(id)arg1 withAdjustments:(id)arg2 destinationDirectory:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)generateFullSizeJPEGIfNecessaryFromInputResource:(id)arg1 destinationDirectory:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)generateGIFForVideoAtURL:(id)arg1 destinationURL:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)generatePosterFrameForVideoAtURL:(id)arg1 maximumPixelCount:(long long)arg2 destinationURL:(id)arg3 completionHandler:(id /* block */)arg4;
+ (bool)isUnsupportedOriginalFormatError:(id)arg1;
+ (void)resizeImageAtURL:(id)arg1 destinationURL:(id)arg2 maximumPixelCount:(long long)arg3 bakeInOrientation:(bool)arg4 colorOutput:(long long)arg5 completionHandler:(id /* block */)arg6;
+ (void)resizeImageAtURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
+ (bool)shouldGenerateVideoDerivativeForAVAsset:(id)arg1 forResourceType:(unsigned long long)arg2 adjusted:(bool)arg3;
+ (id)singlePassTranscodeVideoAtURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
+ (long long)status;
+ (id)transcodeVideoAtURL:(id)arg1 withAdjustments:(id)arg2 destinationURL:(id)arg3 options:(id)arg4 completionHandler:(id /* block */)arg5;
+ (id)workQueue;

@end