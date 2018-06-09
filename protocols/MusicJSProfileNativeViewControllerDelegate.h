/* made by EzioChiu.
 */

@protocol MusicJSProfileNativeViewControllerDelegate <NSObject>

@required

- (void)jsProfileNativeViewController:(MusicJSProfileNativeViewController *)arg1 presentBiographyEditorDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3;
- (void)jsProfileNativeViewController:(MusicJSProfileNativeViewController *)arg1 presentShareDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3;
- (void)jsProfileNativeViewController:(MusicJSProfileNativeViewController *)arg1 setAvailableContentFlags:(NSDictionary *)arg2;
- (void)jsProfileNativeViewController:(MusicJSProfileNativeViewController *)arg1 setDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3 forSegmentIdentifier:(NSString *)arg4;
- (void)jsProfileNativeViewController:(MusicJSProfileNativeViewController *)arg1 setFollowerCountText:(NSString *)arg2 followersText:(NSString *)arg3;
- (void)jsProfileNativeViewController:(MusicJSProfileNativeViewController *)arg1 setMoreRelatedContentDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3;
- (void)jsProfileNativeViewController:(MusicJSProfileNativeViewController *)arg1 setNumberOfFollowers:(long long)arg2;
- (void)jsProfileNativeViewController:(MusicJSProfileNativeViewController *)arg1 setProfileEntityValueProviderData:(NSDictionary *)arg2;
- (void)jsProfileNativeViewController:(MusicJSProfileNativeViewController *)arg1 setRelatedContentDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3;
- (void)jsProfileNativeViewController:(MusicJSProfileNativeViewController *)arg1 setReportingInformation:(NSDictionary *)arg2;
- (void)jsProfileNativeViewController:(MusicJSProfileNativeViewController *)arg1 setSelectedSegmentIdentifier:(NSString *)arg2;
- (void)jsProfileNativeViewController:(MusicJSProfileNativeViewController *)arg1 setSocialHidden:(bool)arg2;
- (void)jsProfileNativeViewController:(MusicJSProfileNativeViewController *)arg1 setVisibleSegments:(NSArray *)arg2;
- (bool)jsProfileNativeViewControllerSupportsRelatedContentDocument:(MusicJSProfileNativeViewController *)arg1;

@end