/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlViewControllerCollectionViewCell : HUViewControllerCollectionViewCell {
    HUQuickControlCollectionViewLayoutAttributes * _activeLayoutAttributes;
}

@property (nonatomic, retain) HUQuickControlCollectionViewLayoutAttributes *activeLayoutAttributes;
@property (nonatomic, retain) HUQuickControlCollectionViewCellContainerViewController *viewController;

+ (unsigned long long)quickControlSizeForItemSize:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_updateContentViewControllerForActiveLayoutAttributes;
- (id)activeLayoutAttributes;
- (void)applyLayoutAttributes:(id)arg1;
- (void)setActiveLayoutAttributes:(id)arg1;
- (void)setViewController:(id)arg1;

@end