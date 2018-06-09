/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPaymentProvisioningFlowControllerManualEntryStepContext : NPKPaymentProvisioningFlowStepContext {
    bool  _cameraFirstProvisioningEnabled;
    NSArray * _setupFields;
}

@property (nonatomic) bool cameraFirstProvisioningEnabled;
@property (nonatomic, retain) NSArray *setupFields;

- (void).cxx_destruct;
- (bool)cameraFirstProvisioningEnabled;
- (id)description;
- (void)setCameraFirstProvisioningEnabled:(bool)arg1;
- (void)setSetupFields:(id)arg1;
- (id)setupFields;

@end