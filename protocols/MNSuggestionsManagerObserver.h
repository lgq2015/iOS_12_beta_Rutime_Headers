/* made by EzioChiu.
 */

@protocol MNSuggestionsManagerObserver <NSObject>

@optional

- (void)suggestionsManager:(MNSuggestionsManager *)arg1 didAddSuggestion:(MNCommuteDestinationSuggestion *)arg2;
- (void)suggestionsManagerDidUpdateSuggestions:(MNSuggestionsManager *)arg1;

@end
