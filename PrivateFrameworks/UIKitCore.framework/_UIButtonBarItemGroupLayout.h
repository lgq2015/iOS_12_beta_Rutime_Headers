/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIButtonBarItemGroupLayout : _UIButtonBarLayout {
    bool  _compact;
    NSMutableArray * _configuredItemLayouts;
    UIBarButtonItemGroup * _group;
    UILayoutGuide * _groupSizeGuide;
    NSMapTable * _itemLayoutMap;
    NSMutableArray * _itemLayouts;
    id /* block */  _itemViewGenerator;
    _UIButtonBarLayout * _representativeLayout;
    bool  _useGroupSizing;
}

@property (nonatomic) bool compact;
@property (nonatomic, readonly) UIBarButtonItemGroup *group;
@property (nonatomic, readonly) UILayoutGuide *groupSizeGuide;
@property (nonatomic, copy) id /* block */ itemViewGenerator;
@property (nonatomic) bool useGroupSizing;

- (void).cxx_destruct;
- (void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;
- (void)_addLayoutGuides:(id)arg1;
- (void)_addLayoutViews:(id)arg1;
- (void)_configure;
- (id)_effectiveLayout;
- (bool)_isGroup;
- (bool)_isSpace;
- (id)_itemLayouts;
- (void)_iterateConfiguredLayouts:(id /* block */)arg1;
- (id)_newLayoutForBarButtonItem:(id)arg1 useGroupSizing:(bool)arg2;
- (id)_representativeLayout;
- (void)_updateGroupSizing;
- (bool)compact;
- (id)description;
- (id)group;
- (id)groupSizeGuide;
- (id)initWithLayoutMetrics:(id)arg1;
- (id)initWithLayoutMetrics:(id)arg1 barButtonItemGroup:(id)arg2;
- (id /* block */)itemViewGenerator;
- (id)layoutForBarButtonItem:(id)arg1;
- (id)layoutsForSpacerItem:(id)arg1;
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1;
- (void)setCompact:(bool)arg1;
- (void)setItemViewGenerator:(id /* block */)arg1;
- (void)setUseGroupSizing:(bool)arg1;
- (bool)shouldHoriziontallyCenterView:(id)arg1;
- (bool)useGroupSizing;

@end