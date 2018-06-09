/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProtobufPaymentInstrument : PBCodable <NSCopying> {
    NSMutableArray * _associatedWebDomains;
    NSString * _displayName;
    struct { 
        unsigned int ingestedDate : 1; 
        unsigned int peerPaymentAccountBalance : 1; 
        unsigned int peerPaymentAccountState : 1; 
        unsigned int hasAssociatedPeerPaymentAccount : 1; 
        unsigned int supportsAutomaticSelection : 1; 
    }  _has;
    bool  _hasAssociatedPeerPaymentAccount;
    double  _ingestedDate;
    NSString * _issuerCountryCode;
    NSData * _manifestHash;
    NSString * _passID;
    NSMutableArray * _paymentApplications;
    long long  _peerPaymentAccountBalance;
    NSString * _peerPaymentAccountCurrency;
    unsigned int  _peerPaymentAccountState;
    NSString * _primaryAccountIdentifier;
    NSString * _primaryAccountNumberSuffix;
    bool  _supportsAutomaticSelection;
}

@property (nonatomic, retain) NSMutableArray *associatedWebDomains;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic) bool hasAssociatedPeerPaymentAccount;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic) bool hasHasAssociatedPeerPaymentAccount;
@property (nonatomic) bool hasIngestedDate;
@property (nonatomic, readonly) bool hasIssuerCountryCode;
@property (nonatomic, readonly) bool hasManifestHash;
@property (nonatomic, readonly) bool hasPassID;
@property (nonatomic) bool hasPeerPaymentAccountBalance;
@property (nonatomic, readonly) bool hasPeerPaymentAccountCurrency;
@property (nonatomic) bool hasPeerPaymentAccountState;
@property (nonatomic, readonly) bool hasPrimaryAccountIdentifier;
@property (nonatomic, readonly) bool hasPrimaryAccountNumberSuffix;
@property (nonatomic) bool hasSupportsAutomaticSelection;
@property (nonatomic) double ingestedDate;
@property (nonatomic, retain) NSString *issuerCountryCode;
@property (nonatomic, retain) NSData *manifestHash;
@property (nonatomic, retain) NSString *passID;
@property (nonatomic, retain) NSMutableArray *paymentApplications;
@property (nonatomic) long long peerPaymentAccountBalance;
@property (nonatomic, retain) NSString *peerPaymentAccountCurrency;
@property (nonatomic) unsigned int peerPaymentAccountState;
@property (nonatomic, retain) NSString *primaryAccountIdentifier;
@property (nonatomic, retain) NSString *primaryAccountNumberSuffix;
@property (nonatomic) bool supportsAutomaticSelection;

+ (Class)associatedWebDomainsType;
+ (Class)paymentApplicationsType;

- (void).cxx_destruct;
- (void)addAssociatedWebDomains:(id)arg1;
- (void)addPaymentApplications:(id)arg1;
- (id)associatedWebDomains;
- (id)associatedWebDomainsAtIndex:(unsigned long long)arg1;
- (unsigned long long)associatedWebDomainsCount;
- (void)clearAssociatedWebDomains;
- (void)clearPaymentApplications;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (bool)hasAssociatedPeerPaymentAccount;
- (bool)hasDisplayName;
- (bool)hasHasAssociatedPeerPaymentAccount;
- (bool)hasIngestedDate;
- (bool)hasIssuerCountryCode;
- (bool)hasManifestHash;
- (bool)hasPassID;
- (bool)hasPeerPaymentAccountBalance;
- (bool)hasPeerPaymentAccountCurrency;
- (bool)hasPeerPaymentAccountState;
- (bool)hasPrimaryAccountIdentifier;
- (bool)hasPrimaryAccountNumberSuffix;
- (bool)hasSupportsAutomaticSelection;
- (unsigned long long)hash;
- (double)ingestedDate;
- (bool)isEqual:(id)arg1;
- (id)issuerCountryCode;
- (id)manifestHash;
- (void)mergeFrom:(id)arg1;
- (id)passID;
- (id)paymentApplications;
- (id)paymentApplicationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)paymentApplicationsCount;
- (long long)peerPaymentAccountBalance;
- (id)peerPaymentAccountCurrency;
- (unsigned int)peerPaymentAccountState;
- (id)primaryAccountIdentifier;
- (id)primaryAccountNumberSuffix;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedWebDomains:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHasAssociatedPeerPaymentAccount:(bool)arg1;
- (void)setHasHasAssociatedPeerPaymentAccount:(bool)arg1;
- (void)setHasIngestedDate:(bool)arg1;
- (void)setHasPeerPaymentAccountBalance:(bool)arg1;
- (void)setHasPeerPaymentAccountState:(bool)arg1;
- (void)setHasSupportsAutomaticSelection:(bool)arg1;
- (void)setIngestedDate:(double)arg1;
- (void)setIssuerCountryCode:(id)arg1;
- (void)setManifestHash:(id)arg1;
- (void)setPassID:(id)arg1;
- (void)setPaymentApplications:(id)arg1;
- (void)setPeerPaymentAccountBalance:(long long)arg1;
- (void)setPeerPaymentAccountCurrency:(id)arg1;
- (void)setPeerPaymentAccountState:(unsigned int)arg1;
- (void)setPrimaryAccountIdentifier:(id)arg1;
- (void)setPrimaryAccountNumberSuffix:(id)arg1;
- (void)setSupportsAutomaticSelection:(bool)arg1;
- (bool)supportsAutomaticSelection;
- (void)writeTo:(id)arg1;

@end