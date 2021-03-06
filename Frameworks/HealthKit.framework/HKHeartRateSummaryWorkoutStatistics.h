/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHeartRateSummaryWorkoutStatistics : HKHeartRateSummaryStatistics {
    HKQuantity * _averageHeartRate;
    HKQuantity * _maximumHeartRate;
}

@property (setter=_setAverageHeartRate:, nonatomic, retain) HKQuantity *averageHeartRate;
@property (setter=_setMaximumHeartRate:, nonatomic, retain) HKQuantity *maximumHeartRate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setAverageHeartRate:(id)arg1;
- (void)_setMaximumHeartRate:(id)arg1;
- (id)averageHeartRate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)maximumHeartRate;

@end
