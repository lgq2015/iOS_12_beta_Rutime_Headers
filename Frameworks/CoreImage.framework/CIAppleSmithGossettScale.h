/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIAppleSmithGossettScale : CIFilter {
    CIImage * inputImage;
    NSNumber * inputScale;
}

+ (id)customAttributes;

- (id)outputImage;

@end