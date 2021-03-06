/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIAutocompleteSearchController : NSObject {
    unsigned long long  _maximumResultCount;
}

@property unsigned long long maximumResultCount;

+ (id)searchWithEventStore:(id)arg1 searchString:(id)arg2 maximumResultCount:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;

- (unsigned long long)maximumResultCount;
- (void)setMaximumResultCount:(unsigned long long)arg1;

@end
