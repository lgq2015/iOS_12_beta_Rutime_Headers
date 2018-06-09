/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMImageUtilities : NSObject

+ (struct CGSize { double x1; double x2; })imageRefPxSize:(struct CGImage { }*)arg1;
+ (struct CGSize { double x1; double x2; })imageSourcePxSize:(struct CGImageSource { }*)arg1;
+ (struct CGImage { }*)newThumbnailForTargetSize:(struct CGSize { double x1; double x2; })arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 imageSource:(struct CGImageSource { }*)arg3 atIndex:(unsigned long long)arg4 mode:(long long)arg5 scale:(double)arg6;
+ (struct CGImage { }*)newThumbnailForTargetSize:(struct CGSize { double x1; double x2; })arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 imageSource:(struct CGImageSource { }*)arg3 mode:(long long)arg4 scale:(double)arg5;
+ (bool)persistCPBitmapWithImage:(struct CGImage { }*)arg1 url:(id)arg2;
+ (void)sampleImageEdges:(char *)arg1 usingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forMostlyWhitePixels:(unsigned long long*)arg3 otherPixels:(unsigned long long*)arg4 bytesPerRow:(long long)arg5;

@end