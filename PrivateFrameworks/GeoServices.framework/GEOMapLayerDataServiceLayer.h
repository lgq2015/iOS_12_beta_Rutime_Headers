/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapLayerDataServiceLayer : PBCodable <NSCopying> {
    struct { 
        unsigned int identifier : 1; 
    }  _has;
    unsigned int  _identifier;
}

@property (nonatomic) bool hasIdentifier;
@property (nonatomic) unsigned int identifier;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (unsigned long long)hash;
- (unsigned int)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIdentifier:(bool)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end