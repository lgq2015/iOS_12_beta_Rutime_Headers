/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlMultiStateViewController : HUQuickControlSingleControlViewController

@property (nonatomic, readonly) HFMultiStateControlItem *controlItem;

+ (Class)controlItemClass;

- (bool)_useOverrideStatusText;
- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (void)modelValueDidChange;
- (id)overrideStatusText;

@end
