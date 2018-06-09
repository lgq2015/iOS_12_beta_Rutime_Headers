/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
 */

@interface CDDHistoryWindow : NSObject {
    double  _duration;
    double  _recurrenceDelta;
    double  _recurrenceWidth;
    NSDate * _start;
}

@property (readonly) double duration;
@property (readonly) double recurrenceDelta;
@property (readonly) double recurrenceWidth;
@property (readonly) NSDate *start;

+ (id)allTimeHistoryWindow;
+ (id)dailyHistoryWindowWithWidth:(double)arg1 endingOnDate:(id)arg2 historyLengthInDays:(int)arg3;
+ (id)singleDayHistoryWindowWithWidth:(double)arg1 forDate:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (double)duration;
- (id)initWithStart:(id)arg1 duration:(double)arg2 recurrenceDelta:(double)arg3 recurrenceWidth:(double)arg4 error:(id*)arg5;
- (double)recurrenceDelta;
- (double)recurrenceWidth;
- (id)start;

@end