/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBExternalIndigoDefaults : BSAbstractDefaultDomain

@property (nonatomic, readonly) long long indigoConfigurationFlagsBitmask;

+ (id)defaults;

- (void)_bindAndRegisterDefaults;
- (bool)indigoConfigurationFlagOne;
- (bool)indigoConfigurationFlagThree;
- (bool)indigoConfigurationFlagTwo;
- (id)init;

@end
