/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFClearDevicePasscodeRequest : DMFTaskRequest {
    NSString * _secret;
    NSData * _unlockTokenData;
}

@property (nonatomic, copy) NSString *secret;
@property (nonatomic, copy) NSData *unlockTokenData;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)secret;
- (void)setSecret:(id)arg1;
- (void)setUnlockTokenData:(id)arg1;
- (id)unlockTokenData;

@end
