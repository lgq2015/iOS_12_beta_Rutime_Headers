/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDWorkoutCondenserBufferDatum : NSObject {
    NSUUID * _UUID;
    double  _endTime;
    bool  _isSeries;
    double  _startTime;
    double  _value;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly) double endTime;
@property (nonatomic, readonly) bool isSeries;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) double value;

- (void).cxx_destruct;
- (id)UUID;
- (double)endTime;
- (id)init;
- (id)initWithStartTime:(double)arg1 endTime:(double)arg2 value:(double)arg3 UUID:(id)arg4 series:(bool)arg5;
- (bool)isSeries;
- (double)startTime;
- (double)value;

@end
