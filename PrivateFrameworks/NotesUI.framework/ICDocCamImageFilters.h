/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICDocCamImageFilters : NSObject

+ (struct UIImage { Class x1; }*)autoBlackAndWhitePoint:(struct UIImage { Class x1; }*)arg1 orientation:(long long)arg2;
+ (struct UIImage { Class x1; }*)autoEnhancement:(struct UIImage { Class x1; }*)arg1 orientation:(long long)arg2;
+ (struct UIImage { Class x1; }*)bradleyAdaptiveThreshold:(struct UIImage { Class x1; }*)arg1;
+ (struct UIImage { Class x1; }*)bradleyAdaptiveThreshold:(struct UIImage { Class x1; }*)arg1 orientation:(long long)arg2;
+ (struct UIImage { Class x1; }*)bradleyAdaptiveThresholdWithBlur:(struct UIImage { Class x1; }*)arg1 orientation:(long long)arg2;
+ (struct UIImage { Class x1; }*)colorDocument:(struct UIImage { Class x1; }*)arg1 orientation:(long long)arg2;
+ (struct UIImage { Class x1; }*)convertImageTo8BitGrayScale:(struct UIImage { Class x1; }*)arg1;
+ (struct UIImage { Class x1; }*)convertImageToGrayScale:(struct UIImage { Class x1; }*)arg1;
+ (struct UIImage { Class x1; }*)filteredImage:(struct UIImage { Class x1; }*)arg1 imageFilterType:(short)arg2;
+ (struct UIImage { Class x1; }*)filteredImage:(struct UIImage { Class x1; }*)arg1 orientation:(long long)arg2 imageFilterType:(short)arg3;
+ (struct UIImage { Class x1; }*)grayscale:(struct UIImage { Class x1; }*)arg1 orientation:(long long)arg2;
+ (struct UIImage { Class x1; }*)grayscaleDocument:(struct UIImage { Class x1; }*)arg1 orientation:(long long)arg2;
+ (struct UIImage { Class x1; }*)histogramEqualization:(struct UIImage { Class x1; }*)arg1 orientation:(long long)arg2;
+ (struct UIImage { Class x1; }*)histogramEqualizedImage:(struct UIImage { Class x1; }*)arg1;
+ (struct UIImage { Class x1; }*)icImageCleanupFilter:(struct UIImage { Class x1; }*)arg1 orientation:(long long)arg2;
+ (id)imageFilterNames;
+ (short)imageFilterTypeFromName:(id)arg1;
+ (struct UIImage { Class x1; }*)imageWithRGBColorspaceFromImage:(struct UIImage { Class x1; }*)arg1;
+ (id)localizedImageFilterNameForName:(id)arg1;
+ (id)localizedImageFilterNameForType:(short)arg1;
+ (struct UIImage { Class x1; }*)normalization:(struct UIImage { Class x1; }*)arg1 orientation:(long long)arg2;
+ (struct UIImage { Class x1; }*)normalizedImage:(struct UIImage { Class x1; }*)arg1;
+ (id)perspectiveCorrectedCIImageFromCIImage:(id)arg1 imageQuad:(id)arg2;
+ (struct UIImage { Class x1; }*)perspectiveCorrectedImageFromImage:(struct UIImage { Class x1; }*)arg1 imageQuad:(id)arg2;
+ (struct UIImage { Class x1; }*)perspectiveCorrectedImageFromImage:(struct UIImage { Class x1; }*)arg1 normalizedImageQuad:(id)arg2;
+ (struct UIImage { Class x1; }*)sepiaFilter:(struct UIImage { Class x1; }*)arg1 orientation:(long long)arg2;
+ (id)sharedCoreImageContext;
+ (struct UIImage { Class x1; }*)sigmoidColor:(struct UIImage { Class x1; }*)arg1 orientation:(long long)arg2;
+ (struct UIImage { Class x1; }*)sigmoidGrayscale:(struct UIImage { Class x1; }*)arg1 orientation:(long long)arg2;
+ (struct UIImage { Class x1; }*)swapRedAndGreen:(struct UIImage { Class x1; }*)arg1 orientation:(long long)arg2;
+ (struct UIImage { Class x1; }*)whiteboardAndSaturation:(struct UIImage { Class x1; }*)arg1 orientation:(long long)arg2;
+ (struct UIImage { Class x1; }*)whiteboardFilter:(struct UIImage { Class x1; }*)arg1 orientation:(long long)arg2;

@end