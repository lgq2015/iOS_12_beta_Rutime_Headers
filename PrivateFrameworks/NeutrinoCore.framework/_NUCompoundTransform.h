/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface _NUCompoundTransform : NUImageTransform {
    NSArray * _transforms;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithSrcTransforms:(id)arg1 dstTransforms:(id)arg2;
- (id)initWithTransforms:(id)arg1;
- (id)inverseTransform;
- (struct CGPoint { double x1; double x2; })transformPoint:(struct CGPoint { double x1; double x2; })arg1;

@end