/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMMoviePreviewGenerator : IMPreviewGenerator

+ (id)UTITypes;
+ (Class)__AVAssetImageGeneratorClass;
+ (Class)__AVURLAssetClass;
+ (id)_avAssetForURL:(id)arg1;
+ (struct CGImage { }*)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; })arg2 error:(id*)arg3;
+ (struct CGSize { double x1; double x2; })thumbnailFillSizeForWidth:(double)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;

@end
