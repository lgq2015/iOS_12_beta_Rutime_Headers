/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSafariAutoFillAuthenticationEvent : PBCodable <NSCopying> {
    int  _category;
    int  _client;
    NSString * _errorCode;
    NSString * _errorDomain;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int category : 1; 
        unsigned int client : 1; 
        unsigned int status : 1; 
        unsigned int onPageLoad : 1; 
    }  _has;
    bool  _onPageLoad;
    int  _status;
    unsigned long long  _timestamp;
}

@property (nonatomic) int category;
@property (nonatomic) int client;
@property (nonatomic, retain) NSString *errorCode;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic) bool hasCategory;
@property (nonatomic) bool hasClient;
@property (nonatomic, readonly) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorDomain;
@property (nonatomic) bool hasOnPageLoad;
@property (nonatomic) bool hasStatus;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool onPageLoad;
@property (nonatomic) int status;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsCategory:(id)arg1;
- (int)StringAsClient:(id)arg1;
- (int)StringAsStatus:(id)arg1;
- (int)category;
- (id)categoryAsString:(int)arg1;
- (int)client;
- (id)clientAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorCode;
- (id)errorDomain;
- (bool)hasCategory;
- (bool)hasClient;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (bool)hasOnPageLoad;
- (bool)hasStatus;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)onPageLoad;
- (bool)readFrom:(id)arg1;
- (void)setCategory:(int)arg1;
- (void)setClient:(int)arg1;
- (void)setErrorCode:(id)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasCategory:(bool)arg1;
- (void)setHasClient:(bool)arg1;
- (void)setHasOnPageLoad:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setOnPageLoad:(bool)arg1;
- (void)setStatus:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end