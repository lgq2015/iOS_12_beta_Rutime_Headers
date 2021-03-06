/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKEntitlementWhitelist : NSObject {
    bool  _addSilently;
    NSString * _applicationID;
    bool  _cardOnFilePayments;
    bool  _inAppPayments;
    bool  _inAppPaymentsPrivate;
    NSArray * _merchantIdentifiers;
    bool  _passPresentationSuppression;
    NSArray * _passTypeIDs;
    bool  _passesAddSilently;
    bool  _passesAllAccess;
    bool  _paymentAllAccess;
    bool  _paymentConfiguration;
    bool  _paymentPresentation;
    bool  _peerPaymentAllAccess;
    int  _processIdentifier;
    NSArray * _teamIDs;
    bool  _trustedDeviceEnrollmentInfo;
    bool  _webPayments;
    bool  _winterpegPayments;
}

@property bool addSilently;
@property (readonly) bool allAccess;
@property (readonly, copy) NSString *applicationID;
@property (readonly) bool cardOnFilePayments;
@property (readonly) bool inAppPayments;
@property (readonly) bool inAppPaymentsPrivate;
@property (readonly, copy) NSArray *merchantIdentifiers;
@property (readonly) bool passPresentationSuppression;
@property (copy) NSArray *passTypeIDs;
@property (readonly) bool passesAddSilently;
@property (readonly) bool passesAllAccess;
@property (readonly) bool paymentAllAccess;
@property (readonly) bool paymentConfiguration;
@property (readonly) bool paymentPresentation;
@property (readonly) bool peerPaymentAllAccess;
@property (readonly) int processIdentifier;
@property (copy) NSArray *teamIDs;
@property (readonly) bool trustedDeviceEnrollmentInfo;
@property (readonly) bool webPayments;
@property (readonly) bool winterpegPayments;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_probeEntitlementsWithConnection:(id)arg1;
- (bool)addSilently;
- (bool)allAccess;
- (id)applicationID;
- (bool)cardOnFilePayments;
- (bool)inAppPayments;
- (bool)inAppPaymentsPrivate;
- (id)initWithConnection:(id)arg1;
- (bool)isEntitledForMerchantSession:(id)arg1;
- (bool)isEntitledForPaymentRequest:(id)arg1;
- (id)merchantIdentifiers;
- (bool)passPresentationSuppression;
- (id)passTypeIDs;
- (bool)passesAddSilently;
- (bool)passesAllAccess;
- (bool)paymentAllAccess;
- (bool)paymentConfiguration;
- (bool)paymentPresentation;
- (bool)peerPaymentAllAccess;
- (int)processIdentifier;
- (void)setAddSilently:(bool)arg1;
- (void)setPassTypeIDs:(id)arg1;
- (void)setTeamIDs:(id)arg1;
- (bool)supportsWebPayments;
- (id)teamIDs;
- (bool)trustedDeviceEnrollmentInfo;
- (bool)webPayments;
- (bool)winterpegPayments;

@end
