/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOResourceManifestServerLocalProxyMigrationState : NSObject {
    NSString * _loadingTileGroupUniqueIdentifier;
    NSArray * _pendingTileGroupMigrationTasks;
    <NSObject> * _transaction;
}

@property (nonatomic, readonly) NSString *loadingTileGroupUniqueIdentifier;
@property (nonatomic, copy) NSArray *pendingTileGroupMigrationTasks;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTileGroupUniqueIdentifier:(id)arg1 transactionName:(id)arg2;
- (id)loadingTileGroupUniqueIdentifier;
- (id)pendingTileGroupMigrationTasks;
- (void)setPendingTileGroupMigrationTasks:(id)arg1;

@end
