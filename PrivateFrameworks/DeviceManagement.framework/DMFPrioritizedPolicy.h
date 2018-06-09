/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFPrioritizedPolicy : NSObject {
    long long  _policy;
    long long  _priority;
}

@property (nonatomic) long long policy;
@property (nonatomic) long long priority;

+ (long long)arbitratePolicyForPrioritizedPolicies:(id)arg1;
+ (id)prioritizedPoliciesForAppPolicy:(id)arg1 bundleIdentifier:(id)arg2 categoryPolicy:(id)arg3 categoryIdentifier:(id)arg4 webPolicy:(id)arg5 webDomains:(id)arg6;

- (long long)compare:(id)arg1;
- (id)initWithEffectivePolicy:(id)arg1 identifier:(id)arg2;
- (long long)policy;
- (long long)priority;
- (void)setPolicy:(long long)arg1;
- (void)setPriority:(long long)arg1;

@end