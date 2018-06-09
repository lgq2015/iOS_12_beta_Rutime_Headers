/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDMDNSResponderServicesStats : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int maxServicesCount : 1; 
    }  _has;
    unsigned int  _maxServicesCount;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasMaxServicesCount;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int maxServicesCount;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxServicesCount;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxServicesCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMaxServicesCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setMaxServicesCount:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end