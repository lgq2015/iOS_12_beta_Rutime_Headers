/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingGetBooleanPreference : SASettingGetBool

@property (nonatomic, copy) NSString *settingKey;

+ (id)getBooleanPreference;
+ (id)getBooleanPreferenceWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setSettingKey:(id)arg1;
- (id)settingKey;

@end
