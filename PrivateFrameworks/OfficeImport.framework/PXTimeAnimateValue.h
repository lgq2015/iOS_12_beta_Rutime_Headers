/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PXTimeAnimateValue : NSObject {
    NSString * mFormula;
    bool  mHasPercentTime;
    double  mPercentTime;
    id  mVariant;
}

- (void)dealloc;
- (id)formula;
- (bool)hasPercentTime;
- (id)init;
- (double)percentTime;
- (void)setFormula:(id)arg1;
- (void)setPercentTime:(double)arg1;
- (void)setVariant:(id)arg1;
- (id)variant;

@end
