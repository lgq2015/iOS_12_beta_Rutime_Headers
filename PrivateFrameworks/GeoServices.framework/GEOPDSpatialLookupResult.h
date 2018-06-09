/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSpatialLookupResult : PBCodable <NSCopying> {
    GEOPDBounds * _bounds;
    GEOLatLng * _center;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _mappedCategorys;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDBounds *bounds;
@property (nonatomic, retain) GEOLatLng *center;
@property (nonatomic, readonly) bool hasBounds;
@property (nonatomic, readonly) bool hasCenter;
@property (nonatomic, readonly) int*mappedCategorys;
@property (nonatomic, readonly) unsigned long long mappedCategorysCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)spatialLookupResultForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsMappedCategorys:(id)arg1;
- (void)addMappedCategory:(int)arg1;
- (id)bounds;
- (id)center;
- (void)clearMappedCategorys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBounds;
- (bool)hasCenter;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)mappedCategoryAtIndex:(unsigned long long)arg1;
- (int*)mappedCategorys;
- (id)mappedCategorysAsString:(int)arg1;
- (unsigned long long)mappedCategorysCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBounds:(id)arg1;
- (void)setCenter:(id)arg1;
- (void)setMappedCategorys:(int*)arg1 count:(unsigned long long)arg2;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end