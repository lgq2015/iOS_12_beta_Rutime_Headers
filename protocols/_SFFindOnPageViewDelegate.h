/* made by EzioChiu.
 */

@protocol _SFFindOnPageViewDelegate <NSObject>

@optional

- (void)updateFindCompletionProviderWithMatchesCount:(unsigned long long)arg1 forString:(NSString *)arg2 forFindOnPageView:(_SFFindOnPageView *)arg3;
- (void)visibilityWillChangeForFindOnPageView:(_SFFindOnPageView *)arg1;
- (WKWebView *)webViewForFindOnPageView:(_SFFindOnPageView *)arg1;

@end
