/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartCategoryAxis : TSCHChartAxis

+ (id)axisForInfo:(id)arg1;
+ (unsigned char)styleOwnerPathType;

- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg1;
- (id)defaultProperties;
- (id)g_genericToSpecificPropertyMap;
- (unsigned long long)indexForSelectionPathLabelIndex:(unsigned long long)arg1;
- (bool)isCategory;
- (bool)isRangeContinuous;
- (struct pair<TSCH3DAxisLabelEnumerator *, TSCH3DAxisLabelEnumerator *> { id x1; })labelEnumeratorPair;
- (id)p_getGenericToCategoryPropertyMap;
- (id)p_getGenericToCategoryPropertyMapForMultiData;
- (id)p_getGenericToCategoryPropertyMapForNonMultiData;
- (unsigned long long)selectionPathLabelIndexForIndex:(unsigned long long)arg1;
- (int)specificPropertyForGeneric:(int)arg1;

@end