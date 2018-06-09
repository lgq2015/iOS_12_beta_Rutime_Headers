/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNCommonProfileProgramGeneratorMetal : SCNCommonProfileProgramGenerator {
    NSArray * _injectionPointRanges;
    NSArray * _lightingInjectionPointRanges;
    NSString * _originalLightingSourceCode;
    NSString * _originalSourceCode;
    bool  _useFunctionConstants;
}

- (void)_loadSourceCode;
- (struct __C3DFXProgram { }*)_newProgramWithHashCode:(struct __C3DProgramHashCode { }*)arg1 engineContext:(struct __C3DEngineContext { }*)arg2 introspectionDataPtr:(void*)arg3;
- (struct __C3DFXProgram { }*)_newProgramWithHashCodeWithFunctionConstants:(struct __C3DProgramHashCode { }*)arg1 engineContext:(struct __C3DEngineContext { }*)arg2 introspectionDataPtr:(void*)arg3;
- (void)dealloc;
- (void)emptyShaderCache;
- (id)init;
- (int)profile;

@end