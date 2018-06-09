/* made by EzioChiu.
 */

@protocol CSSearchableIndexDelegate <NSObject>

@required

- (void)searchableIndex:(void *)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(void *)arg2; // needs 2 arg types, found 6: CSSearchableIndex *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)searchableIndex:(void *)arg1 reindexSearchableItemsWithIdentifiers:(void *)arg2 acknowledgementHandler:(void *)arg3; // needs 3 arg types, found 7: CSSearchableIndex *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@optional

- (NSData *)dataForSearchableIndex:(CSSearchableIndex *)arg1 itemIdentifier:(NSString *)arg2 typeIdentifier:(NSString *)arg3 error:(out id*)arg4;
- (NSURL *)fileURLForSearchableIndex:(CSSearchableIndex *)arg1 itemIdentifier:(NSString *)arg2 typeIdentifier:(NSString *)arg3 inPlace:(bool)arg4 error:(out id*)arg5;
- (void)searchableIndexDidFinishThrottle:(CSSearchableIndex *)arg1;
- (void)searchableIndexDidThrottle:(CSSearchableIndex *)arg1;

@end