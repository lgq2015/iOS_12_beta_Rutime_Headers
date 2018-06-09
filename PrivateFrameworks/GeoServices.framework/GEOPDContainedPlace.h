/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDContainedPlace : PBCodable <NSCopying> {
    NSMutableArray * _childPlaces;
    unsigned long long  _featureId;
    struct { 
        unsigned int featureId : 1; 
    }  _has;
    GEOPDLinkedPlace * _parentPlace;
    NSMutableArray * _siblingPlaces;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *childPlaces;
@property (nonatomic) unsigned long long featureId;
@property (nonatomic) bool hasFeatureId;
@property (nonatomic, readonly) bool hasParentPlace;
@property (nonatomic, retain) GEOPDLinkedPlace *parentPlace;
@property (nonatomic, retain) NSMutableArray *siblingPlaces;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)childPlaceType;
+ (Class)siblingPlaceType;

- (void).cxx_destruct;
- (void)addChildPlace:(id)arg1;
- (void)addSiblingPlace:(id)arg1;
- (id)childPlaceAtIndex:(unsigned long long)arg1;
- (id)childPlaces;
- (unsigned long long)childPlacesCount;
- (void)clearChildPlaces;
- (void)clearSiblingPlaces;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)featureId;
- (bool)hasFeatureId;
- (bool)hasParentPlace;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)parentPlace;
- (bool)readFrom:(id)arg1;
- (void)setChildPlaces:(id)arg1;
- (void)setFeatureId:(unsigned long long)arg1;
- (void)setHasFeatureId:(bool)arg1;
- (void)setParentPlace:(id)arg1;
- (void)setSiblingPlaces:(id)arg1;
- (id)siblingPlaceAtIndex:(unsigned long long)arg1;
- (id)siblingPlaces;
- (unsigned long long)siblingPlacesCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end