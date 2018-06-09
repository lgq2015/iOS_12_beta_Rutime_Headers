/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUGLValue : NSObject {
    unsigned int  _type;
    union { 
        int intValue; 
        float floatValue; 
        struct { 
            float x; 
            float y; 
        } vec2Value; 
        struct { 
            float x; 
            float y; 
            float z; 
            float w; 
        } vec4Value; 
        struct { 
            float a; 
            float b; 
            float _unused1; 
            float c; 
            float d; 
            float _unused2; 
            float tx; 
            float ty; 
            float _unused3; 
        } mat3Value; 
        struct { 
            float m00; 
            float m01; 
            float m02; 
            float m03; 
            float m10; 
            float m11; 
            float m12; 
            float m13; 
            float m20; 
            float m21; 
            float m22; 
            float m23; 
            float m30; 
            float m31; 
            float m32; 
            float m33; 
        } mat4Value; 
    }  _value;
}

@property (readonly) float floatValue;
@property (readonly) int intValue;
@property (readonly) struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; } mat3Value;
@property (readonly) struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } mat4Value;
@property (readonly) unsigned int type;
@property (readonly) struct { float x1; float x2; } vec2Value;
@property (readonly) struct { float x1; float x2; float x3; float x4; } vec4Value;

+ (id)valueWithFloat:(float)arg1;
+ (id)valueWithInt:(int)arg1;
+ (id)valueWithMat3:(struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; })arg1;
+ (id)valueWithMat4:(struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
+ (id)valueWithVec2:(struct { float x1; float x2; })arg1;
+ (id)valueWithVec4:(struct { float x1; float x2; float x3; float x4; })arg1;

- (id)description;
- (float)floatValue;
- (id)init;
- (id)initWithBytes:(const void*)arg1 type:(unsigned int)arg2;
- (int)intValue;
- (struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; })mat3Value;
- (struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })mat4Value;
- (unsigned int)type;
- (struct { float x1; float x2; })vec2Value;
- (struct { float x1; float x2; float x3; float x4; })vec4Value;

@end