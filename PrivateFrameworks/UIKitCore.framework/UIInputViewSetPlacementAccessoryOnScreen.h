/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInputViewSetPlacementAccessoryOnScreen : UIInputViewSetPlacement <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (bool)accessoryViewWillAppear;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(bool)arg2;
- (bool)showsInputViews;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;

@end