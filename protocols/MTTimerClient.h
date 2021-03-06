/* made by EzioChiu.
 */

@protocol MTTimerClient <NSObject>

@required

- (void)nextTimerChanged:(MTTimer *)arg1;
- (void)timerDismissed:(MTTimer *)arg1;
- (void)timerFired:(MTTimer *)arg1;
- (void)timersAdded:(NSArray *)arg1;
- (void)timersRemoved:(NSArray *)arg1;
- (void)timersUpdated:(NSArray *)arg1;

@end
