/* made by EzioChiu.
 */

@protocol SFServiceViewControllerProtocol <NSObject>

@required

- (void)decideCookieSharingForURL:(NSURL *)arg1 callbackURLScheme:(NSString *)arg2;
- (void)didDetectRemoteViewControllerViewIsHidden;
- (void)didDetectUserInteractionFromHostApp;
- (void)didFetchCustomActivities:(NSArray *)arg1 excludedActivityTypes:(NSArray *)arg2;
- (void)loadURL:(NSURL *)arg1;
- (void)openCurrentURLInSafari;
- (void)repostNotificationInViewService:(NSString *)arg1;
- (void)setConfiguration:(SFSafariViewControllerConfiguration *)arg1;
- (void)setDismissButtonStyle:(long long)arg1;
- (void)setDisplayMode:(long long)arg1;
- (void)setIsRunningTransitionAnimation:(bool)arg1;
- (void)setPreferredBarTintColor:(UIColor *)arg1;
- (void)setPreferredControlTintColor:(UIColor *)arg1;
- (void)updateScrollViewIndicatorVerticalInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 horizontalInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;

@end