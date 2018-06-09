/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartValueAxis : TSCHChartAxis

@property (nonatomic, readonly) NSNumber *userMax;
@property (nonatomic, readonly) NSNumber *userMin;

+ (id)axisForInfo:(id)arg1;
+ (unsigned char)styleOwnerPathType;

- (void)adjustMinMaxForDataRangeInAnalysis:(id)arg1;
- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg1;
- (id)defaultProperties;
- (bool)editableFormatForValueStrings;
- (id)g_genericToSpecificPropertyMap;
- (struct pair<TSCH3DAxisLabelEnumerator *, TSCH3DAxisLabelEnumerator *> { id x1; })labelEnumeratorPair;
- (id)p_GetGenericToValuePropertyMap;
- (struct { double x1; double x2; double x3; unsigned long long x4; })p_axisDescFromFixedMinValue:(double)arg1 fixedMaxValue:(double)arg2 spreadRanges:(const struct { double x1; double x2; }*)arg3;
- (struct { double x1; double x2; double x3; unsigned long long x4; })p_axisDescFromFixedNegativeMinValue:(double)arg1 positiveMaxValue:(double)arg2 spreadRanges:(const struct { double x1; double x2; }*)arg3;
- (struct { double x1; double x2; double x3; unsigned long long x4; })p_axisDescFromFixedPositiveMinValue:(double)arg1 positiveMaxValue:(double)arg2 spreadRanges:(const struct { double x1; double x2; }*)arg3;
- (struct { double x1; double x2; double x3; unsigned long long x4; })p_axisDescFromMinValue:(double)arg1 maxValue:(double)arg2 userValues:(long long)arg3;
- (struct { double x1; double x2; double x3; unsigned long long x4; })p_axisDescFromNegativeMinValue:(double)arg1 fixedPositiveMaxValue:(double)arg2 spreadRanges:(const struct { double x1; double x2; }*)arg3;
- (struct { double x1; double x2; double x3; unsigned long long x4; })p_axisDescFromNegativeMinValue:(double)arg1 positiveMaxValue:(double)arg2 spreadRanges:(const struct { double x1; double x2; }*)arg3;
- (struct { double x1; double x2; double x3; unsigned long long x4; })p_axisDescFromPositiveMinValue:(double)arg1 fixedPositiveMaxValue:(double)arg2 spreadRanges:(const struct { double x1; double x2; }*)arg3;
- (struct { double x1; double x2; double x3; unsigned long long x4; })p_axisDescFromPositiveMinValue:(double)arg1 positiveMaxValue:(double)arg2 spreadRanges:(const struct { double x1; double x2; }*)arg3;
- (double)p_calculateAxisDeltaFromSpread:(double)arg1 spreadRanges:(const struct { double x1; double x2; }*)arg2;
- (struct { double x1; double x2; double x3; unsigned long long x4; })p_calculateAxisDescFromMinValue:(double)arg1 maxValue:(double)arg2 userValues:(long long)arg3;
- (id)p_computeMajorGridlines:(long long)arg1 analysis:(id)arg2;
- (id)p_computeMajorGridlinesAutomaticallyInAnalysis:(id)arg1 forHorizChart:(bool)arg2;
- (void)p_includeZeroWithMinValue:(double*)arg1 maxValue:(double*)arg2 userValues:(long long)arg3;
- (int)specificPropertyForGeneric:(int)arg1;
- (bool)supportsAxisValueLabels;
- (bool)supportsReferenceLines;
- (void)updateModelAxisAnalysis:(id)arg1;
- (void)updateModelMinMaxForErrorBarsOnSeries:(id)arg1 axisID:(id)arg2 analysis:(id)arg3;
- (void)updateModelMinMaxForTrendLineOnSeries:(id)arg1 axisID:(id)arg2 analysis:(id)arg3;
- (id)userMax;
- (id)userMin;
- (double)validateUserMaxForDouble:(double)arg1;
- (double)validateUserMinForDouble:(double)arg1;

@end