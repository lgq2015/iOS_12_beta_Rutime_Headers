/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIPortraitLightingStrobe : CIFilter {
    CIVector * inputCenter1;
    CIVector * inputCenter2;
    CIImage * inputImage;
    NSNumber * inputOrientation;
    NSNumber * inputRotate;
    NSNumber * inputStrength;
    NSNumber * inputWidth;
}

@property (nonatomic, retain) CIVector *inputCenter1;
@property (nonatomic, retain) CIVector *inputCenter2;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputOrientation;
@property (nonatomic, retain) NSNumber *inputRotate;
@property (nonatomic, retain) NSNumber *inputStrength;
@property (nonatomic, retain) NSNumber *inputWidth;

+ (id)customAttributes;

- (id)_strobeKernel;
- (id)inputCenter1;
- (id)inputCenter2;
- (id)inputImage;
- (id)inputOrientation;
- (id)inputRotate;
- (id)inputStrength;
- (id)inputWidth;
- (id)outputImage;
- (void)setInputCenter1:(id)arg1;
- (void)setInputCenter2:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputOrientation:(id)arg1;
- (void)setInputRotate:(id)arg1;
- (void)setInputStrength:(id)arg1;
- (void)setInputWidth:(id)arg1;

@end
