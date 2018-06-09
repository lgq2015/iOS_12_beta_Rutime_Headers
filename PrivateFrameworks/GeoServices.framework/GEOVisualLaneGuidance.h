/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVisualLaneGuidance : PBCodable <NSCopying> {
    NSMutableArray * _instructions;
    NSMutableArray * _laneInfos;
    NSMutableArray * _titles;
}

@property (nonatomic, retain) NSMutableArray *instructions;
@property (nonatomic, retain) NSMutableArray *laneInfos;
@property (nonatomic, retain) NSMutableArray *titles;

+ (Class)instructionType;
+ (Class)laneInfoType;
+ (Class)titleType;

- (void).cxx_destruct;
- (void)addInstruction:(id)arg1;
- (void)addLaneInfo:(id)arg1;
- (void)addTitle:(id)arg1;
- (void)clearInstructions;
- (void)clearLaneInfos;
- (void)clearTitles;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)instructionAtIndex:(unsigned long long)arg1;
- (id)instructions;
- (unsigned long long)instructionsCount;
- (bool)isEqual:(id)arg1;
- (id)laneInfoAtIndex:(unsigned long long)arg1;
- (id)laneInfos;
- (unsigned long long)laneInfosCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setInstructions:(id)arg1;
- (void)setLaneInfos:(id)arg1;
- (void)setTitles:(id)arg1;
- (id)titleAtIndex:(unsigned long long)arg1;
- (id)titles;
- (unsigned long long)titlesCount;
- (void)writeTo:(id)arg1;

@end