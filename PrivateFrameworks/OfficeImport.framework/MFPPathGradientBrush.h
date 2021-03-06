/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPPathGradientBrush : MFPGradientBrush {
    OITSUColor * mCenterColor;
    struct CGPoint { 
        double x; 
        double y; 
    }  mCenterPoint;
    OITSUBezierPath * mPath;
    NSArray * mSurroundColors;
}

- (void)createShading;
- (void)dealloc;
- (id)endColor;
- (void)setCenterColor:(id)arg1;
- (void)setCenterPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPath:(id)arg1;
- (void)setSurroundColors:(id)arg1;
- (id)startColor;

@end
