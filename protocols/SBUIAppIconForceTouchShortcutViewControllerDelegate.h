/* made by EzioChiu.
 */

@protocol SBUIAppIconForceTouchShortcutViewControllerDelegate <NSObject>

@required

- (void)appIconForceTouchShortcutViewController:(SBUIAppIconForceTouchShortcutViewController *)arg1 activateApplicationShortcutItem:(SBSApplicationShortcutItem *)arg2;
- (bool)appIconForceTouchShortcutViewControllerShouldHandleGestureRecognizers:(SBUIAppIconForceTouchShortcutViewController *)arg1;

@end
