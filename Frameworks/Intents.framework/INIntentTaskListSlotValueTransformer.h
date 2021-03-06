/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INIntentTaskListSlotValueTransformer : NSValueTransformer

+ (bool)allowsReverseTransformation;
+ (Class)reverseTransformedValueClass;
+ (Class)transformedValueClass;

- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;

@end
