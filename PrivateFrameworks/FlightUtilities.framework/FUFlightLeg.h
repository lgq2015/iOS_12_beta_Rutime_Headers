/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

@interface FUFlightLeg : NSObject <NSSecureCoding> {
    FUFlightStep * _arrival;
    NSString * _baggageClaim;
    FUFlightStep * _departure;
    double  _duration;
    long long  _status;
}

@property (retain) FUFlightStep *arrival;
@property (retain) NSString *baggageClaim;
@property (readonly) double currentProgress;
@property (retain) FUFlightStep *departure;
@property double duration;
@property long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)arrival;
- (id)baggageClaim;
- (double)currentProgress;
- (id)departure;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setArrival:(id)arg1;
- (void)setBaggageClaim:(id)arg1;
- (void)setDeparture:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end