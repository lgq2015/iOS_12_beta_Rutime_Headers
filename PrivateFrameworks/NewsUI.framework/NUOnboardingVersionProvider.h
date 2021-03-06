/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUOnboardingVersionProvider : NSObject <NUAdContextProvider> {
    long long  _onboardingVersion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long onboardingVersion;
@property (readonly) Class superclass;

- (id)adContextValueForKeyPath:(id)arg1;
- (id)initWithOnboardingVersion:(long long)arg1;
- (long long)onboardingVersion;

@end
