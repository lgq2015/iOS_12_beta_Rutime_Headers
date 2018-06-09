/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMService : NSObject

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

+ (id)aimService;
+ (id)allServices;
+ (id)allServicesNonBlocking;
+ (id)callService;
+ (id)canonicalFormOfID:(id)arg1 withIDSensitivity:(int)arg2;
+ (id)facetimeService;
+ (void)forgetStatusImageAppearance;
+ (id)iMessageService;
+ (id)imageNameForStatus:(unsigned long long)arg1;
+ (id)imageURLForStatus:(unsigned long long)arg1;
+ (bool)isEmailAddress:(id)arg1 inDomains:(id)arg2;
+ (id)jabberService;
+ (id)myIdleTime;
+ (unsigned long long)myStatus;
+ (id)notificationCenter;
+ (id)serviceWithName:(id)arg1;
+ (id)smsService;
+ (unsigned long long)statusForABPerson:(id)arg1;
+ (unsigned long long)statusForIMPerson:(id)arg1;
+ (id)subnetService;

- (id)canonicalFormOfID:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)infoForAllPeople;
- (id)infoForAllScreenNames;
- (id)infoForDisplayedPeople;
- (id)infoForPerson:(id)arg1;
- (id)infoForPreferredScreenNames;
- (id)infoForScreenName:(id)arg1;
- (bool)initialSyncPerformed;
- (bool)isEnabled;
- (id)localizedName;
- (id)localizedShortName;
- (void)login;
- (void)logout;
- (id)myScreenNames;
- (id)name;
- (id)peopleWithScreenName:(id)arg1;
- (id)screenNamesForPerson:(id)arg1;
- (unsigned long long)status;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (BOOL)__ck_displayColor;
- (id)__ck_displayName;
- (bool)__ck_isSMS;
- (bool)__ck_isiMessage;
- (long long)__ck_maxRecipientCountForHandle:(id)arg1;

@end