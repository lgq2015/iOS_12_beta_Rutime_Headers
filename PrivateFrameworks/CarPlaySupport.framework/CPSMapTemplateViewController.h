/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSMapTemplateViewController : CPSBaseTemplateViewController <CARNavigationOwnershipManagerDelegate, CARSessionObserving, CPMapTemplateProviding, CPSApplicationStateObserving, CPSButtonDelegate, CPSEventObserverDelegate, CPSNavigationAlertQueueDelegate, CPSNavigationDisplaying, CPSPanEventDelegate, CPSTripInitiating, UIGestureRecognizerDelegate> {
    bool  _applicationIsFrontmost;
    CPSApplicationStateMonitor * _applicationStateMonitor;
    NSMutableSet * _autoHideDisabledReasons;
    NSTimer * _autoHideTimer;
    bool  _autoHidesNavigationBar;
    NSLayoutConstraint * _cardViewBottomConstraint;
    NSLayoutConstraint * _cardViewTopConstraint;
    bool  _demoAutoHideTimerDisabled;
    CPSEventObserver * _eventObserver;
    UITapGestureRecognizer * _hideTapGestureRecognizer;
    bool  _hidesButtonsWithNavigationBar;
    NSMutableDictionary * _lastTravelEstimatesByTrip;
    NSMutableArray * _mapButtons;
    UITapGestureRecognizer * _navBarHideTapGestureRecognizer;
    NSLayoutConstraint * _navigationAlertBottomConstraint;
    CPSNavigationAlertQueue * _navigationAlertQueue;
    CPSNavigationCardView * _navigationCardView;
    NSLayoutConstraint * _navigationETABottomConstraint;
    CPSNavigationETAView * _navigationETAView;
    CPSNavigator * _navigator;
    UIView * _panContainerView;
    CPSPanViewController * _panViewController;
    CPSTripCardView * _previewsView;
    bool  _rightHandDrive;
    <CPSSafeAreaDelegate> * _safeAreaDelegate;
    CARSessionStatus * _sessionStatus;
    UIStackView * _trailingBottomStackView;
    NSArray * _tripPreviews;
}

@property (nonatomic) bool applicationIsFrontmost;
@property (nonatomic) CPSApplicationStateMonitor *applicationStateMonitor;
@property (nonatomic, retain) NSMutableSet *autoHideDisabledReasons;
@property (nonatomic, retain) NSTimer *autoHideTimer;
@property (nonatomic) bool autoHidesNavigationBar;
@property (nonatomic, retain) NSLayoutConstraint *cardViewBottomConstraint;
@property (nonatomic, retain) NSLayoutConstraint *cardViewTopConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool demoAutoHideTimerDisabled;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CPSEventObserver *eventObserver;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITapGestureRecognizer *hideTapGestureRecognizer;
@property (nonatomic) bool hidesButtonsWithNavigationBar;
@property (nonatomic, retain) NSMutableDictionary *lastTravelEstimatesByTrip;
@property (nonatomic, retain) NSMutableArray *mapButtons;
@property (nonatomic, retain) UITapGestureRecognizer *navBarHideTapGestureRecognizer;
@property (nonatomic, retain) NSLayoutConstraint *navigationAlertBottomConstraint;
@property (nonatomic, retain) CPSNavigationAlertQueue *navigationAlertQueue;
@property (nonatomic, retain) CPSNavigationCardView *navigationCardView;
@property (nonatomic, retain) NSLayoutConstraint *navigationETABottomConstraint;
@property (nonatomic, retain) CPSNavigationETAView *navigationETAView;
@property (nonatomic, retain) CPSNavigator *navigator;
@property (nonatomic, retain) UIView *panContainerView;
@property (nonatomic, retain) CPSPanViewController *panViewController;
@property (nonatomic, retain) CPSTripCardView *previewsView;
@property (nonatomic) bool rightHandDrive;
@property (nonatomic) <CPSSafeAreaDelegate> *safeAreaDelegate;
@property (nonatomic, retain) CARSessionStatus *sessionStatus;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIStackView *trailingBottomStackView;
@property (nonatomic, copy) NSArray *tripPreviews;

- (void).cxx_destruct;
- (void)_addPanControllerAsChild;
- (void)_animateButtonsHidden:(bool)arg1;
- (id)_buttonForIdentifier:(id)arg1;
- (id)_buttons;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_cardViewEdgeInsets;
- (void)_gestureNoOp:(id)arg1;
- (void)_hideBar:(id)arg1;
- (bool)_isAutoHideEnabled;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_mapButtonsEdgeInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_navBarInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_navigationAlertInsets;
- (void)_nightModeChanged:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_previewEdgeInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForNavigationAlert:(id)arg1;
- (void)_reloadPreviewsView;
- (void)_removePanController;
- (void)_resetAutoHideTimer;
- (void)_setAutoHideDisabled:(bool)arg1 forRequester:(id)arg2;
- (void)_setNavigationAlertView:(id)arg1 visible:(bool)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)_setPanInterfaceVisible:(bool)arg1 animated:(bool)arg2;
- (void)_showBar;
- (id)_tripDidBegin:(id)arg1 withEstimates:(id)arg2 forIdentifier:(id)arg3;
- (id)_tripOverviewCardForTrip:(id)arg1;
- (void)_updateManeuverCardIfNeededForAlertShowing:(bool)arg1;
- (void)_updateMapButtonsWithButtons:(id)arg1;
- (void)_updateSafeArea;
- (bool)applicationIsFrontmost;
- (id)applicationStateMonitor;
- (void)applicationStateMonitor:(id)arg1 didBecomeActive:(bool)arg2;
- (id)autoHideDisabledReasons;
- (id)autoHideTimer;
- (bool)autoHidesNavigationBar;
- (id)cardViewBottomConstraint;
- (id)cardViewTopConstraint;
- (void)dealloc;
- (bool)demoAutoHideTimerDisabled;
- (void)didSelectButton:(id)arg1;
- (void)dismissNavigationAlertAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)eventObserver;
- (void)eventObserver:(id)arg1 observedEvent:(unsigned long long)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)hideTapGestureRecognizer;
- (bool)hidesButtonsWithNavigationBar;
- (void)hostSetMapButtons:(id)arg1;
- (void)hostSetPanInterfaceVisible:(bool)arg1 animated:(bool)arg2;
- (void)hostStartNavigationSessionForTrip:(id)arg1 reply:(id /* block */)arg2;
- (void)hostUpdateTravelEstimates:(id)arg1 forTripIdentifier:(id)arg2;
- (id)initWithMapTemplate:(id)arg1 templateDelegate:(id)arg2 safeAreaDelegate:(id)arg3 applicationStateMonitor:(id)arg4;
- (id)lastTravelEstimatesByTrip;
- (id)mapButtons;
- (id)mapTemplate;
- (id)mapTemplateDelegate;
- (id)navBarHideTapGestureRecognizer;
- (id)navigationAlertBottomConstraint;
- (id)navigationAlertQueue;
- (void)navigationAlertQueue:(id)arg1 shouldDisplayAlertView:(id)arg2 animated:(bool)arg3;
- (void)navigationAlertQueue:(id)arg1 shouldRemoveAlertView:(id)arg2 animated:(bool)arg3 dismissalContext:(unsigned long long)arg4;
- (id)navigationCardView;
- (id)navigationETABottomConstraint;
- (id)navigationETAView;
- (void)navigationOwnershipChangedToOwner:(unsigned long long)arg1;
- (id)navigator;
- (void)navigator:(id)arg1 didEndTrip:(bool)arg2;
- (void)panBeganWithDirection:(unsigned long long)arg1;
- (id)panContainerView;
- (void)panEndedWithDirection:(unsigned long long)arg1;
- (id)panViewController;
- (void)panWithDirection:(unsigned long long)arg1;
- (id)previewsView;
- (bool)rightHandDrive;
- (id)safeAreaDelegate;
- (void)sessionDidConnect:(id)arg1;
- (id)sessionStatus;
- (void)setApplicationIsFrontmost:(bool)arg1;
- (void)setApplicationStateMonitor:(id)arg1;
- (void)setAutoHideDisabledReasons:(id)arg1;
- (void)setAutoHideTimer:(id)arg1;
- (void)setAutoHidesNavigationBar:(bool)arg1;
- (void)setCardViewBottomConstraint:(id)arg1;
- (void)setCardViewTopConstraint:(id)arg1;
- (void)setControl:(id)arg1 enabled:(bool)arg2;
- (void)setDemoAutoHideTimerDisabled:(bool)arg1;
- (void)setEventObserver:(id)arg1;
- (void)setHideTapGestureRecognizer:(id)arg1;
- (void)setHidesButtonsWithNavigationBar:(bool)arg1;
- (void)setHostAutoHidesNavigationBar:(bool)arg1;
- (void)setHostHidesButtonsWithNavigationBar:(bool)arg1;
- (void)setHostTripPreviews:(id)arg1;
- (void)setLastTravelEstimatesByTrip:(id)arg1;
- (void)setMapButton:(id)arg1 focusedImage:(id)arg2;
- (void)setMapButton:(id)arg1 hidden:(bool)arg2;
- (void)setMapButton:(id)arg1 image:(id)arg2;
- (void)setMapButtons:(id)arg1;
- (void)setNavBarHideTapGestureRecognizer:(id)arg1;
- (void)setNavigationAlertBottomConstraint:(id)arg1;
- (void)setNavigationAlertQueue:(id)arg1;
- (void)setNavigationCardView:(id)arg1;
- (void)setNavigationETABottomConstraint:(id)arg1;
- (void)setNavigationETAView:(id)arg1;
- (void)setNavigator:(id)arg1;
- (void)setPanContainerView:(id)arg1;
- (void)setPanViewController:(id)arg1;
- (void)setPreviewsView:(id)arg1;
- (void)setRightHandDrive:(bool)arg1;
- (void)setSafeAreaDelegate:(id)arg1;
- (void)setSessionStatus:(id)arg1;
- (void)setTrailingBottomStackView:(id)arg1;
- (void)setTripPreviews:(id)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (void)showNavigationAlert:(id)arg1 animated:(bool)arg2;
- (id)trailingBottomStackView;
- (id)tripPreviews;
- (void)tripView:(id)arg1 selectedRouteChoice:(id)arg2;
- (void)tripView:(id)arg1 startedRouteChoice:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end