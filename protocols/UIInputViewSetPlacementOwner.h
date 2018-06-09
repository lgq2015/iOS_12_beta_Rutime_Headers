/* made by EzioChiu.
 */

@protocol UIInputViewSetPlacementOwner <NSObject>

@required

- (<UIInputViewSetPlacementApplicator> *)applicator;
- (UIView *)containerView;
- (bool)hideInputViewBackdrops;
- (UIView *)hostView;
- (long long)inputViewBackdropStyle;
- (UIInputViewSet *)inputViewSet;
- (bool)keyboardController;
- (UIInputViewSetPlacement *)placement;
- (void)setHideInputViewBackdrops:(bool)arg1;

@end