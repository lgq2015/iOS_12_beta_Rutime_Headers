/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTextureBlendShaderEffect : TSCH3DShaderEffect

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)effect;
+ (void)setBlendFactor:(float)arg1 unit:(long long)arg2 effectsStates:(id)arg3;
+ (id)variableBlendFactor;
+ (id)variableBlendTexture;

- (void)addVariables:(id)arg1;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)inject:(id)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2;
- (id)variableBlendFactor;
- (id)variableBlendTexture;

@end