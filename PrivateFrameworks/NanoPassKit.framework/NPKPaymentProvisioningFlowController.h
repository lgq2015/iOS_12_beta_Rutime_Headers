/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPaymentProvisioningFlowController : NSObject {
    unsigned long long  _currentStep;
    <NPKPaymentProvisioningFlowControllerDelegate> * _delegate;
    PKPaymentSetupFieldsModel * _fieldsModel;
    PKPaymentProvisioningController * _provisioningController;
    PKPaymentWebService * _webService;
}

@property (nonatomic) unsigned long long currentStep;
@property (nonatomic) <NPKPaymentProvisioningFlowControllerDelegate> *delegate;
@property (nonatomic, retain) PKPaymentSetupFieldsModel *fieldsModel;
@property (nonatomic, retain) PKPaymentProvisioningController *provisioningController;
@property (nonatomic, retain) PKPaymentWebService *webService;

- (void).cxx_destruct;
- (void)_endProvisioningFlowWithError:(id)arg1;
- (void)_handleFinished;
- (void)_handlePreconditionsVerified;
- (id)_newPaymentEligibilityRequest;
- (id)_newPaymentProvisioningRequest;
- (id)_newPaymentRequirementsRequest;
- (void)_performEligibility;
- (void)_performNextActionForProvisioningState;
- (void)_performProvision;
- (void)_performTerms;
- (void)_performTransitionToStep:(unsigned long long)arg1 withContext:(id)arg2;
- (void)_requestRequirements;
- (void)_sendDidTransitionFromStep:(unsigned long long)arg1 toStep:(unsigned long long)arg2 withContext:(id)arg3;
- (void)_transitionToManualEntry;
- (void)_transitionToRemoteCredentials:(id)arg1;
- (void)_transitionToSecondaryManualEntryWithFields:(id)arg1;
- (void)acceptTerms;
- (void)acknowledgeWelcome;
- (void)chooseManualEntry;
- (unsigned long long)currentStep;
- (id)delegate;
- (id)fieldsModel;
- (void)handleManualEntryFields:(id)arg1;
- (id)initWithWebService:(id)arg1;
- (id)provisioningController;
- (void)setCurrentStep:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFieldsModel:(id)arg1;
- (void)setProvisioningController:(id)arg1;
- (void)setWebService:(id)arg1;
- (void)startProvisioningFlow;
- (id)webService;

@end