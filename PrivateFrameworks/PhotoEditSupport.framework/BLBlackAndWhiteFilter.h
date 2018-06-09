/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLBlackAndWhiteFilter : CIFilter {
    CIFilter * _colorCubeFilterBW;
    CIFilter * _colorCubeFilterGrain;
    BLPixelImageBuffer * _grainImage;
    NSNumber * _inputAmount;
    NSNumber * _inputApplyGrain;
    NSNumber * _inputApplySepia;
    CIVector * _inputDestinationRect;
    CIVector * _inputHueStrengthArray;
    CIImage * _inputImage;
    NSNumber * _inputNeutralGamma;
    NSNumber * _inputPadding;
    NSNumber * _inputPhototone;
    NSNumber * _inputPreset;
    NSNumber * _inputVersion;
    float  _lastAmount;
    bool  _lastApplyGrain;
    bool  _lastAppySepia;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastDestinationRect;
    CIVector * _lastHueStrengthArray;
    float  _lastNeutralGamma;
    float  _lastPhototone;
    int  _lastPreset;
    long long  _lastVersion;
    bool  _needsReprocess;
    NSData * _precomputedCube;
}

@property (nonatomic, retain) CIFilter *colorCubeFilterBW;
@property (nonatomic, retain) CIFilter *colorCubeFilterGrain;
@property (nonatomic, retain) BLPixelImageBuffer *grainImage;
@property (nonatomic, copy) NSNumber *inputAmount;
@property (nonatomic, copy) NSNumber *inputApplyGrain;
@property (nonatomic, copy) NSNumber *inputApplySepia;
@property (nonatomic, copy) CIVector *inputDestinationRect;
@property (nonatomic, copy) CIVector *inputHueStrengthArray;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *inputNeutralGamma;
@property (nonatomic, copy) NSNumber *inputPadding;
@property (nonatomic, copy) NSNumber *inputPhototone;
@property (nonatomic, copy) NSNumber *inputPreset;
@property (nonatomic, copy) NSNumber *inputVersion;
@property (nonatomic, retain) CIVector *lastHueStrengthArray;
@property (nonatomic, retain) NSData *precomputedCube;

- (void).cxx_destruct;
- (id)applyGrain:(id)arg1 cube:(id)arg2 destRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 padding:(float)arg4;
- (id)colorCubeFilterBW;
- (id)colorCubeFilterGrain;
- (id)generateGrain:(id)arg1 destRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)grainImage;
- (id)init;
- (id)inputAmount;
- (id)inputApplyGrain;
- (id)inputApplySepia;
- (id)inputDestinationRect;
- (id)inputHueStrengthArray;
- (id)inputImage;
- (id)inputNeutralGamma;
- (id)inputPadding;
- (id)inputPhototone;
- (id)inputPreset;
- (id)inputVersion;
- (id)lastHueStrengthArray;
- (id)loadGrain:(id)arg1 destRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 padding:(float)arg3;
- (id)outputImage;
- (id)precomputedCube;
- (void)setColorCubeFilterBW:(id)arg1;
- (void)setColorCubeFilterGrain:(id)arg1;
- (void)setDefaults;
- (void)setGrainImage:(id)arg1;
- (void)setInputAmount:(id)arg1;
- (void)setInputApplyGrain:(id)arg1;
- (void)setInputApplySepia:(id)arg1;
- (void)setInputDestinationRect:(id)arg1;
- (void)setInputHueStrengthArray:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputNeutralGamma:(id)arg1;
- (void)setInputPadding:(id)arg1;
- (void)setInputPhototone:(id)arg1;
- (void)setInputPreset:(id)arg1;
- (void)setInputVersion:(id)arg1;
- (void)setLastHueStrengthArray:(id)arg1;
- (void)setPrecomputedCube:(id)arg1;

@end