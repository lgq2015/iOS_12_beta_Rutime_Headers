/* made by EzioChiu.
 */

@protocol UITextDocumentProxy <UIKeyInput>

@required

- (void)adjustTextPositionByCharacterOffset:(long long)arg1;
- (NSString *)documentContextAfterInput;
- (NSString *)documentContextBeforeInput;
- (NSUUID *)documentIdentifier;
- (UITextInputMode *)documentInputMode;
- (NSString *)selectedText;

@end