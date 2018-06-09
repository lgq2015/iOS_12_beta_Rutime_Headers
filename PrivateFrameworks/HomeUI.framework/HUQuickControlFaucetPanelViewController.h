/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlFaucetPanelViewController : HUQuickControlViewController {
    HUQuickControlCollectionViewController * _collectionViewController;
}

@property (nonatomic, readonly) HFChildServiceControlItem *childValvesControlItem;
@property (nonatomic, readonly) HUQuickControlCollectionViewController *collectionViewController;
@property (nonatomic, readonly) HFControlItem<HFPrimaryStateWriter> *primaryStateControlItem;
@property (nonatomic, readonly) HFTemperatureThresholdControlItem *temperatureControlItem;

+ (id)_childValvesPredicate;
+ (id)_primaryStatePredicate;
+ (id)_temperaturePredicate;
+ (id)controlItemPredicate;

- (void).cxx_destruct;
- (id)_controlItemMatchingPredicate:(id)arg1;
- (id)childQuickControlContentViewControllers;
- (id)childValvesControlItem;
- (id)collectionViewController;
- (id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3;
- (id)overrideStatusText;
- (id)primaryStateControlItem;
- (id)temperatureControlItem;
- (void)viewDidLoad;

@end