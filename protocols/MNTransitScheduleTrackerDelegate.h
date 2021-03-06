/* made by EzioChiu.
 */

@protocol MNTransitScheduleTrackerDelegate <NSObject>

@required

- (void)transitScheduleTracker:(MNTransitScheduleTracker *)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2;
- (void)transitScheduleTracker:(MNTransitScheduleTracker *)arg1 didUpdateFeedback:(GEOAlightNotificationFeedback *)arg2 forAlightingStepAtIndex:(unsigned long long)arg3;

@optional

- (void)transitScheduleTracker:(MNTransitScheduleTracker *)arg1 didArriveAtStepIndex:(unsigned long long)arg2;
- (void)transitScheduleTracker:(MNTransitScheduleTracker *)arg1 willArriveAtStepIndex:(unsigned long long)arg2 inTimeInterval:(double)arg3;

@end
