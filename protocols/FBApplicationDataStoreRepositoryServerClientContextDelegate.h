/* made by EzioChiu.
 */

@protocol FBApplicationDataStoreRepositoryServerClientContextDelegate <NSObject>

@required

- (void)applicationDataStoreRepositoryClientContext:(FBApplicationDataStoreRepositoryServerClientContext *)arg1 repositoryInvalidatedForBundleID:(NSString *)arg2;
- (void)applicationDataStoreRepositoryClientContext:(FBApplicationDataStoreRepositoryServerClientContext *)arg1 valueChangedForObject:(id)arg2 key:(NSString *)arg3 bundleID:(NSString *)arg4;

@end
