/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentDeviceProvisioningData : NSObject <NSSecureCoding> {
    NSString * _deviceName;
    CLLocation * _location;
    NSString * _phoneNumber;
    NSNumber * _primaryJSBLSequenceCounter;
    NSString * _signedPhoneNumber;
    NSString * _signedPhoneNumberVersion;
}

@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, readonly) NSString *extensiveLatitude;
@property (nonatomic, readonly) NSString *extensiveLongitude;
@property (nonatomic, copy) CLLocation *location;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSNumber *primaryJSBLSequenceCounter;
@property (nonatomic, copy) NSString *signedPhoneNumber;
@property (nonatomic, copy) NSString *signedPhoneNumberVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (id)extensiveLatitude;
- (id)extensiveLongitude;
- (id)initWithCoder:(id)arg1;
- (id)location;
- (id)phoneNumber;
- (id)primaryJSBLSequenceCounter;
- (void)setDeviceName:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPrimaryJSBLSequenceCounter:(id)arg1;
- (void)setSignedPhoneNumber:(id)arg1;
- (void)setSignedPhoneNumberVersion:(id)arg1;
- (id)signedPhoneNumber;
- (id)signedPhoneNumberVersion;

@end
