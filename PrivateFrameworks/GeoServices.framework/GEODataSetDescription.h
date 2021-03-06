/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODataSetDescription : PBCodable <NSCopying> {
    NSString * _dataSetDescription;
    struct { 
        unsigned int identifier : 1; 
    }  _has;
    unsigned int  _identifier;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *dataSetDescription;
@property (nonatomic, readonly) bool hasDataSetDescription;
@property (nonatomic) bool hasIdentifier;
@property (nonatomic) unsigned int identifier;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSetDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDataSetDescription;
- (bool)hasIdentifier;
- (unsigned long long)hash;
- (unsigned int)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDataSetDescription:(id)arg1;
- (void)setHasIdentifier:(bool)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
