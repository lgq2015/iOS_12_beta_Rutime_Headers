/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKLegendString : CALayer {
    double  _baselineDistanceFromBottom;
    struct __CTLine { } * _line;
    NSAttributedString * _string;
}

@property (nonatomic, readonly) double baselineDistanceFromBottom;
@property (nonatomic, retain) NSAttributedString *string;

- (void).cxx_destruct;
- (id)actionForKey:(id)arg1;
- (double)baselineDistanceFromBottom;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)init;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setString:(id)arg1;
- (void)sizeToFit;
- (id)string;

@end