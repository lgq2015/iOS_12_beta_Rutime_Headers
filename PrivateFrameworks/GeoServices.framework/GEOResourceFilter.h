/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceFilter : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _scales;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _scenarios;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) int*scales;
@property (nonatomic, readonly) unsigned long long scalesCount;
@property (nonatomic, readonly) int*scenarios;
@property (nonatomic, readonly) unsigned long long scenariosCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsScales:(id)arg1;
- (int)StringAsScenarios:(id)arg1;
- (void)addScale:(int)arg1;
- (void)addScenario:(int)arg1;
- (void)clearScales;
- (void)clearScenarios;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)scaleAtIndex:(unsigned long long)arg1;
- (int*)scales;
- (id)scalesAsString:(int)arg1;
- (unsigned long long)scalesCount;
- (int)scenarioAtIndex:(unsigned long long)arg1;
- (int*)scenarios;
- (id)scenariosAsString:(int)arg1;
- (unsigned long long)scenariosCount;
- (void)setScales:(int*)arg1 count:(unsigned long long)arg2;
- (void)setScenarios:(int*)arg1 count:(unsigned long long)arg2;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end