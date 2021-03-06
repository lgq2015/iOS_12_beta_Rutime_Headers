/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentCredentialMetadataCurrency : PKPaymentCredentialMetadata {
    NSString * _currencyCode;
}

@property (nonatomic, readonly, copy) NSString *currencyCode;

- (void).cxx_destruct;
- (id)currencyCode;
- (id)displayString;
- (id)initWithConfiguration:(id)arg1;

@end
