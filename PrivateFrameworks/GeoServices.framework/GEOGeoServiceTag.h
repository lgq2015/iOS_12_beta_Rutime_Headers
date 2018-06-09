/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOGeoServiceTag : PBCodable <NSCopying> {
    struct { 
        unsigned int serviceType : 1; 
    }  _has;
    int  _serviceType;
    NSString * _tag;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasServiceType;
@property (nonatomic) int serviceType;
@property (nonatomic, retain) NSString *tag;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)defaultTag;

- (void).cxx_destruct;
- (int)StringAsServiceType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasServiceType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)serviceType;
- (id)serviceTypeAsString:(int)arg1;
- (void)setHasServiceType:(bool)arg1;
- (void)setServiceType:(int)arg1;
- (void)setTag:(id)arg1;
- (id)tag;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end