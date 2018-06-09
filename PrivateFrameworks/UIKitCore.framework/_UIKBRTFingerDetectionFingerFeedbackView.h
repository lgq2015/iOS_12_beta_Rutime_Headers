/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIKBRTFingerDetectionFingerFeedbackView : UIView {
    _UIKBRTFingerDetectionFingerCircleView * _fingerDot;
    UILabel * _fingerLabel;
    struct CGPoint { 
        double x; 
        double y; 
    }  _framelocation;
    double  _radiusInt;
    bool  _unknownSeen;
}

@property (nonatomic, retain) _UIKBRTFingerDetectionFingerCircleView *fingerDot;
@property (nonatomic, retain) UILabel *fingerLabel;
@property (nonatomic) bool unknownSeen;

- (void).cxx_destruct;
- (void)centerOn:(struct CGPoint { double x1; double x2; })arg1 withRadius:(double)arg2 andIdentifier:(unsigned long long)arg3;
- (id)fingerDot;
- (id)fingerLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)radius;
- (void)setFingerDot:(id)arg1;
- (void)setFingerLabel:(id)arg1;
- (void)setNeedsDisplay;
- (void)setUnknownSeen:(bool)arg1;
- (bool)unknownSeen;

@end