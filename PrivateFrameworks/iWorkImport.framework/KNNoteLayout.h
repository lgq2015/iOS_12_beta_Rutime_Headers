/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNNoteLayout : TSDLayout <TSWPColumnMetrics, TSWPLayoutParent, TSWPStyleProvider> {
    TSWPLayout * _containedLayout;
    TSWPPadding * _padding;
    struct CGSize { 
        double width; 
        double height; 
    }  _sizeOfScrollViewEnclosingCanvas;
}

@property (nonatomic, readonly) bool alwaysStartsNewTarget;
@property (nonatomic, readonly) unsigned long long columnCount;
@property (nonatomic, readonly) bool columnsAreLeftToRight;
@property (nonatomic, readonly) TSWPLayout *containedLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TSWPPadding *layoutMargins;
@property (nonatomic, readonly) TSWPPadding *padding;
@property (nonatomic, readonly) bool shrinkTextToFit;
@property (nonatomic) struct CGSize { double x1; double x2; } sizeOfScrollViewEnclosingCanvas;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsBoldItalicUnderlineShortcuts;
@property (nonatomic, readonly) double textScaleFactor;

- (void).cxx_destruct;
- (void)addChild:(id)arg1;
- (struct CGSize { double x1; double x2; })adjustedInsetsForTarget:(id)arg1;
- (bool)alwaysStartsNewTarget;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })capturedInfoPositionForAttachment;
- (id)children;
- (unsigned long long)columnCount;
- (id)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)columnsAreLeftToRight;
- (id)computeLayoutGeometry;
- (id)containedLayout;
- (void)createContainedLayoutForEditing;
- (bool)darkModeEnabled;
- (void)dealloc;
- (id)dependentsOfTextLayout:(id)arg1;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (void)insertChild:(id)arg1 above:(id)arg2;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertChild:(id)arg1 below:(id)arg2;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (void)invalidatePadding;
- (void)invalidateSize;
- (id)layoutGeometryFromInfo;
- (id)layoutMargins;
- (double)maxAutoGrowHeightForTextLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })nonAutosizedFrameForTextLayout:(id)arg1;
- (id)p_adjustedPaddingForBodyWidth:(double)arg1;
- (bool)p_isForPrint;
- (id)padding;
- (id)paragraphStyleAtParIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double*)arg4 outGap:(double*)arg5;
- (Class)repClassForTextLayout:(id)arg1;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (void)setChildren:(id)arg1;
- (void)setSizeOfScrollViewEnclosingCanvas:(struct CGSize { double x1; double x2; })arg1;
- (bool)shrinkTextToFit;
- (struct CGSize { double x1; double x2; })sizeOfScrollViewEnclosingCanvas;
- (id)styleProvider;
- (bool)supportsBoldItalicUnderlineShortcuts;
- (bool)textIsVertical;
- (double)textScaleFactor;
- (double)textScaleFactorForPrinting;
- (void)updateChildrenFromInfo;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;

@end