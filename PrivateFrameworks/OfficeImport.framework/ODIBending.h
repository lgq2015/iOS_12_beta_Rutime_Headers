/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODIBending : NSObject {
    unsigned int  mMaxColumnCount;
    unsigned int  mMaxNodeCount;
    float  mRectHeight;
    float  mSpaceHeight;
    float  mSpaceWidth;
    bool  mWithArrows;
}

+ (bool)mapIdentifier:(id)arg1 state:(id)arg2;
+ (unsigned int)mapLogicalBoundsWithShapeSize:(struct CGSize { double x1; double x2; })arg1 spaceSize:(struct CGSize { double x1; double x2; })arg2 maxNodeCount:(unsigned int)arg3 maxColumnCount:(unsigned int)arg4 state:(id)arg5;

- (id)initWithArrows:(bool)arg1;
- (void)mapWithState:(id)arg1;
- (void)setMaxColumnCount:(unsigned int)arg1;
- (void)setMaxNodeCount:(unsigned int)arg1;
- (void)setRectHeight:(float)arg1;

@end