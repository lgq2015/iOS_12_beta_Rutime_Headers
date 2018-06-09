/* made by EzioChiu.
 */

@protocol PKMicaResizableView <NSObject>

@required

- (struct CGSize { double x1; double x2; })boundsSizeToMatchPointScale:(double)arg1;
- (double)pointScaleToMatchBoundsSize:(struct CGSize { double x1; double x2; })arg1;

@end