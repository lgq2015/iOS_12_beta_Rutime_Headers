/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIIdentityController : PSListController

- (bool)canBeShownFromSuspendedState;
- (void)deleteIdentity:(id)arg1;
- (id)identity;
- (id)identityName;
- (void)setIdentityName:(id)arg1;
- (bool)shouldSelectResponderOnAppearance;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

@end