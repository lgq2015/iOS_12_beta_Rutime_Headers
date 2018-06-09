/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDLinkedPlace : PBCodable <NSCopying> {
    GEOLatLng * _center;
    unsigned long long  _featureId;
    struct { 
        unsigned int featureId : 1; 
    }  _has;
    GEOPDMapsIdentifier * _mapsId;
    NSString * _name;
    GEOStyleAttributes * _styleAttributes;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOLatLng *center;
@property (nonatomic) unsigned long long featureId;
@property (nonatomic, readonly) bool hasCenter;
@property (nonatomic) bool hasFeatureId;
@property (nonatomic, readonly) bool hasMapsId;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasStyleAttributes;
@property (nonatomic, retain) GEOPDMapsIdentifier *mapsId;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) GEOStyleAttributes *styleAttributes;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (id)center;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)featureId;
- (bool)hasCenter;
- (bool)hasFeatureId;
- (bool)hasMapsId;
- (bool)hasName;
- (bool)hasStyleAttributes;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mapsId;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setCenter:(id)arg1;
- (void)setFeatureId:(unsigned long long)arg1;
- (void)setHasFeatureId:(bool)arg1;
- (void)setMapsId:(id)arg1;
- (void)setName:(id)arg1;
- (void)setStyleAttributes:(id)arg1;
- (id)styleAttributes;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end