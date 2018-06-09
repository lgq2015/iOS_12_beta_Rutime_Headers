/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFeedViewControllerPadSpec : PUFeedViewControllerSpec

- (double)collectionViewContentInset;
- (long long)configurationForSectionHeaderType:(long long)arg1 collectionViewType:(long long)arg2;
- (void)configureCommentSeparatorMetrics:(inout struct PUFeedSeparatorMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; }*)arg1;
- (void)configureFeedCollectionViewLayout:(id)arg1 forCollectionViewType:(long long)arg2 collectionViewSize:(struct CGSize { double x1; double x2; })arg3;
- (void)configureSeparatorMetrics:(inout struct PUFeedSeparatorMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; }*)arg1 betweenSectionWithInfo:(id)arg2 andSectionWithInfo:(id)arg3 joined:(bool)arg4 collectionViewType:(long long)arg5;
- (void)configureTextCell:(id)arg1 forSectionFooterWithActionText:(id)arg2 collectionViewType:(long long)arg3;
- (void)configureTextCell:(id)arg1 forSectionFooterWithDateText:(id)arg2 collectionViewType:(long long)arg3;
- (void)configureTextCell:(id)arg1 forSectionGroupHeaderWithText:(id)arg2 collectionViewType:(long long)arg3;
- (void)configureTextCell:(id)arg1 forSectionHeaderWithDescriptionPhrase:(id)arg2 streamDisclosureLabel:(id)arg3 actionText:(id)arg4 buttonType:(long long)arg5 collectionViewType:(long long)arg6 animated:(bool)arg7;
- (id)defaultTextAttributesForCollectionViewType:(long long)arg1;
- (id)emphasizedTextAttributesForCollectionViewType:(long long)arg1;
- (void)getReferenceMaximumLength:(double*)arg1 minimumNumberOfTilesToOmit:(long long*)arg2 forSectionType:(long long)arg3 collectionViewType:(long long)arg4;
- (id)gridSpec;
- (long long)largeNumberOfSubjectsForLikes;
- (struct CGSize { double x1; double x2; })minimumVideoTileSize;
- (id)photosPickerSpec;
- (id)popoverFeedViewControllerSpec;
- (long long)promptStyle;
- (bool)shouldHideBarsInLandscape;
- (bool)shouldShowCommentBadgesInCollectionViewType:(long long)arg1;
- (bool)shouldShowInvitationsInPopover;
- (bool)shouldUseAspectThumbnails;
- (bool)shouldUseFullscreenLayout;
- (struct CGSize { double x1; double x2; })thumbnailSize;
- (struct CGSize { double x1; double x2; })thumbnailSizeForImageSize:(struct CGSize { double x1; double x2; })arg1;

@end