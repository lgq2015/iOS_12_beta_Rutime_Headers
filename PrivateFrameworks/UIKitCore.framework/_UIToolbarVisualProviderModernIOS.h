/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIToolbarVisualProviderModernIOS : _UIToolbarVisualProvider <_UIBarButtonItemViewOwner> {
    NSString * _backdropViewLayerGroupName;
    _UIBarBackground * _barBackgroundView;
    _UIToolbarContentView * _contentView;
    UIView * _customBackgroundView;
}

@property (getter=_backdropViewLayerGroupName, setter=_setBackdropViewLayerGroupName:, nonatomic, retain) NSString *backdropViewLayerGroupName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backdropViewLayerGroupName;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_backgroundFrame;
- (id)_currentCustomBackground;
- (void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2;
- (void)_itemDidChangeHiddenState:(id)arg1;
- (void)_itemDidChangeSelectionState:(id)arg1;
- (void)_itemDidChangeWidth:(id)arg1;
- (void)_itemStandardViewNeedsUpdate:(id)arg1;
- (void)_setBackdropViewLayerGroupName:(id)arg1;
- (void)_setViewOwnersAndUpdateContentViewForItems:(id)arg1 withOldItems:(id)arg2 animated:(bool)arg3;
- (void)_updateContentView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })backgroundFrame;
- (id)currentBackgroundView;
- (struct CGSize { double x1; double x2; })defaultSizeForOrientation:(long long)arg1;
- (void)positionToolbarButtonsAndResetFontScaleAdjustment:(bool)arg1;
- (void)setCustomBackgroundView:(id)arg1;
- (bool)toolbarIsSmall;
- (void)updateArchivedSubviews:(id)arg1;
- (void)updateBarBackground;
- (void)updateBarBackgroundSize;
- (void)updateBarForStyle:(long long)arg1;
- (void)updateItemsForNewFrame:(id)arg1;
- (void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(bool)arg3;

@end