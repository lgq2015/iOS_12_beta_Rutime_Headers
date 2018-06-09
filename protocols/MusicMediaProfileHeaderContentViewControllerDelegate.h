/* made by EzioChiu.
 */

@protocol MusicMediaProfileHeaderContentViewControllerDelegate <NSObject>

@optional

- (void)mediaProfileHeaderContentViewController:(MusicMediaProfileHeaderContentViewController *)arg1 didSelectEditButton:(UIControl *)arg2;
- (void)mediaProfileHeaderContentViewController:(MusicMediaProfileHeaderContentViewController *)arg1 didSelectShareButton:(UIButton *)arg2;
- (void)mediaProfileHeaderContentViewController:(MusicMediaProfileHeaderContentViewController *)arg1 didUpdateFollowingState:(bool)arg2 forStoreID:(long long)arg3;
- (void)mediaProfileHeaderContentViewControllerDidSelectProfileTitle:(MusicMediaProfileHeaderContentViewController *)arg1;

@end