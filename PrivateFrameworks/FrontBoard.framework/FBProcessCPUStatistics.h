/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBProcessCPUStatistics : NSObject {
    BSMachPortTaskNameRight * _taskNameRight;
    struct FBProcessTimes { 
        double beginUserCPUElapsedTime; 
        double beginSystemCPUElapsedTime; 
        double beginIdleCPUElapsedTime; 
        double beginApplicationCPUElapsedTime; 
    }  _times;
}

@property (nonatomic, readonly) double totalElapsedIdleTime;
@property (nonatomic, readonly) double totalElapsedSystemTime;
@property (nonatomic, readonly) double totalElapsedTime;
@property (nonatomic, readonly) double totalElapsedUserTime;

- (void).cxx_destruct;
- (double)_elapsedCPUTime;
- (void)_getApplicationCPUTimesForUser:(double*)arg1 system:(double*)arg2 idle:(double*)arg3;
- (void)_hostwideUserElapsedCPUTime:(double*)arg1 systemElapsedCPUTime:(double*)arg2 idleElapsedCPUTime:(double*)arg3;
- (id)descriptionForCrashReport;
- (id)initWithTaskNameRight:(id)arg1;
- (double)totalElapsedIdleTime;
- (double)totalElapsedSystemTime;
- (double)totalElapsedTime;
- (double)totalElapsedUserTime;
- (void)update;

@end
