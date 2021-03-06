/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDDownloadAssetsOperationInfo : CKDatabaseOperationInfo {
    NSArray * _assetsToDownload;
    NSArray * _packageIndexSets;
    bool  _shouldFetchAssetContentInMemory;
}

@property (nonatomic, retain) NSArray *assetsToDownload;
@property (nonatomic, retain) NSArray *packageIndexSets;
@property (nonatomic) bool shouldFetchAssetContentInMemory;

- (void).cxx_destruct;
- (id)assetsToDownload;
- (id)packageIndexSets;
- (void)setAssetsToDownload:(id)arg1;
- (void)setPackageIndexSets:(id)arg1;
- (void)setShouldFetchAssetContentInMemory:(bool)arg1;
- (bool)shouldFetchAssetContentInMemory;

@end
