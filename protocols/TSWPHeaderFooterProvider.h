/* made by EzioChiu.
 */

@protocol TSWPHeaderFooterProvider <NSObject>

@required

- (double)bodyWidth;
- (TSKDocumentRoot *)documentRoot;
- (TSWPStorage *)headerFooter:(long long)arg1 fragmentAtIndex:(long long)arg2;
- (NSEnumerator *)headerFooterFragmentEnumerator;
- (long long)headerFooterTypeForModel:(id <TSKModel>)arg1;
- (long long)headerFragmentIndexForModel:(id <TSKModel>)arg1;
- (bool)isHeaderFooterEmpty:(long long)arg1;
- (bool)isHeaderFooterEmpty:(long long)arg1 fragmentAtIndex:(long long)arg2;
- (bool)usesSingleHeaderFooter;

@end
