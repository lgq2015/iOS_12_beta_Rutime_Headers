/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupNavigationController : PKNavigationController <PKPaymentSetupRequiresPreflightProtocol, PKPaymentSetupViewControllerDelegate> {
    bool  _allowsManualEntry;
    long long  _context;
    long long  _paymentSetupMode;
    PKPaymentProvisioningController * _provisioningController;
    bool  _rootViewControllerNeedsConfiguration;
    <PKPaymentSetupDelegate> * _setupDelegate;
    bool  _showsWelcomeViewController;
}

@property (nonatomic) bool allowsManualEntry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long paymentSetupMode;
@property (nonatomic, readonly, retain) PKPaymentProvisioningController *provisioningController;
@property (nonatomic) <PKPaymentSetupDelegate> *setupDelegate;
@property (nonatomic) bool showsWelcomeViewController;
@property (readonly) Class superclass;

+ (id)viewControllerForPresentingPaymentError:(id)arg1;

- (void).cxx_destruct;
- (void)_dirtyConfigurationAndReloadIfNeeded;
- (void)_reconfigureRootViewController;
- (bool)allowsManualEntry;
- (void)cancel:(id)arg1;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2;
- (void)loadView;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (long long)paymentSetupMode;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (id)provisioningController;
- (void)setAllowsManualEntry:(bool)arg1;
- (void)setCustomFormSheetPresentationStyleForiPad;
- (void)setPaymentSetupMode:(long long)arg1;
- (void)setSetupDelegate:(id)arg1;
- (void)setShowsWelcomeViewController:(bool)arg1;
- (id)setupDelegate;
- (bool)shouldAutorotate;
- (bool)showsWelcomeViewController;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewController:(id)arg1 didShowProvisioningError:(id)arg2;
- (void)viewControllerDidShowEligibilityIssue:(id)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;

@end