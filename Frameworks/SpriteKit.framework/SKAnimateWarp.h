/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKAnimateWarp : SKAction {
    struct SKCAnimateMesh { int (**x1)(); unsigned int x2; float x3; id /* block */ x4; id x5; double x6; double x7; float x8; float x9; double x10; bool x11; bool x12; id /* block */ x13; long long x14; float x15; float x16; float x17; float x18; id x19; id x20; } * _mycaction;
}

+ (id)animateWithWarps:(id)arg1 times:(id)arg2;
+ (id)animateWithWarps:(id)arg1 times:(id)arg2 restore:(bool)arg3;
+ (bool)supportsSecureCoding;
+ (id)warpTo:(id)arg1 duration:(double)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
