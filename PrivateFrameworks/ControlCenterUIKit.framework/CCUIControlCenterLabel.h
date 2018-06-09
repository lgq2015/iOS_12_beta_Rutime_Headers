/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

@interface CCUIControlCenterLabel : UILabel {
    unsigned long long  _style;
}

@property (nonatomic) unsigned long long style;

- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateEffects;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)style;

@end