/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

@interface CCUIControlCenterVisualEffect : UIVisualEffect {
    long long  _style;
}

+ (id)_blackEffect;
+ (id)_glyphOrTextOnPlatterOrBackgroundEffect;
+ (id)_grayEffect;
+ (id)_primaryHighlightedTextOnPlatterEffect;
+ (id)_primaryRegularTextOnPlatterEffect;
+ (id)_secondaryHighlightedTextOnPlatterEffect;
+ (id)_secondaryRegularTextOnPlatterEffect;
+ (id)_whiteEffect;
+ (id)effectWithControlState:(unsigned long long)arg1 inContext:(long long)arg2;
+ (id)effectWithStyle:(long long)arg1;

- (long long)_style;
- (id)contentsMultiplyColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)effectConfig;
- (unsigned long long)hash;
- (id)initWithPrivateStyle:(long long)arg1;
- (bool)isEqual:(id)arg1;

@end