/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CPUFaceMask : NSObject {
    int  _chromaDilateRadius;
    int  _chromaErodeRadius;
    struct CPUColorCube { 
        unsigned char data[32768]; 
    }  _colorCube;
    struct MetalFaceMaskCubeInputScaling_t { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*offset; 
    }  _inputScalingForCube;
    int  _lumaDilateRadius;
    int  _lumaErodeRadius;
    struct CPUColorCube { 
        unsigned char data[32768]; 
    }  _tempColorCube;
}

@property (nonatomic) int chromaDilateRadius;
@property (nonatomic) int chromaErodeRadius;
@property (nonatomic) int lumaDilateRadius;
@property (nonatomic) int lumaErodeRadius;

- (int)chromaDilateRadius;
- (int)chromaErodeRadius;
- (int)clearOutputMask:(char *)arg1 WithBytesPerRow:(unsigned long long)arg2 OutputRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (int)drawEyeMaskUsingQuads:(struct MetalFaceMaskEyeQuads_t { unsigned int x1; unsigned int x2; unsigned char x3; struct MetalFaceMaskQuad_t { } x4[16]; }*)arg1 OutputMask:(char *)arg2 OutputBytesPerRow:(unsigned long long)arg3 OutputRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (int)findSkinMaskUsingInputImage:(const char *)arg1 InputBytesPerRow:(unsigned long long)arg2 InputRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 OutputMask:(char *)arg4 OutputBytesPerRow:(unsigned long long)arg5 OutputRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 FaceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 SeedPoints:(struct CGPoint { double x1; double x2; }*)arg8 NumberOfSeedPoints:(unsigned long long)arg9 FillValue:(unsigned char)arg10;
- (int)findToothMaskUsingInputImage:(const char *)arg1 InputBytesPerRow:(unsigned long long)arg2 InputRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 OutputMask:(char *)arg4 OutputBytesPerRow:(unsigned long long)arg5 OutputRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 TeethBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 SeedPoints:(struct CGPoint { double x1; double x2; }*)arg8 NumberOfSeedPoints:(unsigned long long)arg9 FillValue:(unsigned char)arg10;
- (id)init;
- (int)lumaDilateRadius;
- (int)lumaErodeRadius;
- (void)setChromaDilateRadius:(int)arg1;
- (void)setChromaErodeRadius:(int)arg1;
- (void)setLumaDilateRadius:(int)arg1;
- (void)setLumaErodeRadius:(int)arg1;
- (int)trainSkinMaskUsingInputImage:(const char *)arg1 InputBytesPerRow:(unsigned long long)arg2 InputRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 QuadRegion:(struct CGPoint { double x1; double x2; })arg4;

@end
