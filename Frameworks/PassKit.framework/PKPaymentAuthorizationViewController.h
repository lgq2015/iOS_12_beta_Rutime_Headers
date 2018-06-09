/* made by EzioChiu
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentAuthorizationViewController : UIViewController <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate> {
    <PKPaymentAuthorizationViewControllerDelegate> * _delegate;
    PKPaymentAuthorizationCoordinator * _paymentCoordinator;
    <PKPaymentAuthorizationViewControllerPrivateDelegate> * _privateDelegate;
    bool  _viewHasAppeared;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentAuthorizationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPaymentAuthorizationCoordinator *paymentCoordinator;
@property (nonatomic) <PKPaymentAuthorizationViewControllerPrivateDelegate> *privateDelegate;
@property (readonly) Class superclass;
@property (nonatomic) bool viewHasAppeared;

+ (bool)canMakePayments;
+ (bool)canMakePaymentsUsingNetworks:(id)arg1;
+ (bool)canMakePaymentsUsingNetworks:(id)arg1 capabilities:(unsigned long long)arg2;
+ (void)paymentServicesMerchantURL:(id /* block */)arg1;
+ (void)paymentServicesMerchantURLForAPIType:(unsigned long long)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPaymentRequest:(id)arg1;
- (long long)modalPresentationStyle;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didRequestMerchantSession:(id /* block */)arg2;
- (void)paymentAuthorizationCoordinator:(id)arg1 didSelectPaymentMethod:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didSelectShippingAddress:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didSelectShippingMethod:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 willFinishWithError:(id)arg2;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (void)paymentAuthorizationCoordinatorWillAuthorizePayment:(id)arg1;
- (id)paymentCoordinator;
- (id)privateDelegate;
- (void)setDelegate:(id)arg1;
- (void)setPaymentCoordinator:(id)arg1;
- (void)setPrivateDelegate:(id)arg1;
- (void)setViewHasAppeared:(bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)viewHasAppeared;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end