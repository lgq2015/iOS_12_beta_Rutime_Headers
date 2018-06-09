/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODestinationInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int hasDisplayAddress : 1; 
        unsigned int hasDisplayName : 1; 
        unsigned int hasSpokenAddress : 1; 
        unsigned int hasSpokenName : 1; 
    }  _has;
    bool  _hasDisplayAddress;
    bool  _hasDisplayName;
    bool  _hasSpokenAddress;
    bool  _hasSpokenName;
}

@property (nonatomic) bool hasDisplayAddress;
@property (nonatomic) bool hasDisplayName;
@property (nonatomic) bool hasHasDisplayAddress;
@property (nonatomic) bool hasHasDisplayName;
@property (nonatomic) bool hasHasSpokenAddress;
@property (nonatomic) bool hasHasSpokenName;
@property (nonatomic) bool hasSpokenAddress;
@property (nonatomic) bool hasSpokenName;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDisplayAddress;
- (bool)hasDisplayName;
- (bool)hasHasDisplayAddress;
- (bool)hasHasDisplayName;
- (bool)hasHasSpokenAddress;
- (bool)hasHasSpokenName;
- (bool)hasSpokenAddress;
- (bool)hasSpokenName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasDisplayAddress:(bool)arg1;
- (void)setHasDisplayName:(bool)arg1;
- (void)setHasHasDisplayAddress:(bool)arg1;
- (void)setHasHasDisplayName:(bool)arg1;
- (void)setHasHasSpokenAddress:(bool)arg1;
- (void)setHasHasSpokenName:(bool)arg1;
- (void)setHasSpokenAddress:(bool)arg1;
- (void)setHasSpokenName:(bool)arg1;
- (void)writeTo:(id)arg1;

@end