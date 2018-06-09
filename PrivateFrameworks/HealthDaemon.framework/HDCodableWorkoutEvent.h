/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableWorkoutEvent : PBCodable <NSCopying> {
    double  _date;
    double  _duration;
    struct { 
        unsigned int date : 1; 
        unsigned int duration : 1; 
        unsigned int swimmingStrokeStyle : 1; 
        unsigned int type : 1; 
    }  _has;
    HDCodableMetadataDictionary * _metadataDictionary;
    long long  _swimmingStrokeStyle;
    long long  _type;
}

@property (nonatomic) double date;
@property (nonatomic) double duration;
@property (nonatomic) bool hasDate;
@property (nonatomic) bool hasDuration;
@property (nonatomic, readonly) bool hasMetadataDictionary;
@property (nonatomic) bool hasSwimmingStrokeStyle;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) HDCodableMetadataDictionary *metadataDictionary;
@property (nonatomic) long long swimmingStrokeStyle;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)date;
- (id)decodedDateIntervalStartDate;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (bool)hasDate;
- (bool)hasDuration;
- (bool)hasMetadataDictionary;
- (bool)hasSwimmingStrokeStyle;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadataDictionary;
- (bool)readFrom:(id)arg1;
- (void)setDate:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setHasDate:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasSwimmingStrokeStyle:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setMetadataDictionary:(id)arg1;
- (void)setSwimmingStrokeStyle:(long long)arg1;
- (void)setType:(long long)arg1;
- (long long)swimmingStrokeStyle;
- (long long)type;
- (void)writeTo:(id)arg1;

@end