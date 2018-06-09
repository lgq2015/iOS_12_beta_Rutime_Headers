/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPNotificationSyncRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int maxChanges : 1; 
        unsigned int wantsChanges : 1; 
    }  _has;
    unsigned int  _maxChanges;
    NSData * _serverChangeToken;
    bool  _wantsChanges;
}

@property (nonatomic) bool hasMaxChanges;
@property (nonatomic, readonly) bool hasServerChangeToken;
@property (nonatomic) bool hasWantsChanges;
@property (nonatomic) unsigned int maxChanges;
@property (nonatomic, retain) NSData *serverChangeToken;
@property (nonatomic) bool wantsChanges;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxChanges;
- (bool)hasServerChangeToken;
- (bool)hasWantsChanges;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxChanges;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)serverChangeToken;
- (void)setHasMaxChanges:(bool)arg1;
- (void)setHasWantsChanges:(bool)arg1;
- (void)setMaxChanges:(unsigned int)arg1;
- (void)setServerChangeToken:(id)arg1;
- (void)setWantsChanges:(bool)arg1;
- (bool)wantsChanges;
- (void)writeTo:(id)arg1;

@end