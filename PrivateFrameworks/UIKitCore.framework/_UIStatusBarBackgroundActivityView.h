/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarBackgroundActivityView : _UIStatusBarRoundedCornerView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _alignmentRectInsets;
    CALayer * _pulseLayer;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } alignmentRectInsets;
@property (nonatomic, retain) CALayer *pulseLayer;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)pulseLayer;
- (void)setAlignmentRectInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPulseLayer:(id)arg1;

@end
