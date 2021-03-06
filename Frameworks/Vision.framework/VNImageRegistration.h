/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNImageRegistration : NSObject

+ (bool)computeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg1 forRegisteringImageSignature:(id)arg2 withSignature:(id)arg3 andOptions:(id)arg4 minimumOverlap:(float)arg5 error:(id*)arg6;

@end
