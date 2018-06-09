/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PITempTintFilter : CIFilter {
    CIImage * _inputImage;
    double  _temperature;
    double  _tint;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic) double temperature;
@property (nonatomic) double tint;

- (void).cxx_destruct;
- (id)inputImage;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputVectorsForFilter:(id)arg1;
- (void)setTemperature:(double)arg1;
- (void)setTint:(double)arg1;
- (double)temperature;
- (double)tint;

@end