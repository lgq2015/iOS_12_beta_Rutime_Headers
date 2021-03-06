/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBBiometricAuthenticationDefaults : SBAbstractSpringBoardDefaultDomain

@property (getter=isLogTimestampsEnabled, nonatomic, readonly) bool logTimestampsEnabled;

- (void)_bindAndRegisterDefaults;

@end
