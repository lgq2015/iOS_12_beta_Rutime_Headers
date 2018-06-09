/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentStatusRequest : PKPeerPaymentWebServiceRequest {
    NSString * _paymentIdentifier;
}

@property (nonatomic, copy) NSString *paymentIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2;
- (id)paymentIdentifier;
- (void)setPaymentIdentifier:(id)arg1;

@end