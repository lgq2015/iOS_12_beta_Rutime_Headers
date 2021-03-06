/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAPhonePlayVoiceMail : SADomainCommand

@property (nonatomic, copy) NSURL *voiceMailId;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)playVoiceMail;
+ (id)playVoiceMailWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setVoiceMailId:(id)arg1;
- (id)voiceMailId;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

- (long long)_afui_usefulUserResultType;

@end
