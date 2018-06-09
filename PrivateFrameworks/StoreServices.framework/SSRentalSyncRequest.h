/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSRentalSyncRequest : SSRequest <SSXPCCoding> {
    NSNumber * _accountIdentifier;
    NSNumber * _rentalKeyIdentifier;
    NSArray * _sinfs;
}

@property (readonly) NSNumber *accountIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSNumber *rentalKeyIdentifier;
@property (readonly) NSArray *sinfs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)copyXPCEncoding;
- (id)initWithAccountIdentifier:(id)arg1;
- (id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2;
- (id)initWithSinfs:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)rentalKeyIdentifier;
- (id)sinfs;
- (void)startWithConnectionResponseBlock:(id /* block */)arg1;

@end