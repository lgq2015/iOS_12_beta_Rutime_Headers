/* made by EzioChiu.
 */

@protocol UIPDFPageViewDelegate

@optional

- (Class)classForAnnotationType:(const char *)arg1;
- (void)didTap:(UIPDFPageView *)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)doubleTapIn:(UIPDFPageView *)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (NSArray *)menuItems:(NSArray *)arg1 forPage:(UIPDFPageView *)arg2;
- (void)pageWasRendered:(UIPDFPageView *)arg1;
- (void)resetZoom:(UIPDFPageView *)arg1;
- (void)selectionDidEndTracking:(UIPDFPageView *)arg1;
- (bool)selectionWillTrack:(UIPDFPageView *)arg1;
- (bool)shouldRecognizeTapIn:(UIPDFPageView *)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)zoom:(UIPDFPageView *)arg1 to:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3 kind:(int)arg4;

@end