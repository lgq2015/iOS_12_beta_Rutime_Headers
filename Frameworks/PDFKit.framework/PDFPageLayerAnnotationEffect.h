/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFPageLayerAnnotationEffect : PDFPageLayerEffect

- (id)UUID;
- (id)annotation;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pageFrame;
- (void)update;

@end