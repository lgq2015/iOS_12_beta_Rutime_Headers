/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPieSeriesModelCache : NSObject {
    TSCHChartAxis * mAxis;
    TSCHChartInfo * mChartInfo;
    TSCHChartModel * mChartModel;
    TSCHChartSeries * mCurrentSeries;
    double  mCurrentSeriesAngleSweep;
    double  mCurrentSeriesAxisValue;
    unsigned long long  mCurrentSeriesIndex;
    bool  mCurrentSeriesNullData;
    double  mCurrentSeriesPercentage;
    double  mCurrentSeriesStartAngle;
    float  mEffectiveLabelExplosion;
    float  mEffectiveWedgeExplosion;
    double  mEndAngle;
    bool  mGroupedShadow;
    bool  mIsSingleCircleSpecialCase;
    float  mLabelExplosion;
    NSString * mLabelString;
    double  mMidAngle;
    unsigned long long  mNumberOfSeries;
    TSWPParagraphStyle * mParagraphStyle;
    TSDFill * mSeriesFill;
    NSString * mSeriesNameLabelString;
    double  mSeriesOpacity;
    TSDShadow * mSeriesShadow;
    TSDStroke * mSeriesStroke;
    TSCHChartSeries * mSingleCircleSeriesElement;
    double  mTotalValue;
    NSString * mValueLabelString;
    float  mWedgeExplosion;
}

@property (readonly) TSCHChartAxis *axis;
@property (readonly) float effectiveLabelExplosion;
@property (readonly) float effectiveWedgeExplosion;
@property (readonly) double endAngle;
@property (readonly) bool groupedShadow;
@property (readonly) float labelExplosion;
@property (readonly) NSString *labelString;
@property (readonly) double midAngle;
@property (readonly) bool nullData;
@property (readonly) TSWPParagraphStyle *paragraphStyle;
@property (readonly) double percentage;
@property (readonly) TSCHChartSeries *series;
@property (readonly) double seriesAxisValue;
@property (readonly) TSDFill *seriesFill;
@property (readonly) unsigned long long seriesIndex;
@property (readonly) NSString *seriesNameLabelString;
@property (readonly) double seriesOpacity;
@property (readonly) TSDShadow *seriesShadow;
@property (readonly) TSDStroke *seriesStroke;
@property (readonly) bool shouldRenderCalloutLine;
@property (readonly) bool shouldRenderLabel;
@property (readonly) double startAngle;
@property (readonly) double totalValue;
@property (readonly) NSString *valueLabelString;
@property (readonly) float wedgeExplosion;

- (void).cxx_destruct;
- (id)axis;
- (float)effectiveLabelExplosion;
- (float)effectiveWedgeExplosion;
- (double)endAngle;
- (bool)groupedShadow;
- (id)init;
- (id)initWithPrior:(id)arg1 orChartModel:(id)arg2 forSeries:(unsigned long long)arg3;
- (float)labelExplosion;
- (id)labelString;
- (id)labelStringForType:(long long)arg1;
- (id)labelStringWithValueLabelString:(id)arg1 seriesNameLabelString:(id)arg2;
- (double)midAngle;
- (bool)nullData;
- (id)paragraphStyle;
- (double)percentage;
- (id)series;
- (double)seriesAxisValue;
- (id)seriesFill;
- (unsigned long long)seriesIndex;
- (id)seriesNameLabelString;
- (double)seriesOpacity;
- (id)seriesShadow;
- (id)seriesStroke;
- (bool)shouldRenderCalloutLine;
- (bool)shouldRenderLabel;
- (double)startAngle;
- (double)totalValue;
- (id)valueLabelString;
- (float)wedgeExplosion;

@end