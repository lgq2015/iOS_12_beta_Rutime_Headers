/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFPageLayerEffect : CALayer {
    PDFPageLayerEffectPrivate * _private;
}

+ (id)createFlashEffectForPDFLinkAnnotation:(id)arg1 withLayer:(id)arg2 forType:(long long)arg3;
+ (id)createPDFAnnotationLayerEffectForAnnotation:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFCoachmarkLayerEffectsWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withLayer:(id)arg2;
+ (id)createPDFMarkupLayerEffectsForAnnotation:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFSelectionLayerEffectsForSelection:(id)arg1 withLayer:(id)arg2;

- (void).cxx_destruct;
- (id)UUID;
- (id)annotation;
- (void)clearLollipopMagnifier;
- (void)clearTextSelectionHandles;
- (void)clearTextSelectionMagnifier;
- (void)enableTextSelectionHandles;
- (id)initWithPDFPageLayer:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pageFrame;
- (id)selection;
- (void)setLollipopMagnifierPagePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPageFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSelection:(id)arg1;
- (void)setTextSelectionMagnifierPagePoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldRotateContent;
- (void)update;

@end