/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSURLProtocolAuthorizationDialog : AMSURLProtocolDialog <AMSURLProtocolDialogHandling> {
    ACAccount * _authenticatedAccount;
    bool  _authorizationIsForced;
    NSError * _error;
}

@property (nonatomic, readonly) ACAccount *authenticatedAccount;
@property (nonatomic, readonly) bool authorizationIsForced;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dialogDictionary;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_authenticateWithError:(id*)arg1 dialogOptions:(long long)arg2;
- (id)_findActionableButton;
- (bool)_shouldAuthenticateForButton:(id)arg1;
- (id)authenticatedAccount;
- (bool)authorizationIsForced;
- (id)error;
- (id)runDialog;

@end