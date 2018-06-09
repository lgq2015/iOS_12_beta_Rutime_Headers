/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBDeviceInfo : PBCodable <NSCopying> {
    long long  _deviceDstOffset;
    NSString * _deviceOsVersion;
    NSMutableArray * _devicePreferredLanguages;
    NSString * _devicePushToken;
    NSString * _deviceTimezone;
    int  _deviceTokenEnv;
    NSString * _deviceType;
    long long  _deviceUtcOffset;
    struct { 
        unsigned int deviceDstOffset : 1; 
        unsigned int deviceUtcOffset : 1; 
        unsigned int deviceTokenEnv : 1; 
    }  _has;
}

@property (nonatomic) long long deviceDstOffset;
@property (nonatomic, retain) NSString *deviceOsVersion;
@property (nonatomic, retain) NSMutableArray *devicePreferredLanguages;
@property (nonatomic, retain) NSString *devicePushToken;
@property (nonatomic, retain) NSString *deviceTimezone;
@property (nonatomic) int deviceTokenEnv;
@property (nonatomic, retain) NSString *deviceType;
@property (nonatomic) long long deviceUtcOffset;
@property (nonatomic) bool hasDeviceDstOffset;
@property (nonatomic, readonly) bool hasDeviceOsVersion;
@property (nonatomic, readonly) bool hasDevicePushToken;
@property (nonatomic, readonly) bool hasDeviceTimezone;
@property (nonatomic) bool hasDeviceTokenEnv;
@property (nonatomic, readonly) bool hasDeviceType;
@property (nonatomic) bool hasDeviceUtcOffset;

+ (Class)devicePreferredLanguageType;

- (void).cxx_destruct;
- (void)addDevicePreferredLanguage:(id)arg1;
- (void)clearDevicePreferredLanguages;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)deviceDstOffset;
- (id)deviceOsVersion;
- (id)devicePreferredLanguageAtIndex:(unsigned long long)arg1;
- (id)devicePreferredLanguages;
- (unsigned long long)devicePreferredLanguagesCount;
- (id)devicePushToken;
- (id)deviceTimezone;
- (int)deviceTokenEnv;
- (id)deviceType;
- (long long)deviceUtcOffset;
- (id)dictionaryRepresentation;
- (bool)hasDeviceDstOffset;
- (bool)hasDeviceOsVersion;
- (bool)hasDevicePushToken;
- (bool)hasDeviceTimezone;
- (bool)hasDeviceTokenEnv;
- (bool)hasDeviceType;
- (bool)hasDeviceUtcOffset;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeviceDstOffset:(long long)arg1;
- (void)setDeviceOsVersion:(id)arg1;
- (void)setDevicePreferredLanguages:(id)arg1;
- (void)setDevicePushToken:(id)arg1;
- (void)setDeviceTimezone:(id)arg1;
- (void)setDeviceTokenEnv:(int)arg1;
- (void)setDeviceType:(id)arg1;
- (void)setDeviceUtcOffset:(long long)arg1;
- (void)setHasDeviceDstOffset:(bool)arg1;
- (void)setHasDeviceTokenEnv:(bool)arg1;
- (void)setHasDeviceUtcOffset:(bool)arg1;
- (void)writeTo:(id)arg1;

@end