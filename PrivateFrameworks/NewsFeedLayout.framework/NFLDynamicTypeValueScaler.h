/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLDynamicTypeValueScaler : NSObject {
    double  _AL;
    double  _AM;
    double  _AXL;
    double  _AXXL;
    double  _AXXXL;
    double  _L;
    double  _M;
    double  _S;
    double  _XL;
    double  _XS;
    double  _XXL;
    double  _XXXL;
}

@property (nonatomic) double AL;
@property (nonatomic) double AM;
@property (nonatomic) double AXL;
@property (nonatomic) double AXXL;
@property (nonatomic) double AXXXL;
@property (nonatomic) double L;
@property (nonatomic) double M;
@property (nonatomic) double S;
@property (nonatomic) double XL;
@property (nonatomic) double XS;
@property (nonatomic) double XXL;
@property (nonatomic) double XXXL;
@property (nonatomic, readonly) NSArray *orderedSizeCategories;

+ (id)valueSpecifierWithXS:(double)arg1 L:(double)arg2 XXXL:(double)arg3 AXXXL:(double)arg4;
+ (id)valueSpecifierWithXSFactor:(double)arg1 largeSize:(double)arg2 XXXLFactor:(double)arg3 AXXXLFactor:(double)arg4;

- (double)AL;
- (double)AM;
- (double)AXL;
- (double)AXXL;
- (double)AXXXL;
- (double)L;
- (double)M;
- (double)S;
- (double)XL;
- (double)XS;
- (double)XXL;
- (double)XXXL;
- (void)_nextSpecifiedCategoryStartingAtCategory:(id)arg1 outValue:(double*)arg2 outIndex:(unsigned long long*)arg3;
- (void)_previousSpecifiedCategoryStartingAtCategory:(id)arg1 outValue:(double*)arg2 outIndex:(unsigned long long*)arg3;
- (id)init;
- (id)initWithWithXS:(double)arg1 S:(double)arg2 M:(double)arg3 L:(double)arg4 XL:(double)arg5 XXL:(double)arg6 XXXL:(double)arg7 AM:(double)arg8 AL:(double)arg9 AXL:(double)arg10 AXXL:(double)arg11 AXXXL:(double)arg12;
- (id)orderedSizeCategories;
- (double)scaledValueForCurrentPreferredSizeCategory;
- (double)scaledValueForSizeCategory:(id)arg1;
- (void)setAL:(double)arg1;
- (void)setAM:(double)arg1;
- (void)setAXL:(double)arg1;
- (void)setAXXL:(double)arg1;
- (void)setAXXXL:(double)arg1;
- (void)setL:(double)arg1;
- (void)setM:(double)arg1;
- (void)setS:(double)arg1;
- (void)setXL:(double)arg1;
- (void)setXS:(double)arg1;
- (void)setXXL:(double)arg1;
- (void)setXXXL:(double)arg1;
- (double)specifiedValueForContentSizeCategory:(id)arg1;

@end