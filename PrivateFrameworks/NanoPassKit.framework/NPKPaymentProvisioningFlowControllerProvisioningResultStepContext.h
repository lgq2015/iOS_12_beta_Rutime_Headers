/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPaymentProvisioningFlowControllerProvisioningResultStepContext : NPKPaymentProvisioningFlowStepContext {
    bool  _cardAdded;
    NSError * _error;
}

@property (nonatomic) bool cardAdded;
@property (nonatomic, retain) NSError *error;

- (void).cxx_destruct;
- (bool)cardAdded;
- (id)description;
- (id)error;
- (void)setCardAdded:(bool)arg1;
- (void)setError:(id)arg1;

@end
