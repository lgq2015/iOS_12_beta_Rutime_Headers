/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFDailyForecastRequest : WFAggregateForecastRequest

+ (bool)supportsSecureCoding;

- (id)description;
- (id)initWithLocation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startWithService:(id)arg1;

@end
