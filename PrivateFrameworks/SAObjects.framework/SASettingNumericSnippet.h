/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingNumericSnippet : SASettingSnippet

@property (nonatomic) bool increment;

+ (id)numericSnippet;
+ (id)numericSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)increment;
- (void)setIncrement:(bool)arg1;

@end
