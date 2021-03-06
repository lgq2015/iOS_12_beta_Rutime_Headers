/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUJSTime : NUJSRational

@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property (readonly) NSValue *value;

- (id)initWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)nu_unwrapJSValue;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (id)value;

@end
