/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODDPresentationPoint : ODDPoint {
    NSMutableArray * mChildren;
    ODDPresentationPoint * mParent;
}

- (void)addChild:(id)arg1 order:(unsigned long long)arg2;
- (id)children;
- (void)dealloc;
- (id)parent;
- (void)setType:(int)arg1;

@end
