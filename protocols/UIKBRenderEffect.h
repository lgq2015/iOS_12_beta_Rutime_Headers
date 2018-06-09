/* made by EzioChiu.
 */

@protocol UIKBRenderEffect <NSObject, NSCopying>

@required

- (struct CGColor { }*)CGColor;
- (UIKBGradient *)gradient;
- (bool)isValid;
- (SEL)renderSelector;
- (bool)renderUnder;
- (void)setWeight:(double)arg1;
- (bool)usesRGBColors;
- (double)weight;

@end