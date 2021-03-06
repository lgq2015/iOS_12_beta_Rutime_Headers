/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusContainerGuideRegion : _UIFocusGuideRegion {
    <_UIFocusRegionContainer> * _contentFocusRegionContainer;
}

@property (nonatomic) <_UIFocusRegionContainer> *contentFocusRegionContainer;

- (void).cxx_destruct;
- (void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)_fallbackFocusItemForMovementRequest:(id)arg1 inFocusMap:(id)arg2;
- (unsigned long long)_focusableBoundaries;
- (bool)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1;
- (id)_visualRepresentationColor;
- (id)contentFocusRegionContainer;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setContentFocusRegionContainer:(id)arg1;

@end
