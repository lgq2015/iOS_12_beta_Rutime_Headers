/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKHorizontalSingleLineSeriesCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {
    bool  _groupToPrevious;
    long long  _markStyle;
    <HKGraphSeriesBlockCoordinateInfo> * _userInfo;
    double  _xValue;
    long long  _yValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double endXValue;
@property (nonatomic, readonly) bool groupToPrevious;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long markStyle;
@property (nonatomic, readonly) double startXValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HKGraphSeriesBlockCoordinateInfo> *userInfo;
@property (nonatomic, readonly) double xValue;
@property (nonatomic, readonly) long long yValue;

- (void).cxx_destruct;
- (id)copyWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 roundToViewScale:(bool)arg2;
- (double)endXValue;
- (bool)groupToPrevious;
- (id)initWithXValue:(double)arg1 yValue:(long long)arg2 groupToPrevious:(bool)arg3 markStyle:(long long)arg4 userInfo:(id)arg5;
- (long long)markStyle;
- (double)startXValue;
- (id)userInfo;
- (double)xValue;
- (long long)yValue;

@end