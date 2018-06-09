/* made by EzioChiu.
 */

@protocol _UIFloatingContentViewDelegate <NSObject>

@required

- (void)floatingContentView:(_UIFloatingContentView *)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;

@optional

- (void)floatingContentView:(_UIFloatingContentView *)arg1 didFinishTransitioningToState:(unsigned long long)arg2;

@end