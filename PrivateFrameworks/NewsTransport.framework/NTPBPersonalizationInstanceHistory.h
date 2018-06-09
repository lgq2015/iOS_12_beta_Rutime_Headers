/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPersonalizationInstanceHistory : PBCodable <NSCopying> {
    struct { 
        unsigned int lastChangeNumber : 1; 
    }  _has;
    NSString * _instanceIdentifier;
    unsigned long long  _lastChangeNumber;
}

@property (nonatomic, readonly) bool hasInstanceIdentifier;
@property (nonatomic) bool hasLastChangeNumber;
@property (nonatomic, retain) NSString *instanceIdentifier;
@property (nonatomic) unsigned long long lastChangeNumber;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInstanceIdentifier;
- (bool)hasLastChangeNumber;
- (unsigned long long)hash;
- (id)instanceIdentifier;
- (bool)isEqual:(id)arg1;
- (unsigned long long)lastChangeNumber;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLastChangeNumber:(bool)arg1;
- (void)setInstanceIdentifier:(id)arg1;
- (void)setLastChangeNumber:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end