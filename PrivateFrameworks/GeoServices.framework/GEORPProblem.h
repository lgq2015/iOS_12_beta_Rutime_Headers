/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblem : PBCodable <NSCopying> {
    struct { 
        unsigned int problemType : 1; 
        unsigned int protocolVersion : 1; 
    }  _has;
    GEORPProblemContext * _problemContext;
    GEORPProblemCorrections * _problemCorrections;
    int  _problemType;
    unsigned int  _protocolVersion;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _userPaths;
}

@property (nonatomic, readonly) bool hasProblemContext;
@property (nonatomic, readonly) bool hasProblemCorrections;
@property (nonatomic) bool hasProblemType;
@property (nonatomic) bool hasProtocolVersion;
@property (nonatomic, retain) GEORPProblemContext *problemContext;
@property (nonatomic, retain) GEORPProblemCorrections *problemCorrections;
@property (nonatomic) int problemType;
@property (nonatomic) unsigned int protocolVersion;
@property (nonatomic, readonly) int*userPaths;
@property (nonatomic, readonly) unsigned long long userPathsCount;

- (void).cxx_destruct;
- (int)StringAsProblemType:(id)arg1;
- (int)StringAsUserPaths:(id)arg1;
- (void)addUserPath:(int)arg1;
- (void)clearUserPaths;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasProblemContext;
- (bool)hasProblemCorrections;
- (bool)hasProblemType;
- (bool)hasProtocolVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)problemContext;
- (id)problemCorrections;
- (int)problemType;
- (id)problemTypeAsString:(int)arg1;
- (unsigned int)protocolVersion;
- (bool)readFrom:(id)arg1;
- (void)setHasProblemType:(bool)arg1;
- (void)setHasProtocolVersion:(bool)arg1;
- (void)setProblemContext:(id)arg1;
- (void)setProblemCorrections:(id)arg1;
- (void)setProblemType:(int)arg1;
- (void)setProtocolVersion:(unsigned int)arg1;
- (void)setUserPaths:(int*)arg1 count:(unsigned long long)arg2;
- (int)userPathAtIndex:(unsigned long long)arg1;
- (int*)userPaths;
- (id)userPathsAsString:(int)arg1;
- (unsigned long long)userPathsCount;
- (void)writeTo:(id)arg1;

@end
