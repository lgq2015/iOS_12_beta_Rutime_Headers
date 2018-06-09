/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMHomeAccessControl : HMAccessControl {
    bool  _administrator;
    bool  _owner;
    HMUserPresenceAuthorization * _presenceAuthStatus;
    HMUserPresenceCompute * _presenceComputeStatus;
    bool  _remoteAccessAllowed;
}

@property (getter=isAdministrator, nonatomic) bool administrator;
@property (getter=isOwner) bool owner;
@property (nonatomic, retain) HMUserPresenceAuthorization *presenceAuthStatus;
@property (nonatomic, retain) HMUserPresenceCompute *presenceComputeStatus;
@property (getter=isRemoteAccessAllowed) bool remoteAccessAllowed;

- (void).cxx_destruct;
- (id)initWithUser:(id)arg1 owner:(bool)arg2 administratorPrivilege:(bool)arg3 remoteAccess:(bool)arg4 presenceAuthStatus:(id)arg5 presenceComputeStatus:(id)arg6;
- (bool)isAdministrator;
- (bool)isEqual:(id)arg1;
- (bool)isOwner;
- (bool)isRemoteAccessAllowed;
- (id)presenceAuthStatus;
- (unsigned long long)presenceAuthorizationStatus;
- (unsigned long long)presenceComputationStatus;
- (id)presenceComputeStatus;
- (void)setAdministrator:(bool)arg1;
- (void)setOwner:(bool)arg1;
- (void)setPresenceAuthStatus:(id)arg1;
- (void)setPresenceComputeStatus:(id)arg1;
- (void)setRemoteAccessAllowed:(bool)arg1;
- (void)updateAdministratorAccess:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)updateRemoteAccess:(bool)arg1 completionHandler:(id /* block */)arg2;

@end