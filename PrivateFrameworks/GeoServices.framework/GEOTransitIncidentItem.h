/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitIncidentItem : PBCodable <NSCopying> {
    NSString * _transitIncidentTitle;
    NSString * _transitLineMuid;
}

@property (nonatomic, readonly) bool hasTransitIncidentTitle;
@property (nonatomic, readonly) bool hasTransitLineMuid;
@property (nonatomic, retain) NSString *transitIncidentTitle;
@property (nonatomic, retain) NSString *transitLineMuid;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTransitIncidentTitle;
- (bool)hasTransitLineMuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTransitIncidentTitle:(id)arg1;
- (void)setTransitLineMuid:(id)arg1;
- (id)transitIncidentTitle;
- (id)transitLineMuid;
- (void)writeTo:(id)arg1;

@end
