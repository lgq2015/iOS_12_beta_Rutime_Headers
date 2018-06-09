/* made by EzioChiu.
 */

@protocol PKAuthenticatorDelegate <NSObject>

@optional

- (void)authenticator:(PKAuthenticator *)arg1 didRequestUserAction:(long long)arg2;
- (void)authenticator:(PKAuthenticator *)arg1 didTransitionToPearlState:(long long)arg2;
- (void)authenticatorDidEncounterBiometricLockout:(PKAuthenticator *)arg1;
- (void)authenticatorDidEncounterFingerOff:(PKAuthenticator *)arg1;
- (void)authenticatorDidEncounterFingerOn:(PKAuthenticator *)arg1;
- (void)authenticatorDidEncounterMatchMiss:(PKAuthenticator *)arg1;
- (void)authenticatorWillRestartEvaluation:(PKAuthenticator *)arg1;
- (void)dismissPasscodeViewController;
- (void)dismissPassphraseViewController;
- (struct UIViewController { Class x1; }*)passcodeViewController;
- (struct UIViewController { Class x1; }*)passphraseViewController;
- (void)presentPasscodeViewController:(void *)arg1 completionHandler:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 13: struct UIViewController { Class x1; }*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*, id /* block */, void*, void, id /* block */, NSData *, void*
- (void)presentPassphraseViewController:(void *)arg1 completionHandler:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 13: struct UIViewController { Class x1; }*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*, id /* block */, void*, void, id /* block */, NSData *, void*

@end