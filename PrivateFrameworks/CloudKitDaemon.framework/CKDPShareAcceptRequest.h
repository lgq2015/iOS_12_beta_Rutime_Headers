/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShareAcceptRequest : PBRequest <NSCopying> {
    bool  _acceptedInProcess;
    NSString * _etag;
    struct { 
        unsigned int publicKeyVersion : 1; 
        unsigned int acceptedInProcess : 1; 
    }  _has;
    NSString * _participantId;
    CKDPProtectionInfo * _protectionInfo;
    CKDPProtectionInfo * _publicKey;
    int  _publicKeyVersion;
    CKDPProtectionInfo * _selfAddedPcs;
    CKDPShareIdentifier * _shareId;
}

@property (nonatomic) bool acceptedInProcess;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic) bool hasAcceptedInProcess;
@property (nonatomic, readonly) bool hasEtag;
@property (nonatomic, readonly) bool hasParticipantId;
@property (nonatomic, readonly) bool hasProtectionInfo;
@property (nonatomic, readonly) bool hasPublicKey;
@property (nonatomic) bool hasPublicKeyVersion;
@property (nonatomic, readonly) bool hasSelfAddedPcs;
@property (nonatomic, readonly) bool hasShareId;
@property (nonatomic, retain) NSString *participantId;
@property (nonatomic, retain) CKDPProtectionInfo *protectionInfo;
@property (nonatomic, retain) CKDPProtectionInfo *publicKey;
@property (nonatomic) int publicKeyVersion;
@property (nonatomic, retain) CKDPProtectionInfo *selfAddedPcs;
@property (nonatomic, retain) CKDPShareIdentifier *shareId;

+ (id)options;

- (void).cxx_destruct;
- (bool)acceptedInProcess;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etag;
- (bool)hasAcceptedInProcess;
- (bool)hasEtag;
- (bool)hasParticipantId;
- (bool)hasProtectionInfo;
- (bool)hasPublicKey;
- (bool)hasPublicKeyVersion;
- (bool)hasSelfAddedPcs;
- (bool)hasShareId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)participantId;
- (id)protectionInfo;
- (id)publicKey;
- (int)publicKeyVersion;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)selfAddedPcs;
- (void)setAcceptedInProcess:(bool)arg1;
- (void)setEtag:(id)arg1;
- (void)setHasAcceptedInProcess:(bool)arg1;
- (void)setHasPublicKeyVersion:(bool)arg1;
- (void)setParticipantId:(id)arg1;
- (void)setProtectionInfo:(id)arg1;
- (void)setPublicKey:(id)arg1;
- (void)setPublicKeyVersion:(int)arg1;
- (void)setSelfAddedPcs:(id)arg1;
- (void)setShareId:(id)arg1;
- (id)shareId;
- (void)writeTo:(id)arg1;

@end