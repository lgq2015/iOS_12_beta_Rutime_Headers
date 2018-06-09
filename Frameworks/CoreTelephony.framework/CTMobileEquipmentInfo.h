/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTMobileEquipmentInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _CSN;
    NSNumber * _ERIVersion;
    NSString * _EUIMID;
    NSString * _ICCID;
    NSString * _IMEI;
    NSString * _IMSI;
    NSString * _MEID;
    NSString * _MIN;
    NSString * _NAI;
    NSNumber * _PRLVersion;
    NSString * _baseId;
    NSString * _baseProfile;
    NSString * _baseVersion;
    NSString * _cdmaIMSI;
    NSString * _currentMobileId;
    NSString * _currentSubscriberId;
    NSString * _displayCSN;
    NSString * _effectiveICCID;
    long long  _slotId;
}

@property (nonatomic, retain) NSString *CSN;
@property (nonatomic, retain) NSNumber *ERIVersion;
@property (nonatomic, retain) NSString *EUIMID;
@property (nonatomic, retain) NSString *ICCID;
@property (nonatomic, retain) NSString *IMEI;
@property (nonatomic, retain) NSString *IMSI;
@property (nonatomic, retain) NSString *MEID;
@property (nonatomic, retain) NSString *MIN;
@property (nonatomic, retain) NSString *NAI;
@property (nonatomic, retain) NSNumber *PRLVersion;
@property (nonatomic, retain) NSString *baseId;
@property (nonatomic, retain) NSString *baseProfile;
@property (nonatomic, retain) NSString *baseVersion;
@property (nonatomic, retain) NSString *cdmaIMSI;
@property (nonatomic, retain) NSString *currentMobileId;
@property (nonatomic, retain) NSString *currentSubscriberId;
@property (nonatomic, retain) NSString *displayCSN;
@property (nonatomic, retain) NSString *effectiveICCID;
@property (nonatomic) long long slotId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CSN;
- (id)ERIVersion;
- (id)EUIMID;
- (id)ICCID;
- (id)IMEI;
- (id)IMSI;
- (id)MEID;
- (id)MIN;
- (id)NAI;
- (id)PRLVersion;
- (id)baseId;
- (id)baseProfile;
- (id)baseVersion;
- (id)cdmaIMSI;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentMobileId;
- (id)currentSubscriberId;
- (id)description;
- (id)displayCSN;
- (id)effectiveICCID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBaseId:(id)arg1;
- (void)setBaseProfile:(id)arg1;
- (void)setBaseVersion:(id)arg1;
- (void)setCSN:(id)arg1;
- (void)setCdmaIMSI:(id)arg1;
- (void)setCurrentMobileId:(id)arg1;
- (void)setCurrentSubscriberId:(id)arg1;
- (void)setDisplayCSN:(id)arg1;
- (void)setERIVersion:(id)arg1;
- (void)setEUIMID:(id)arg1;
- (void)setEffectiveICCID:(id)arg1;
- (void)setICCID:(id)arg1;
- (void)setIMEI:(id)arg1;
- (void)setIMSI:(id)arg1;
- (void)setMEID:(id)arg1;
- (void)setMIN:(id)arg1;
- (void)setNAI:(id)arg1;
- (void)setPRLVersion:(id)arg1;
- (void)setSlotId:(long long)arg1;
- (long long)slotId;

@end