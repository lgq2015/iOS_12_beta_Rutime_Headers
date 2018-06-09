/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDChartTypeWithGrouping : CHDChartType {
    int  mGrouping;
}

- (id)chdGroupingString;
- (int)grouping;
- (id)initWithChart:(id)arg1;
- (bool)isGroupingStacked;
- (void)setGrouping:(int)arg1;

@end