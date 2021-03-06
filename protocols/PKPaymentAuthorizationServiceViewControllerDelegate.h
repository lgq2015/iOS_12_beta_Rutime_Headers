/* made by EzioChiu.
 */

@protocol PKPaymentAuthorizationServiceViewControllerDelegate <NSObject>

@required

- (void)authorizationViewControllerDidChangeUserIntentRequirement:(PKPaymentAuthorizationServiceViewController *)arg1;

@optional

- (void)authorizationViewController:(PKPaymentAuthorizationServiceViewController *)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2;

@end
