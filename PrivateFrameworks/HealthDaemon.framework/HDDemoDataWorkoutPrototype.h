/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDemoDataWorkoutPrototype : NSObject {
    double  _duration;
    HKQuantity * _goal;
    unsigned long long  _goalType;
    long long  _numLapsPerSegment;
    double  _restTimePerSegment;
    double  _startTimeOffsetInDay;
    double  _swimTimePerSegment;
    double  _swimmingSegmentDistanceInYards;
    long long  _swimmingStrokeStyle;
    double  _totalDistanceCyclingInMiles;
    double  _totalDistanceSwimmingInYards;
    double  _totalDistanceWalkingInMiles;
    double  _totalEnergyBurnedInKcal;
    long long  _totalSwimmingSegments;
    unsigned long long  _workoutActivityType;
}

@property (nonatomic) double duration;
@property (nonatomic, retain) HKQuantity *goal;
@property (nonatomic) unsigned long long goalType;
@property (nonatomic) long long numLapsPerSegment;
@property (nonatomic) double restTimePerSegment;
@property (nonatomic) double startTimeOffsetInDay;
@property (nonatomic) double swimTimePerSegment;
@property (nonatomic) double swimmingSegmentDistanceInYards;
@property (nonatomic) long long swimmingStrokeStyle;
@property (nonatomic) double totalDistanceCyclingInMiles;
@property (nonatomic) double totalDistanceSwimmingInYards;
@property (nonatomic) double totalDistanceWalkingInMiles;
@property (nonatomic) double totalEnergyBurnedInKcal;
@property (nonatomic) long long totalSwimmingSegments;
@property (nonatomic) unsigned long long workoutActivityType;

+ (id)HIITPrototype;
+ (id)ellipticalPrototype;
+ (id)hikingPrototype;
+ (id)runningPrototype;
+ (id)swimmingPrototype;
+ (id)thirdPartyWorkoutPrototype;
+ (id)walkingPrototype;
+ (id)workoutPrototypeWithActivityType:(unsigned long long)arg1 goalType:(unsigned long long)arg2 goal:(id)arg3 startTime:(double)arg4 duration:(double)arg5 energyBurned:(double)arg6 distanceWalking:(double)arg7 distanceCycling:(double)arg8;
+ (id)workoutPrototypeWithActivityType:(unsigned long long)arg1 goalType:(unsigned long long)arg2 goal:(id)arg3 startTime:(double)arg4 duration:(double)arg5 energyBurned:(double)arg6 distanceWalking:(double)arg7 distanceCycling:(double)arg8 distanceSwimming:(double)arg9 distanceSwimmingSegment:(double)arg10 totalSwimmingSegments:(long long)arg11 numLapsPerSegment:(long long)arg12 swimTimePerSegment:(double)arg13 restTimePerSegment:(double)arg14 swimmingStrokeStyle:(long long)arg15;
+ (id)yogaPrototype;

- (void).cxx_destruct;
- (double)duration;
- (id)goal;
- (unsigned long long)goalType;
- (long long)numLapsPerSegment;
- (double)restTimePerSegment;
- (void)setDuration:(double)arg1;
- (void)setGoal:(id)arg1;
- (void)setGoalType:(unsigned long long)arg1;
- (void)setNumLapsPerSegment:(long long)arg1;
- (void)setRestTimePerSegment:(double)arg1;
- (void)setStartTimeOffsetInDay:(double)arg1;
- (void)setSwimTimePerSegment:(double)arg1;
- (void)setSwimmingSegmentDistanceInYards:(double)arg1;
- (void)setSwimmingStrokeStyle:(long long)arg1;
- (void)setTotalDistanceCyclingInMiles:(double)arg1;
- (void)setTotalDistanceSwimmingInYards:(double)arg1;
- (void)setTotalDistanceWalkingInMiles:(double)arg1;
- (void)setTotalEnergyBurnedInKcal:(double)arg1;
- (void)setTotalSwimmingSegments:(long long)arg1;
- (void)setWorkoutActivityType:(unsigned long long)arg1;
- (double)startTimeOffsetInDay;
- (double)swimTimePerSegment;
- (double)swimmingSegmentDistanceInYards;
- (long long)swimmingStrokeStyle;
- (double)totalDistanceCyclingInMiles;
- (double)totalDistanceSwimmingInYards;
- (double)totalDistanceWalkingInMiles;
- (double)totalEnergyBurnedInKcal;
- (long long)totalSwimmingSegments;
- (unsigned long long)workoutActivityType;

@end