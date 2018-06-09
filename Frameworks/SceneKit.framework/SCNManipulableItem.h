/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNManipulableItem : NSObject {
    double  _screenSize;
    id  component;
    unsigned long long  elementIndex;
    SCNNode * node;
}

@property (nonatomic, retain) id component;
@property (nonatomic) unsigned long long elementIndex;
@property (nonatomic, readonly) struct SCNVector3 { float x1; float x2; float x3; } elementPosition;
@property (nonatomic, retain) SCNNode *node;
@property (nonatomic) struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } transform;
@property (nonatomic) struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } worldTransform;

+ (void)addItems:(id)arg1 toScene:(id)arg2;
+ (void)removeItemsFromScene:(id)arg1;

- (id)cloneForManipulators;
- (id)component;
- (void)dealloc;
- (unsigned long long)elementIndex;
- (struct SCNVector3 { float x1; float x2; float x3; })elementPosition;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isNodeManipulator;
- (id)node;
- (id)parentItem;
- (struct SCNVector3 { float x1; float x2; float x3; })scale;
- (double)screenSize;
- (void)setComponent:(id)arg1;
- (void)setElementIndex:(unsigned long long)arg1;
- (void)setNode:(id)arg1;
- (void)setPosition:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setScreenSize:(double)arg1;
- (void)setTransform:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (void)setWorldTransform:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })transform;
- (void)validateClone;
- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })worldTransform;

@end