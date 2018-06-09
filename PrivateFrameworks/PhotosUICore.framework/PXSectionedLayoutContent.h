/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSectionedLayoutContent : NSObject {
    long long  _axis;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _internalContentSize;
    NSMutableArray * _sections;
}

@property (nonatomic) long long axis;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic) struct CGSize { double x1; double x2; } internalContentSize;
@property (nonatomic, readonly, copy) NSArray *sections;

- (void).cxx_destruct;
- (void)_addSection:(id)arg1;
- (void)_adjustSectionsFromIndex:(long long)arg1;
- (void)_exchangeSectionAtIndex:(unsigned long long)arg1 withSectionAtIndex:(unsigned long long)arg2;
- (void)_insertSection:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_removeSection:(id)arg1;
- (void)addSection:(id)arg1;
- (long long)axis;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)description;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (void)exchangeSectionAtIndex:(unsigned long long)arg1 withSectionAtIndex:(unsigned long long)arg2;
- (id)init;
- (id)initWithAxis:(long long)arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)insertSection:(id)arg1 atIndex:(long long)arg2;
- (struct CGSize { double x1; double x2; })internalContentSize;
- (void)removeAllSections;
- (void)removeSection:(id)arg1;
- (void)removeSections:(id)arg1;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (id)sections;
- (void)setAxis:(long long)arg1;
- (void)setInternalContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateSections:(id)arg1;

@end