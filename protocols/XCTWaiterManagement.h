/* made by EzioChiu.
 */

@protocol XCTWaiterManagement <NSObject>

@required

- (void)interruptForWaiter:(id <XCTWaiterManagement>)arg1;
- (bool)isInProgress;

@end
