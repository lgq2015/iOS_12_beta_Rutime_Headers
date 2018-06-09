/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAcknowledgmentGlyphView : UIView {
    double  _animationDuration;
    UIColor * _glyphColor;
    struct CGPoint { 
        double x; 
        double y; 
    }  _glyphOffset;
}

@property (nonatomic, readonly) long long acknowledgmentType;
@property (nonatomic, readonly) double animationDuration;
@property (nonatomic, retain) UIColor *glyphColor;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } glyphOffset;

+ (void)cacheGlyphView:(id)arg1;
+ (id)glyphViewForAcknowledgmentType:(long long)arg1 glyphColor:(BOOL)arg2;
+ (id)viewCache;

- (void).cxx_destruct;
- (long long)acknowledgmentType;
- (void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(id /* block */)arg3;
- (double)animationDuration;
- (id)glyphColor;
- (struct CGPoint { double x1; double x2; })glyphOffset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 color:(BOOL)arg2;
- (void)setGlyphColor:(id)arg1;

@end