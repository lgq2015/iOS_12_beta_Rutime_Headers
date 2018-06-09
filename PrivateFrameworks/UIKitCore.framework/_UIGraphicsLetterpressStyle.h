/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIGraphicsLetterpressStyle : NSObject <NSCopying> {
    UIColor * bottomGradientColor;
    UIColor * embossHighlightColor;
    UIColor * embossShadowColor;
    double  embossSize;
    double  innerOpacity;
    int  innerShadowBlendMode;
    double  innerShadowBlur;
    UIColor * innerShadowColor;
    struct CGPoint { 
        double x; 
        double y; 
    }  innerShadowOffset;
    int  outerShadowBlendMode;
    double  outerShadowBlur;
    UIColor * outerShadowColor;
    struct CGPoint { 
        double x; 
        double y; 
    }  outerShadowOffset;
    UIColor * topGradientColor;
}

@property (nonatomic, retain) UIColor *bottomGradientColor;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic, retain) UIColor *embossHighlightColor;
@property (nonatomic, retain) UIColor *embossShadowColor;
@property (nonatomic) double embossSize;
@property (nonatomic) double innerOpacity;
@property (nonatomic) int innerShadowBlendMode;
@property (nonatomic) double innerShadowBlur;
@property (nonatomic, retain) UIColor *innerShadowColor;
@property (nonatomic) struct CGPoint { double x1; double x2; } innerShadowOffset;
@property (nonatomic) int outerShadowBlendMode;
@property (nonatomic) double outerShadowBlur;
@property (nonatomic, retain) UIColor *outerShadowColor;
@property (nonatomic) struct CGPoint { double x1; double x2; } outerShadowOffset;
@property (nonatomic, retain) UIColor *topGradientColor;

+ (id)defaultLetterpressStyle;
+ (id)old2xLetterpressStyle;

- (void).cxx_destruct;
- (id)bottomGradientColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)embossHighlightColor;
- (id)embossShadowColor;
- (double)embossSize;
- (double)innerOpacity;
- (int)innerShadowBlendMode;
- (double)innerShadowBlur;
- (id)innerShadowColor;
- (struct CGPoint { double x1; double x2; })innerShadowOffset;
- (bool)isEqual:(id)arg1;
- (int)outerShadowBlendMode;
- (double)outerShadowBlur;
- (id)outerShadowColor;
- (struct CGPoint { double x1; double x2; })outerShadowOffset;
- (void)setBottomGradientColor:(id)arg1;
- (void)setEmbossHighlightColor:(id)arg1;
- (void)setEmbossShadowColor:(id)arg1;
- (void)setEmbossSize:(double)arg1;
- (void)setInnerOpacity:(double)arg1;
- (void)setInnerShadowBlendMode:(int)arg1;
- (void)setInnerShadowBlur:(double)arg1;
- (void)setInnerShadowColor:(id)arg1;
- (void)setInnerShadowOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOuterShadowBlendMode:(int)arg1;
- (void)setOuterShadowBlur:(double)arg1;
- (void)setOuterShadowColor:(id)arg1;
- (void)setOuterShadowOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTopGradientColor:(id)arg1;
- (id)topGradientColor;

@end