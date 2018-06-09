/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIMultiResultRowModel : NSObject <SearchUIRowModel> {
    NSArray * _results;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSArray *results;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cardSection;
- (id)dragAppBundleID;
- (id)dragSubtitle;
- (id)dragText;
- (id)dragTitle;
- (id)dragURL;
- (id)identifyingResult;
- (id)initWithResults:(id)arg1;
- (bool)isDraggable;
- (bool)isSuggestion;
- (bool)isTappable;
- (double)leadingSeparatorImageInset;
- (id)nextCard;
- (id)punchouts;
- (id)results;
- (id)reuseIdentifier;
- (int)separatorStyle;
- (void)setResults:(id)arg1;
- (Class)viewClass;

@end