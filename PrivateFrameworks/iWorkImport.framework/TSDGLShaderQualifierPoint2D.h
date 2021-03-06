/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDGLShaderQualifierPoint2D : TSDGLShaderQualifier {
    struct { 
        float x; 
        float y; 
    }  _GLPoint2DValue;
    struct { 
        float x; 
        float y; 
    }  _proposedGLPoint2DValue;
}

@property (nonatomic, readonly) struct { float x1; float x2; } GLPoint2DValue;
@property (nonatomic) struct { float x1; float x2; } proposedGLPoint2DValue;

- (struct { float x1; float x2; })GLPoint2DValue;
- (id)description;
- (struct { float x1; float x2; })proposedGLPoint2DValue;
- (void)setGLUniformWithShader:(id)arg1;
- (void)setProposedGLPoint2DValue:(struct { float x1; float x2; })arg1;

@end
