/* made by EzioChiu.
 */

@protocol UIKeyboardEmojiCategoryUpdateDelegate <NSObject>

@required

- (long long)reloadCategoryForOffsetPercentage:(double)arg1 withSender:(id)arg2;
- (void)reloadForCategory:(long long)arg1 withSender:(id)arg2;

@end