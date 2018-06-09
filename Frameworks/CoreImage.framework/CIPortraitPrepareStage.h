/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIPortraitPrepareStage : CIFilter {
    NSNumber * inputAdaptiveThresholdRange;
    CIVector * inputBandRange;
    CIImage * inputDisparityImage;
    NSNumber * inputFeatherBandRange;
    NSNumber * inputFilterCut;
    CIImage * inputImage;
    NSNumber * inputLambda;
    NSNumber * inputMaxNumIterations;
    NSNumber * inputMaxNumVertices;
    NSNumber * inputSigmaFallout;
    NSNumber * inputSigmaRChroma;
    NSNumber * inputSigmaRLuma;
    NSNumber * inputSigmaS;
    CIImage * inputThresholdImage;
    NSNumber * inputThresholdOffset;
}

@property (nonatomic, copy) NSNumber *inputAdaptiveThresholdRange;
@property (retain) CIVector *inputBandRange;
@property (retain) CIImage *inputDisparityImage;
@property (nonatomic, copy) NSNumber *inputFeatherBandRange;
@property (nonatomic, copy) NSNumber *inputFilterCut;
@property (retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *inputLambda;
@property (nonatomic, copy) NSNumber *inputMaxNumIterations;
@property (nonatomic, copy) NSNumber *inputMaxNumVertices;
@property (nonatomic, copy) NSNumber *inputSigmaFallout;
@property (nonatomic, copy) NSNumber *inputSigmaRChroma;
@property (nonatomic, copy) NSNumber *inputSigmaRLuma;
@property (nonatomic, copy) NSNumber *inputSigmaS;
@property (retain) CIImage *inputThresholdImage;
@property (nonatomic, copy) NSNumber *inputThresholdOffset;

+ (id)customAttributes;

- (id)boxBlur3Mono;
- (id)computeBand;
- (id)convertToHalfFloat;
- (id)denormalize;
- (id)filterCut;
- (id)foreground;
- (id)inputAdaptiveThresholdRange;
- (id)inputBandRange;
- (id)inputDisparityImage;
- (id)inputFeatherBandRange;
- (id)inputFilterCut;
- (id)inputImage;
- (id)inputLambda;
- (id)inputMaxNumIterations;
- (id)inputMaxNumVertices;
- (id)inputSigmaFallout;
- (id)inputSigmaRChroma;
- (id)inputSigmaRLuma;
- (id)inputSigmaS;
- (id)inputThresholdImage;
- (id)inputThresholdOffset;
- (id)invertImage;
- (id)normalizeToPhysicalDepth;
- (id)outputImage;
- (id)protectInterior;
- (id)renormalize01;
- (id)renormalizeThreshold;
- (void)setInputAdaptiveThresholdRange:(id)arg1;
- (void)setInputBandRange:(id)arg1;
- (void)setInputDisparityImage:(id)arg1;
- (void)setInputFeatherBandRange:(id)arg1;
- (void)setInputFilterCut:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputLambda:(id)arg1;
- (void)setInputMaxNumIterations:(id)arg1;
- (void)setInputMaxNumVertices:(id)arg1;
- (void)setInputSigmaFallout:(id)arg1;
- (void)setInputSigmaRChroma:(id)arg1;
- (void)setInputSigmaRLuma:(id)arg1;
- (void)setInputSigmaS:(id)arg1;
- (void)setInputThresholdImage:(id)arg1;
- (void)setInputThresholdOffset:(id)arg1;

@end