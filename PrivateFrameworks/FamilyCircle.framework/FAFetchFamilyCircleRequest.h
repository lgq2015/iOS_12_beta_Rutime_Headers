/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAFetchFamilyCircleRequest : FAFamilyCircleRequest {
    bool  _doNotFetchFromServer;
    NSArray * _expectedDSIDs;
    bool  _forceServerFetch;
    bool  _promptUserToResolveAuthenticatonFailure;
    NSDictionary * _serverResponse;
    bool  _signedInAccountShouldBeApprover;
}

@property bool doNotFetchFromServer;
@property (copy) NSArray *expectedDSIDs;
@property bool forceServerFetch;
@property bool promptUserToResolveAuthenticatonFailure;
@property (readonly, retain) NSDictionary *serverResponse;
@property bool signedInAccountShouldBeApprover;

- (void).cxx_destruct;
- (bool)doNotFetchFromServer;
- (id)expectedDSIDs;
- (bool)forceServerFetch;
- (bool)promptUserToResolveAuthenticatonFailure;
- (id)requestOptions;
- (id)serverResponse;
- (void)setDoNotFetchFromServer:(bool)arg1;
- (void)setExpectedDSIDs:(id)arg1;
- (void)setForceServerFetch:(bool)arg1;
- (void)setPromptUserToResolveAuthenticatonFailure:(bool)arg1;
- (void)setSignedInAccountShouldBeApprover:(bool)arg1;
- (bool)signedInAccountShouldBeApprover;
- (void)startRequestWithCompletionHandler:(id /* block */)arg1;

@end