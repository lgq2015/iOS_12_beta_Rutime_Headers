/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUUserNotificationTopicListModuleController : HUItemTableModuleController

- (id)_presentServiceListForTopic:(id)arg1 animated:(bool)arg2;
- (bool)canSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (id)showNotificationSettingsForHomeKitObject:(id)arg1 animated:(bool)arg2;

@end
