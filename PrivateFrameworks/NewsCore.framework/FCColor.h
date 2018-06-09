/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCColor : NSObject <NSCopying> {
    double  _alpha;
    double  _blue;
    double  _green;
    double  _red;
}

@property (nonatomic, readonly) double alpha;
@property (nonatomic, readonly) double blue;
@property (nonatomic, readonly) double green;
@property (nonatomic, readonly) double red;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)blackColor;
+ (id)clearColor;
+ (id)colorWithHexString:(id)arg1;
+ (id)colorWithPBColor:(id)arg1;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)whiteColor;

- (double)alpha;
- (double)blue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)green;
- (unsigned long long)hash;
- (id)init;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isSimilarToColor:(id)arg1 withinPercentage:(double)arg2;
- (id)legibleColor;
- (id)pbColor;
- (void)readDeconstructedRepresentationWithAcccessor:(id /* block */)arg1;
- (double)red;

// Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout

- (id)nfl_asUIColor;

@end