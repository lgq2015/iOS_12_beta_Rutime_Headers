/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INMessageAttributeResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithMessageAttributeToConfirm:(long long)arg1;
+ (id)confirmationRequiredWithValueToConfirm:(long long)arg1;
+ (id)successWithResolvedMessageAttribute:(long long)arg1;
+ (id)successWithResolvedValue:(long long)arg1;

@end
