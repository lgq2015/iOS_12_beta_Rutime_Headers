/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DLightUniformArrayShaderVariables : NSObject {
    TSCH3DUniformArrayShaderVariables * mVariables;
}

- (void)addUniformsToShaderProgram:(id)arg1 size:(unsigned long long)arg2;
- (unsigned long long)arraySize;
- (void)dealloc;
- (void)initializeArrayVariables;
- (void)initializePrefix:(id)arg1;
- (id)variableAtIndex:(unsigned long long)arg1 name:(id)arg2;

@end
