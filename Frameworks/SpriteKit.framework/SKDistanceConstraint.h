/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKDistanceConstraint : SKConstraint {
    SKRange * _distanceRange;
    SKNode * _node;
    struct CGPoint { 
        double x; 
        double y; 
    }  _point;
}

@property (copy) SKRange *distanceRange;
@property SKNode *node;
@property struct CGPoint { double x1; double x2; } point;

+ (id)constraintWithNode:(id)arg1 distanceRange:(id)arg2;
+ (id)constraintWithPoint:(struct CGPoint { double x1; double x2; })arg1 distanceRange:(id)arg2;
+ (id)constraintWithPoint:(struct CGPoint { double x1; double x2; })arg1 inNode:(id)arg2 distanceRange:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)distanceRange;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPoint:(struct CGPoint { double x1; double x2; })arg1 inNode:(id)arg2 distanceRange:(id)arg3;
- (bool)isEqualToDistanceConstraint:(id)arg1;
- (id)node;
- (struct CGPoint { double x1; double x2; })point;
- (void)setDistanceRange:(id)arg1;
- (void)setNode:(id)arg1;
- (void)setPoint:(struct CGPoint { double x1; double x2; })arg1;

@end