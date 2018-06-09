/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDropInteractionHighlightEffect : NSObject <UIDropInteractionEffect> {
    double  _cornerRadius;
    UIColor * _highlightColor;
    double  _highlightInset;
    double  _highlightWidth;
    CAShapeLayer * _shapeLayer;
    long long  _visualState;
}

@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) UIColor *highlightColor;
@property (nonatomic) double highlightInset;
@property (nonatomic) double highlightWidth;
@property (nonatomic, retain) CAShapeLayer *shapeLayer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingRectInView:(id)arg1 forView:(id)arg2;
- (double)cornerRadius;
- (void)dealloc;
- (id)highlightColor;
- (double)highlightInset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })highlightRectInView:(id)arg1 forDragInteraction:(id)arg2 withContext:(id)arg3;
- (double)highlightWidth;
- (id)init;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
- (void)removeShapeLayer;
- (void)setCornerRadius:(double)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setHighlightInset:(double)arg1;
- (void)setHighlightWidth:(double)arg1;
- (void)setShapeLayer:(id)arg1;
- (id)shapeLayer;
- (id)updateShapeLayerForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;

@end