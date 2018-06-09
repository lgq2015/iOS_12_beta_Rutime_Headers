/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNSliderConstraint : SCNConstraint {
    unsigned long long  _categoryBitMask;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _offset;
    float  _radius;
}

@property (nonatomic) unsigned long long collisionCategoryBitMask;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } offset;
@property (nonatomic) double radius;

+ (id)sliderConstraint;
+ (bool)supportsSecureCoding;

- (unsigned long long)collisionCategoryBitMask;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })offset;
- (double)radius;
- (void)setCollisionCategoryBitMask:(unsigned long long)arg1;
- (void)setOffset:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setRadius:(double)arg1;

@end