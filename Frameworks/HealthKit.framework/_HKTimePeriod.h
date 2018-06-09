/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKTimePeriod : NSObject <NSCopying, NSSecureCoding, _HKDateBounded> {
    NSDate * _endDate;
    NSDate * _startDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDate *startDate;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;
+ (id)timePeriodWithStartDate:(id)arg1 endDate:(id)arg2;

- (void).cxx_destruct;
- (long long)compareByEndDate:(id)arg1;
- (long long)compareByStartDate:(id)arg1;
- (bool)containsDate:(id)arg1;
- (bool)containsTimePeriod:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (bool)endsBeforeDate:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)overlapsTimePeriod:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;
- (bool)startsAfterDate:(id)arg1;

@end