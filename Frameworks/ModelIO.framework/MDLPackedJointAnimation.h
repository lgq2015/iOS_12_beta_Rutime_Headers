/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLPackedJointAnimation : MDLObject <MDLJointAnimation, NSCopying> {
    NSArray * _jointPaths;
    NSString * _name;
    MDLAnimatedQuaternionArray * _rotations;
    MDLAnimatedVector3Array * _scales;
    MDLAnimatedVector3Array * _translations;
}

@property (nonatomic, readonly) NSArray *jointPaths;
@property (nonatomic, readonly) MDLAnimatedQuaternionArray *rotations;
@property (nonatomic, readonly) MDLAnimatedVector3Array *scales;
@property (nonatomic, readonly) MDLAnimatedVector3Array *translations;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithName:(id)arg1 jointPaths:(id)arg2;
- (id)jointPaths;
- (id)name;
- (id)rotations;
- (id)scales;
- (void)setName:(id)arg1;
- (id)translations;

@end
