/* made by EzioChiu.
 */

@protocol _UIRemoteKeyboardViewSource <NSObject>

@required

- (void)checkPlaceholdersForRemoteKeyboards;
- (<_UIRemoteKeyboardControllerDelegate> *)controllerDelegate;
- (bool)dontDismissReachability;
- (UIView *)hostView;
- (UIInputViewSet *)inputViewSet;
- (bool)isOnScreenRotating;
- (void)setControllerDelegate:(id <_UIRemoteKeyboardControllerDelegate>)arg1;
- (void)setDontDismissReachability:(bool)arg1;
- (void)updateForKeyplaneChangeWithContext:(UIKBKeyplaneChangeContext *)arg1;

@end
