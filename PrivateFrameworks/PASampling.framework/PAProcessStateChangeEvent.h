/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAProcessStateChangeEvent : NSObject {
    double  _machTimestamp;
    unsigned long long  _stateChangeType;
    PASampleTaskData * _taskData;
}

@property (nonatomic, readonly) double machTimestamp;
@property (nonatomic) unsigned long long stateChangeType;
@property (nonatomic, readonly) PASampleTaskData *taskData;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initUnknownProcessStateChangeEventWithPid:(int)arg1 machTime:(double)arg2 stateChangeType:(unsigned long long)arg3;
- (id)initWithTaskData:(id)arg1 machTime:(double)arg2 stateChangeType:(unsigned long long)arg3;
- (double)machTimestamp;
- (void)setStateChangeType:(unsigned long long)arg1;
- (unsigned long long)stateChangeType;
- (id)taskData;

@end
