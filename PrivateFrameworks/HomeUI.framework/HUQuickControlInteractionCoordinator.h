/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlInteractionCoordinator : NSObject {
    UIView<HUQuickControlControllableView> * _controlView;
    <HUQuickControlInteractionCoordinatorDelegate> * _delegate;
    bool  _userInteractionEnabled;
    bool  _viewVisible;
}

@property (nonatomic, readonly) UIView<HUQuickControlControllableView> *controlView;
@property (nonatomic) <HUQuickControlInteractionCoordinatorDelegate> *delegate;
@property (getter=isUserInteractionActive, nonatomic, readonly) bool userInteractionActive;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;
@property (nonatomic, retain) id value;
@property (nonatomic) bool viewVisible;

- (void).cxx_destruct;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)controlView;
- (id)delegate;
- (id)initWithControlView:(id)arg1 delegate:(id)arg2;
- (bool)isUserInteractionActive;
- (bool)isUserInteractionEnabled;
- (void)setDelegate:(id)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)setViewVisible:(bool)arg1;
- (bool)viewVisible;

@end