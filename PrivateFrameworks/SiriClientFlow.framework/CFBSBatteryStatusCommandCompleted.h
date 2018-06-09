/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFBSBatteryStatusCommandCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSArray *batteryStatuses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)command;
+ (id)commandWithDictionary:(id)arg1 context:(id)arg2;

- (id)batteryStatuses;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setBatteryStatuses:(id)arg1;

@end