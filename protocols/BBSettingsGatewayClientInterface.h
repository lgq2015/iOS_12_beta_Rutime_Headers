/* made by EzioChiu.
 */

@protocol BBSettingsGatewayClientInterface <NSObject>

@required

- (void)activeBehaviorOverrideTypesChanged:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)activeBehaviorOverrideTypesChanged:(unsigned long long)arg1 source:(unsigned long long)arg2 activeQuietModeAssertionCount:(unsigned long long)arg3;
- (void)behaviorOverrideStatusChanged:(long long)arg1 source:(unsigned long long)arg2;
- (void)behaviorOverridesChanged:(NSArray *)arg1 source:(unsigned long long)arg2;
- (void)behaviorOverridesEffectiveWhileUnlockedChanged:(bool)arg1 source:(unsigned long long)arg2;
- (void)privilegedSenderAddressBookGroupRecordIDChanged:(int)arg1 name:(NSString *)arg2 source:(unsigned long long)arg3;
- (void)privilegedSenderTypesChanged:(unsigned long long)arg1 source:(unsigned long long)arg2;

@end
