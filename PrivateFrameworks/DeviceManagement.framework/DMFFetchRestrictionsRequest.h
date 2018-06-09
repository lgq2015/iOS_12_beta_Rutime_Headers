/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFFetchRestrictionsRequest : DMFTaskRequest {
    bool  _includeProfileRestrictions;
    unsigned long long  _profileFilterFlags;
}

@property (nonatomic) bool includeProfileRestrictions;
@property (nonatomic) unsigned long long profileFilterFlags;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (bool)includeProfileRestrictions;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)profileFilterFlags;
- (void)setIncludeProfileRestrictions:(bool)arg1;
- (void)setProfileFilterFlags:(unsigned long long)arg1;

@end