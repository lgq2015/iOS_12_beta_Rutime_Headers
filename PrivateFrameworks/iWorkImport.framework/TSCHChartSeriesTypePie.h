/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartSeriesTypePie : TSCHChartSeriesType

- (id)axisTypesForValueLabels;
- (id)elementBuilder;
- (int)fillPropertyType;
- (id)fillPropertyTypeName;
- (unsigned int)filterChartLabelPosition:(unsigned int)arg1;
- (unsigned int)filterChartLabelPosition:(unsigned int)arg1 forSeries:(id)arg2;
- (bool)floatValueForLabelExplosion:(float*)arg1 series:(id)arg2;
- (id)g_genericToSpecificPropertyMapPie;
- (id)genericToSpecificPropertyMap;
- (id)init;
- (id)inspectorLocalizedValueLabelsDisclosureTitle;
- (id)inspectorLocalizedValueLabelsTabName;
- (id)legalChartLabelPositions;
- (int)legendBadgeType;
- (id)seriesFillLabelUIString;
- (id)supportedValueLabelsAxisCombinations;
- (bool)supportsCalloutLines;
- (bool)supportsValueLabelsSeriesName;
- (id)userInterfaceNameForLabelPosition:(id)arg1;
- (unsigned long long)valueDimensions;

@end
