/* made by EzioChiu.
 */

@protocol MPModelLazySectionedCollectionDataSource <MPLazySectionedCollectionDataSource>

@optional

- (MPIdentifierSet *)identifiersForItemAtIndexPath:(NSIndexPath *)arg1;
- (MPIdentifierSet *)identifiersForSectionAtIndex:(long long)arg1;
- (NSIndexPath *)indexPathForItemWithIdentifiersIntersectingSet:(MPIdentifierSet *)arg1;

@end
