/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOClientMetrics : PBCodable <NSCopying> {
    struct { 
        unsigned int responseSource : 1; 
    }  _has;
    GEOClientNetworkMetrics * _networkMetrics;
    int  _responseSource;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasNetworkMetrics;
@property (nonatomic) bool hasResponseSource;
@property (nonatomic, retain) GEOClientNetworkMetrics *networkMetrics;
@property (nonatomic) int responseSource;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsResponseSource:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNetworkMetrics;
- (bool)hasResponseSource;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)networkMetrics;
- (bool)readFrom:(id)arg1;
- (int)responseSource;
- (id)responseSourceAsString:(int)arg1;
- (void)setHasResponseSource:(bool)arg1;
- (void)setNetworkMetrics:(id)arg1;
- (void)setResponseSource:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end