/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICUserCredentialProvider : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    ICDelegationConsumerService * _delegationConsumerService;
    long long  _delegationDiscoveryCount;
}

+ (id)sharedProvider;

- (void).cxx_destruct;
- (void)_handleCredentialRequestIdentityPropertiesForSession:(id)arg1;
- (void)_handleDelegationAccountUUIDsForSession:(id)arg1;
- (void)_handleIdentityProperties:(id)arg1 forIdentity:(id)arg2 loadingError:(id)arg3 credentialRequest:(id)arg4 session:(id)arg5;
- (void)_handlePendingDelegationRequestsForSession:(id)arg1;
- (void)_handleRequestIndependentPropertiesForSession:(id)arg1;
- (id)init;
- (void)performCredentialRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (void)performCredentialRequests:(id)arg1 withResponseHandler:(id /* block */)arg2;

@end