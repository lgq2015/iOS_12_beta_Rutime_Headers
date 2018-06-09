/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataOriginProvenance : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _deviceID;
    struct { 
        long long majorVersion; 
        long long minorVersion; 
        long long patchVersion; 
    }  _operatingSystemVersion;
    NSString * _productType;
    NSNumber * _sourceID;
    NSString * _sourceVersion;
    long long  _syncProvenance;
    NSString * _systemBuild;
    NSString * _timeZoneName;
}

@property (nonatomic, retain) NSNumber *deviceID;
@property (nonatomic) struct { long long x1; long long x2; long long x3; } operatingSystemVersion;
@property (nonatomic, copy) NSString *productType;
@property (nonatomic, retain) NSNumber *sourceID;
@property (nonatomic, copy) NSString *sourceVersion;
@property (nonatomic) long long syncProvenance;
@property (nonatomic, copy) NSString *systemBuild;
@property (nonatomic, copy) NSString *timeZoneName;

+ (id)dataProvenanceWithSyncProvenance:(long long)arg1 productType:(id)arg2 systemBuild:(id)arg3 operatingSystemVersion:(struct { long long x1; long long x2; long long x3; })arg4 sourceVersion:(id)arg5 timeZoneName:(id)arg6 sourceID:(id)arg7 deviceID:(id)arg8;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceID;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (struct { long long x1; long long x2; long long x3; })operatingSystemVersion;
- (id)productType;
- (void)setDeviceID:(id)arg1;
- (void)setOperatingSystemVersion:(struct { long long x1; long long x2; long long x3; })arg1;
- (void)setProductType:(id)arg1;
- (void)setSourceID:(id)arg1;
- (void)setSourceVersion:(id)arg1;
- (void)setSyncProvenance:(long long)arg1;
- (void)setSystemBuild:(id)arg1;
- (void)setTimeZoneName:(id)arg1;
- (id)sourceID;
- (id)sourceVersion;
- (long long)syncProvenance;
- (id)systemBuild;
- (id)timeZoneName;

@end