/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFNumberRange : NSObject {
    NSNumber * _maxValue;
    NSNumber * _midValue;
    NSNumber * _minValue;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSNumber *maxValue;
@property (nonatomic, copy) NSNumber *midValue;
@property (nonatomic, copy) NSNumber *minValue;
@property (nonatomic, readonly) unsigned long long type;

+ (id)rangeWithMaxValue:(id)arg1 minValue:(id)arg2;
+ (id)valueWithValue:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(unsigned long long)arg1;
- (id)maxValue;
- (id)midValue;
- (id)minValue;
- (void)setMaxValue:(id)arg1;
- (void)setMidValue:(id)arg1;
- (void)setMinValue:(id)arg1;
- (unsigned long long)type;

@end
