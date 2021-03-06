/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentStatmentRequest : PKPeerPaymentWebServiceRequest {
    NSString * _emailAddress;
}

@property (nonatomic, copy) NSString *emailAddress;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2;
- (id)emailAddress;
- (void)setEmailAddress:(id)arg1;

@end
