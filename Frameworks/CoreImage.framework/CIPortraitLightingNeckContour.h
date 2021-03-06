/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIPortraitLightingNeckContour : CIFilter {
    CIVector * inputCenter;
    CIVector * inputChin;
    NSNumber * inputFaceOrientation;
    NSNumber * inputHeight;
    CIImage * inputImage;
    NSNumber * inputOrientation;
    NSNumber * inputScale;
    NSNumber * inputStrength;
    NSNumber * inputWidth;
}

@property (nonatomic, retain) CIVector *inputCenter;
@property (nonatomic, retain) CIVector *inputChin;
@property (nonatomic, retain) NSNumber *inputFaceOrientation;
@property (nonatomic, retain) NSNumber *inputHeight;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputOrientation;
@property (nonatomic, retain) NSNumber *inputScale;
@property (nonatomic, retain) NSNumber *inputStrength;
@property (nonatomic, retain) NSNumber *inputWidth;

+ (id)customAttributes;

- (id)_neckContourKernel;
- (id)inputCenter;
- (id)inputChin;
- (id)inputFaceOrientation;
- (id)inputHeight;
- (id)inputImage;
- (id)inputOrientation;
- (id)inputScale;
- (id)inputStrength;
- (id)inputWidth;
- (id)outputImage;
- (void)setInputCenter:(id)arg1;
- (void)setInputChin:(id)arg1;
- (void)setInputFaceOrientation:(id)arg1;
- (void)setInputHeight:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputOrientation:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputStrength:(id)arg1;
- (void)setInputWidth:(id)arg1;

@end
