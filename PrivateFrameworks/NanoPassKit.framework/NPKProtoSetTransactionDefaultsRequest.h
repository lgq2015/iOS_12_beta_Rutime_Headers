/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoSetTransactionDefaultsRequest : PBRequest <NSCopying> {
    NSData * _defaultBillingAddresses;
    NSData * _defaultContactEmail;
    NSData * _defaultContactName;
    NSData * _defaultContactPhone;
    NSData * _defaultShippingAddress;
}

@property (nonatomic, retain) NSData *defaultBillingAddresses;
@property (nonatomic, retain) NSData *defaultContactEmail;
@property (nonatomic, retain) NSData *defaultContactName;
@property (nonatomic, retain) NSData *defaultContactPhone;
@property (nonatomic, retain) NSData *defaultShippingAddress;
@property (nonatomic, readonly) bool hasDefaultBillingAddresses;
@property (nonatomic, readonly) bool hasDefaultContactEmail;
@property (nonatomic, readonly) bool hasDefaultContactName;
@property (nonatomic, readonly) bool hasDefaultContactPhone;
@property (nonatomic, readonly) bool hasDefaultShippingAddress;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultBillingAddresses;
- (id)defaultContactEmail;
- (id)defaultContactName;
- (id)defaultContactPhone;
- (id)defaultShippingAddress;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDefaultBillingAddresses;
- (bool)hasDefaultContactEmail;
- (bool)hasDefaultContactName;
- (bool)hasDefaultContactPhone;
- (bool)hasDefaultShippingAddress;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDefaultBillingAddresses:(id)arg1;
- (void)setDefaultContactEmail:(id)arg1;
- (void)setDefaultContactName:(id)arg1;
- (void)setDefaultContactPhone:(id)arg1;
- (void)setDefaultShippingAddress:(id)arg1;
- (void)writeTo:(id)arg1;

@end