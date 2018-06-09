/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUserEventTracker : PXUserEventTrackerCommon {
    unsigned long long  _MaxDepthOfRelatedJumps;
    NSHashTable * __relatedLookupTable;
    double  _timeLoggedOnDetailViewWillAppear;
    double  _timeLoggedOnMemoriesFeedWillAppear;
    unsigned long long  _totalNumberOfRelatedJumps;
}

@property (setter=_setRelatedLookupTable:, nonatomic, retain) NSHashTable *_relatedLookupTable;

+ (bool)_isMemoryTriggered:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_aggdDurationLoggingDryrun:(unsigned long long)arg1 duration:(double)arg2;
- (void)_aggdDurationLoggingDryrunForSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)_aggdJumpCountLoggingDryrun:(unsigned long long)arg1 totalJumpCount:(unsigned long long)arg2;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_logAggdAddValueForScalarKey:(struct __CFString { }*)arg1 value:(long long)arg2;
- (void)_logAggdDurationCounterForLogState:(unsigned long long)arg1 duration:(double)arg2;
- (void)_logAggdDurationCounterForLogSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)_logAggdRelatedJumpStatistics:(unsigned long long)arg1 totalJumpCount:(unsigned long long)arg2;
- (id)_relatedLookupTable;
- (void)_resetDetailViewTraversalStatistics;
- (void)_setRelatedLookupTable:(id)arg1;
- (void)didConfirmDeleteOfMemory;
- (void)didCreateMemoryViaAddToMemories;
- (void)didFavoriteMemory;
- (void)didFinishViewingDetailsWithCurrentContext:(id)arg1;
- (void)didFinishViewingMemoriesFeedView;
- (void)didPlayMiroMovieForAssetCollection:(id)arg1;
- (void)didViewDetailsForAssetCollection:(id)arg1;
- (id)init;
- (void)livePhotoEffectOptionsAppeared;
- (void)livePhotoEffectPreviewFinishedRendering:(double)arg1;
- (void)livePhotoEffectRenderingFailed;
- (void)livePhotoEffectReverted;
- (void)livePhotoEffectSavingFailed;
- (void)livePhotoEffectSavingFinished:(double)arg1;
- (void)livePhotoEffectSelected:(long long)arg1;
- (void)livePhotoEffectShared;
- (void)livePhotoEffectSuggested:(long long)arg1;
- (void)livePhotoEffectSuggestionApplied;
- (void)logBootstrapMergeCandidateFaceCountVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4;
- (void)logBootstrapMergeCandidatesVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4;
- (void)logConfirmAdditionalMergeCandidateFaceCountVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4;
- (void)logConfirmAdditionalMergeCandidatesVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4;
- (void)logConfirmAdditionalSuggestionsConfirmed:(unsigned long long)arg1 rejected:(unsigned long long)arg2;
- (void)logConfirmAdditionalVisionFaceCountConfirmed:(unsigned long long)arg1 rejected:(unsigned long long)arg2;
- (void)logCounterValuesForLogState:(unsigned long long)arg1 duration:(double)arg2;
- (void)logCounterValuesForLogSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)logForYouContextualMemoriesDetailsCount;
- (void)logForYouFeedCount;
- (void)logForYouInboxItemSelectedWithType:(long long)arg1;
- (void)logForYouInboxViewedCount;
- (void)logForYouMemoriesDetailsCount;
- (void)logForYouMemoriesFeedCount;
- (void)logForYouSharedAlbumActivityCommentedCount;
- (void)logForYouSharedAlbumActivityLikedCount;
- (void)logForYouSharedAlbumActivityViewed1UpCount;
- (void)logForYouSharedAlbumActivityViewedCount;
- (void)logForYouSharedAlbumActivityViewedFeedCount;
- (void)logForYouSharedAlbumInvitationAcceptedCount;
- (void)logForYouSharedAlbumInvitationDeclinedCount;
- (void)logForYouSharedAlbumInvitationReportedAsJunkCount;
- (void)logForYouSharedAlbumInvitationViewedCount;
- (void)logForYouSuggestionSavedCount;
- (void)logForYouSuggestionSharedCount;
- (void)logForYouSuggestionViewed1UpCount;
- (void)logForYouSuggestionViewedCount;
- (void)logInterestingMemoryNotificationRespondedCount;
- (void)logInterestingMemoryNotificationSeenCount;
- (void)logMergeCandidateInlineControlWithSignature:(unsigned long long)arg1;
- (void)logNamingTypeSelection:(unsigned long long)arg1;
- (void)logNavigationListViewTapWithKey:(struct __CFString { }*)arg1;
- (void)logPeopleAddToPeopleHome;
- (void)logPeopleConfirmAdditionalViewCount;
- (void)logPeopleDetailCount;
- (void)logPeopleDetailKeyPhotoChanged;
- (void)logPeopleDetailNotThisPerson;
- (void)logPeopleDetailShowFaces;
- (void)logPeopleHomeCount;
- (void)logPeopleHomeFavoritePersonCount:(unsigned long long)arg1 totalPersonCount:(unsigned long long)arg2;
- (void)logPeopleHomeNumberOfPeopleWithContactName:(unsigned long long)arg1 numberOfPeopleWithStringName:(unsigned long long)arg2;
- (void)logPeopleMeSuggestionConfirmed:(bool)arg1;
- (void)logPeopleRemoveFromPeopleHome;
- (void)logSearchNextTokenSuggestionTapped;
- (void)logSearchResultType:(unsigned long long)arg1;
- (void)logSearchSiriFoundResults:(bool)arg1;
- (void)logSearchSuccessfulResult:(bool)arg1;
- (void)logSearchTapSearch;
- (void)logSearchWordEmbeddingSelected;
- (void)logSearchWordEmbeddingsPresented;
- (void)logSearchZeroKeywordSearch;
- (void)willViewDetailsWithCurrentContext:(id)arg1;
- (void)willViewMemoriesFeedView;

@end