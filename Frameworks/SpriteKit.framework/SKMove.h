/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKMove : SKAction {
    struct SKCMove { int (**x1)(); unsigned int x2; float x3; id /* block */ x4; id x5; double x6; double x7; float x8; float x9; double x10; bool x11; bool x12; id /* block */ x13; long long x14; float x15; float x16; float x17; float x18; float x19; struct { float x_20_1_1; float x_20_1_2; } x20; struct { float x_21_1_1; float x_21_1_2; } x21; struct { float x_22_1_1; float x_22_1_2; } x22; bool x23; bool x24; bool x25; bool x26; } * _mycaction;
}

+ (id)moveBy:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2;
+ (id)moveByX:(double)arg1 duration:(double)arg2;
+ (id)moveByX:(double)arg1 y:(double)arg2 duration:(double)arg3;
+ (id)moveByY:(double)arg1 duration:(double)arg2;
+ (id)moveTo:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2;
+ (id)moveToX:(double)arg1 duration:(double)arg2;
+ (id)moveToX:(double)arg1 y:(double)arg2 duration:(double)arg3;
+ (id)moveToY:(double)arg1 duration:(double)arg2;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
