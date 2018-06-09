/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPTransitLineTileInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int transitLineMuid : 1; 
    }  _has;
    unsigned long long  _transitLineMuid;
    NSString * _transitLineName;
    NSString * _transitSystemName;
}

@property (nonatomic) bool hasTransitLineMuid;
@property (nonatomic, readonly) bool hasTransitLineName;
@property (nonatomic, readonly) bool hasTransitSystemName;
@property (nonatomic) unsigned long long transitLineMuid;
@property (nonatomic, retain) NSString *transitLineName;
@property (nonatomic, retain) NSString *transitSystemName;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTransitLineMuid;
- (bool)hasTransitLineName;
- (bool)hasTransitSystemName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTransitLineMuid:(bool)arg1;
- (void)setTransitLineMuid:(unsigned long long)arg1;
- (void)setTransitLineName:(id)arg1;
- (void)setTransitSystemName:(id)arg1;
- (unsigned long long)transitLineMuid;
- (id)transitLineName;
- (id)transitSystemName;
- (void)writeTo:(id)arg1;

@end