/* made by EzioChiu.
 */

@protocol WebMultipleTextMatches <NSObject>

@required

- (unsigned long long)countMatchesForText:(NSString *)arg1 inDOMRange:(DOMRange *)arg2 options:(unsigned long long)arg3 limit:(unsigned long long)arg4 markMatches:(bool)arg5;
- (bool)markedTextMatchesAreHighlighted;
- (NSArray *)rectsForTextMatches;
- (void)setMarkedTextMatchesAreHighlighted:(bool)arg1;
- (void)unmarkAllTextMatches;

@end