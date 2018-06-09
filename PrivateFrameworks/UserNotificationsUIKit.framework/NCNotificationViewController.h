/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationViewController : UIViewController <NCLegibilitySettingsAdjusting, NCNotificationCustomContentDelegate, PLContentSizeCategoryAdjusting, PLExpandedPlatterPresentationControllerDelegate, UIScrollViewDelegate> {
    <UIViewControllerTransitionCoordinator> * _activeTransitionCoordinator;
    UIView * _associatedView;
    <NCAuxiliaryOptionsProviding> * _auxiliaryOptionsContentProvider;
    bool  _canPan;
    UIPanGestureRecognizer * _customContentHomeAffordanceGestureRecognizer;
    bool  _customContentHomeAffordanceVisible;
    <NCNotificationCustomContentProviding> * _customContentProvider;
    UIViewController<NCNotificationCustomContent> * _customContentProvidingViewController;
    <NCNotificationViewControllerDelegate> * _delegate;
    bool  _didQueryCanPan;
    id /* block */  _dismissalCompletion;
    NSString * _groupName;
    bool  _interactionEnabled;
    struct UIView { Class x1; } * _lookView;
    long long  _ncTransitionAnimationState;
    NCNotificationRequest * _notificationRequest;
    NSPointerArray * _observers;
    id /* block */  _pendingPresentationTransitionDidEndBlock;
    NCNotificationAction * _presentationSourceAction;
    bool  _revealAdditionalContentOnPresentation;
    bool  _shouldRestorePresentingShortLookOnDismiss;
    <NCNotificationStaticContentProviding> * _staticContentProvider;
}

@property (getter=_activeTransitionCoordinator, setter=_setActiveTransitionCoordinator:, nonatomic, retain) <UIViewControllerTransitionCoordinator> *activeTransitionCoordinator;
@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic) UIView *associatedView;
@property (nonatomic, retain) <NCAuxiliaryOptionsProviding> *auxiliaryOptionsContentProvider;
@property (getter=isCoalescedNotificationBundle, nonatomic, readonly) bool coalescedNotificationBundle;
@property (getter=hasCommittedToPresentingCustomContentProvidingViewController, nonatomic, readonly) bool committedToPresentingCustomContentProvidingViewController;
@property (nonatomic) UIPanGestureRecognizer *customContentHomeAffordanceGestureRecognizer;
@property (getter=isCustomContentHomeAffordanceVisible, nonatomic) bool customContentHomeAffordanceVisible;
@property (nonatomic, retain) <NCNotificationCustomContentProviding> *customContentProvider;
@property (getter=_customContentProvidingViewController, setter=_setCustomContentProvidingViewController:, nonatomic, retain) UIViewController<NCNotificationCustomContent> *customContentProvidingViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_dismissalCompletion, setter=_setDismissalCompletion:, nonatomic, copy) id /* block */ dismissalCompletion;
@property (getter=isDragging, nonatomic, readonly) bool dragging;
@property (nonatomic, retain) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (getter=isInteractionEnabled, nonatomic) bool interactionEnabled;
@property (getter=isLookStyleLongLook, nonatomic, readonly) bool lookStyleLongLook;
@property (nonatomic, retain) NCNotificationRequest *notificationRequest;
@property (getter=_notificationViewControllerView, nonatomic, readonly) NCNotificationViewControllerView *notificationViewControllerView;
@property (getter=_pendingPresentationTransitionDidEndBlock, setter=_setPendingPresentationTransitionDidEndBlock:, nonatomic, copy) id /* block */ pendingPresentationTransitionDidEndBlock;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic) NCNotificationAction *presentationSourceAction;
@property (getter=_presentedLongLookViewController, nonatomic, readonly) NCNotificationViewController *presentedLongLookViewController;
@property (getter=_isPresentingCustomContentProvidingViewController, nonatomic, readonly) bool presentingCustomContentProvidingViewController;
@property (nonatomic) bool revealAdditionalContentOnPresentation;
@property (getter=_scrollView, nonatomic, readonly) UIScrollView *scrollView;
@property (getter=isShortLook, nonatomic, readonly) bool shortLook;
@property (getter=_shouldRestorePresentingShortLookOnDismiss, setter=_setShouldRestorePresentingShortLookOnDismiss:, nonatomic) bool shouldRestorePresentingShortLookOnDismiss;
@property (nonatomic, retain) <NCNotificationStaticContentProviding> *staticContentProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeTransitionCoordinator;
- (void)_askDelegateToExecuteAction:(id)arg1 withParameters:(id)arg2 animated:(bool)arg3;
- (bool)_canPan;
- (id)_customContentProvidingViewController;
- (id)_customContentProvidingViewControllerCreateIfNecessary;
- (long long)_dateFormatStyle;
- (id /* block */)_dismissalCompletion;
- (void)_executeCancelAction:(bool)arg1;
- (void)_executeClearAction:(bool)arg1;
- (void)_executeCloseAction:(bool)arg1;
- (void)_executeDefaultAction:(bool)arg1;
- (id)_initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(bool)arg2;
- (bool)_isPresentingCustomContentProvidingViewController;
- (void)_loadLookView;
- (struct UIView { Class x1; }*)_lookView;
- (struct UIView { Class x1; }*)_lookViewIfLoaded;
- (struct UIView { Class x1; }*)_lookViewLoadingIfNecessary:(bool)arg1;
- (id)_notificationViewControllerView;
- (void)_notificationViewControllerViewDidLoad;
- (void)_notifyObserversWithBlock:(id /* block */)arg1;
- (id /* block */)_pendingPresentationTransitionDidEndBlock;
- (struct CGSize { double x1; double x2; })_preferredCustomContentSizeForSize:(struct CGSize { double x1; double x2; })arg1 parentContentContainerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_presentedLongLookViewController;
- (void)_setActiveTransitionCoordinator:(id)arg1;
- (void)_setCustomContentProvidingViewController:(id)arg1;
- (bool)_setDelegate:(id)arg1;
- (void)_setDismissalCompletion:(id /* block */)arg1;
- (bool)_setNotificationRequest:(id)arg1;
- (void)_setPendingPresentationTransitionDidEndBlock:(id /* block */)arg1;
- (void)_setPreferredCustomContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setShouldRestorePresentingShortLookOnDismiss:(bool)arg1;
- (void)_setupAuxiliaryOptionsContentProvider;
- (void)_setupCustomContentProvider;
- (void)_setupStaticContentProvider;
- (bool)_shouldPadScrollViewContentSizeHeight;
- (bool)_shouldRestorePresentingShortLookOnDismiss;
- (void)_updatePreferredContentSize;
- (void)_updateScrollViewContentSize;
- (void)_updateWithProvidedAuxiliaryOptionsContent;
- (void)_updateWithProvidedCustomContent;
- (void)_updateWithProvidedStaticContent;
- (void)addAudioAccessoryObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (bool)adjustForContentSizeCategoryChange;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (bool)adjustsFontForContentSizeCategory;
- (id)associatedView;
- (id)auxiliaryOptionsContentProvider;
- (void)contentProvider:(id)arg1 performAction:(id)arg2 animated:(bool)arg3;
- (void)contentProvider:(id)arg1 requestsPresentingLongLookAnimated:(bool)arg2;
- (void)customContent:(id)arg1 forwardAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4;
- (void)customContent:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)customContentHomeAffordanceGestureRecognizer;
- (id)customContentProvider;
- (void)customContentRequestsDefaultAction:(id)arg1;
- (void)customContentRequestsDismiss:(id)arg1;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)didReceiveNotificationRequest:(id)arg1;
- (bool)dismissPresentedViewControllerAndClearNotification:(bool)arg1 animated:(bool)arg2;
- (bool)dismissPresentedViewControllerAndClearNotification:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(id /* block */)arg2;
- (void)expandAndPlayAudioMessage;
- (id)expandedPlatterPresentationController:(id)arg1 keyboardAssertionForGestureWindow:(id)arg2;
- (id)groupName;
- (bool)hasCommittedToPresentingCustomContentProvidingViewController;
- (id)hideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(bool)arg2;
- (bool)isCoalescedNotificationBundle;
- (bool)isContentExtensionVisible:(id)arg1;
- (bool)isCustomContentHomeAffordanceVisible;
- (bool)isDragging;
- (bool)isInteractionEnabled;
- (bool)isLookStyleLongLook;
- (bool)isShortLook;
- (void)loadView;
- (long long)ncTransitionAnimationState;
- (id)notificationRequest;
- (id)notificationUsageTrackingState;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (bool)prefersStatusBarHidden;
- (void)presentLongLookAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)presentationSourceAction;
- (void)preserveInputViews;
- (void)reloadAuxiliaryOptionsContentProvider;
- (void)reloadContentProviders;
- (void)reloadStaticContentProvider;
- (void)removeAudioAccesoryObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (bool)restoreInputViews;
- (bool)revealAdditionalContentOnPresentation;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setAssociatedView:(id)arg1;
- (void)setAuxiliaryOptionsContentProvider:(id)arg1;
- (void)setCustomContentHomeAffordanceGestureRecognizer:(id)arg1;
- (void)setCustomContentHomeAffordanceVisible:(bool)arg1;
- (void)setCustomContentProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setHasUpdatedContent;
- (void)setInteractionEnabled:(bool)arg1;
- (void)setNCTransitionAnimationState:(long long)arg1;
- (void)setNotificationRequest:(id)arg1;
- (void)setPresentationSourceAction:(id)arg1;
- (void)setRevealAdditionalContentOnPresentation:(bool)arg1;
- (void)setStaticContentProvider:(id)arg1;
- (id)settleHomeAffordanceAnimationBehaviorDescriptionForExpandedPlatterPresentationController:(id)arg1;
- (bool)shouldAutorotate;
- (bool)shouldRestorePresentingShortLookOnDismiss;
- (id)staticContentProvider;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)supportedInterfaceOrientations;
- (id)unhideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(id)arg1;
- (void)updateContent;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end