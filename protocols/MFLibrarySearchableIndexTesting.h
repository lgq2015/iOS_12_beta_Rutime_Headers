/* made by EzioChiu.
 */

@protocol MFLibrarySearchableIndexTesting <NSObject>

@required

- (MFLibrarySearchableIndexQueryContext *)context;
- (NSString *)spotlightQueryFromDataSamples:(NSDictionary *)arg1;
- (MFLibrarySearchableIndexVerificationData *)transformDataForVerification:(MFLibrarySearchableIndexVerificationData *)arg1;
- (bool)verifySearchableItem:(CSSearchableItem *)arg1 againstExpectedData:(MFLibrarySearchableIndexVerificationData *)arg2;

@end
