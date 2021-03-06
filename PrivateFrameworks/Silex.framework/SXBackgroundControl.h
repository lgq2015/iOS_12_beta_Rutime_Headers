/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXBackgroundControl : UIControl {
    NSMutableDictionary * _backgroundColors;
}

@property (nonatomic, retain) NSMutableDictionary *backgroundColors;

- (void).cxx_destruct;
- (id)backgroundColors;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)seperatedControlStatesForControlState:(unsigned long long)arg1;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundColors:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)updateBackgroundColor;

@end
