/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

@interface SFCredentialProviderExtensionState : NSObject <NSCopying, NSSecureCoding> {
    NSString * _containingAppBundleIdentifier;
    bool  _enabled;
    NSString * _localizedDisplayName;
    bool  _supportsIncrementalUpdates;
}

@property (nonatomic, readonly, copy) NSString *containingAppBundleIdentifier;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly, copy) NSString *localizedDisplayName;
@property (nonatomic, readonly) bool supportsIncrementalUpdates;

+ (id)credentialProviderExtensionWithDisabledState;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)containingAppBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnabledState:(bool)arg1 supportsIncrementalUpdates:(bool)arg2;
- (id)initWithEnabledState:(bool)arg1 supportsIncrementalUpdates:(bool)arg2 localizedDisplayName:(id)arg3 containingAppBundleIdentifier:(id)arg4;
- (bool)isEnabled;
- (id)localizedDisplayName;
- (bool)supportsIncrementalUpdates;

@end