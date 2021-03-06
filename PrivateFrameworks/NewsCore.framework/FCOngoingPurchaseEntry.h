/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCOngoingPurchaseEntry : NSObject {
    NSNumber * _appAdamID;
    NSString * _identifier;
    NSNumber * _price;
    NSString * _productIdentifier;
    NSString * _purchaseID;
    NSDate * _purchaseInitiatedTime;
    NSNumber * _storeExternalVersion;
    NSString * _tagID;
    NSString * _vendorIdentifier;
    bool  _webAccessOptIn;
}

@property (nonatomic, copy) NSNumber *appAdamID;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSNumber *price;
@property (nonatomic, copy) NSString *productIdentifier;
@property (nonatomic, copy) NSString *purchaseID;
@property (nonatomic, copy) NSDate *purchaseInitiatedTime;
@property (nonatomic, copy) NSNumber *storeExternalVersion;
@property (nonatomic, copy) NSString *tagID;
@property (nonatomic, copy) NSString *vendorIdentifier;
@property (nonatomic) bool webAccessOptIn;

- (void).cxx_destruct;
- (id)appAdamID;
- (id)dictionaryRepresentation;
- (id)identifier;
- (id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2;
- (id)initWithEntryID:(id)arg1 tagID:(id)arg2 purchaseID:(id)arg3 productIdentifier:(id)arg4 webAccessOptIn:(bool)arg5 appAdamID:(id)arg6 storeExternalVersion:(id)arg7 vendorIdentifier:(id)arg8 purchaseInitiatedTime:(id)arg9 price:(id)arg10;
- (id)price;
- (id)productIdentifier;
- (id)purchaseID;
- (id)purchaseInitiatedTime;
- (void)setAppAdamID:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPrice:(id)arg1;
- (void)setProductIdentifier:(id)arg1;
- (void)setPurchaseID:(id)arg1;
- (void)setPurchaseInitiatedTime:(id)arg1;
- (void)setStoreExternalVersion:(id)arg1;
- (void)setTagID:(id)arg1;
- (void)setVendorIdentifier:(id)arg1;
- (void)setWebAccessOptIn:(bool)arg1;
- (id)storeExternalVersion;
- (id)tagID;
- (id)vendorIdentifier;
- (bool)webAccessOptIn;

@end
