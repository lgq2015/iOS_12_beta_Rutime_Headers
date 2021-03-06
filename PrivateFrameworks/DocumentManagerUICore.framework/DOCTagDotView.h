/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCTagDotView : UIView <DOCTagIconView> {
    bool  _checked;
    CALayer * _checkmarkLayer;
    CAShapeLayer * _dotLayer;
    CAShapeLayer * _noneDotLayer;
    long long  _tagColor;
}

@property (nonatomic) bool checked;
@property (nonatomic, readonly) CALayer *checkmarkLayer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CAShapeLayer *dotLayer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CAShapeLayer *noneDotLayer;
@property (readonly) Class superclass;
@property (nonatomic) long long tagColor;

- (void).cxx_destruct;
- (bool)checked;
- (id)checkmarkLayer;
- (id)dotLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)noneDotLayer;
- (void)setChecked:(bool)arg1;
- (void)setTagColor:(long long)arg1;
- (long long)tagColor;
- (void)tintColorDidChange;
- (void)updateLayoutOfLayers;

@end
