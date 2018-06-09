/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDEurotasData : HDHealthServiceCharacteristic {
    unsigned short  _activeEnergy;
    unsigned short  _averageHeartRate;
    bool  _hasActiveEnergy;
    bool  _hasAverageHeartRate;
    bool  _hasHeartRate;
    bool  _hasTotalEnergy;
    unsigned short  _heartRate;
    unsigned short  _totalEnergy;
}

@property (nonatomic, readonly) unsigned short activeEnergy;
@property (nonatomic, readonly) unsigned short averageHeartRate;
@property (nonatomic, readonly) bool hasActiveEnergy;
@property (nonatomic, readonly) bool hasAverageHeartRate;
@property (nonatomic, readonly) bool hasHeartRate;
@property (nonatomic, readonly) bool hasTotalEnergy;
@property (nonatomic, readonly) unsigned short heartRate;
@property (nonatomic, readonly) unsigned short totalEnergy;

+ (id)uuid;

- (bool)_appendUInt16Value:(unsigned short)arg1 type:(unsigned char)arg2 toData:(char **)arg3 before:(const char *)arg4;
- (unsigned short)activeEnergy;
- (void)addActiveEnergy:(unsigned short)arg1;
- (void)addAverageHeartRate:(unsigned short)arg1;
- (void)addHeartRate:(unsigned short)arg1;
- (void)addTotalEnergy:(unsigned short)arg1;
- (unsigned short)averageHeartRate;
- (id)description;
- (id)getBinaryValueWithError:(id*)arg1;
- (bool)hasActiveEnergy;
- (bool)hasAverageHeartRate;
- (bool)hasHeartRate;
- (bool)hasTotalEnergy;
- (unsigned short)heartRate;
- (id)initForWriting;
- (bool)isEqual:(id)arg1;
- (unsigned short)totalEnergy;

@end