/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesFeedWidgetDataSourceManager : PXMemoriesFeedDataSourceManagerBase {
    unsigned long long  _maxCount;
}

@property (nonatomic) unsigned long long maxCount;

- (unsigned long long)_extendedMaxCount;
- (id)_generateEntryFromMemories:(id)arg1;
- (void)_regenerateMemoriesWithChange:(id)arg1;
- (id)fetchOptions;
- (void)generateAdditionalEntriesIfPossible;
- (void)handleChangedKeyAssetsForMemories:(id)arg1;
- (void)handleIncrementalFetchResultChange:(id)arg1 updatedFetchResultsForMemoriesWithChangedKeyAssets:(id)arg2;
- (void)handleNonIncrementalFetchResultChange:(id)arg1;
- (unsigned long long)maxCount;
- (void)setMaxCount:(unsigned long long)arg1;
- (void)startGeneratingMemories;

@end
