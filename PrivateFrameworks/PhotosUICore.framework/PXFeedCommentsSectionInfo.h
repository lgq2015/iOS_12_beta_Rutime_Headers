/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFeedCommentsSectionInfo : PXFeedSectionInfo {
    bool  __hasLikes;
}

@property (setter=_setHasLikes:, nonatomic) bool _hasLikes;

- (bool)_hasLikes;
- (void)_setHasLikes:(bool)arg1;
- (id)assetForItemAtIndex:(long long)arg1;
- (id)assets;
- (unsigned long long)assetsCount;
- (id)assetsForItemAtIndex:(long long)arg1 maximumCount:(long long)arg2;
- (id)cloudFeedCommentsEntry;
- (id)commentForItemAtIndex:(long long)arg1;
- (bool)containsAsset:(id)arg1;
- (void)getCommentCount:(out unsigned long long*)arg1 likeCount:(out unsigned long long*)arg2;
- (bool)hasMultipleAssetsForItemAtIndex:(long long)arg1;
- (long long)indexOfItemWithAsset:(id)arg1;
- (long long)indexOfItemWithComment:(id)arg1;
- (bool)isMine;
- (id)likesForItemAtIndex:(long long)arg1;
- (long long)sectionType;
- (long long)typeForItemAtIndex:(long long)arg1;
- (void)updateFromCloudFeedEntry;

@end