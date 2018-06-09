/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKSolarPath : NSObject {
    double  _altitude;
    UIBezierPath * _bezierPath;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _points;
    NTKSolarTimeModel * _solarTimeModel;
    bool  _usePlaceholderData;
    bool  _verticallyFitsPathToBounds;
}

@property (nonatomic, readonly) UIBezierPath *bezierPath;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) NTKSolarTimeModel *solarTimeModel;
@property (nonatomic, readonly) bool verticallyFitsPathToBounds;

- (void).cxx_destruct;
- (id)_computeSolarPath;
- (double)altitudeAtPercentage:(double)arg1;
- (double)altitudeAtX:(double)arg1;
- (id)bezierPath;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 solarTimeModel:(id)arg2 verticallyFitsPathToBounds:(bool)arg3 usePlaceholderData:(bool)arg4;
- (id)solarTimeModel;
- (bool)verticallyFitsPathToBounds;

@end