/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCCompositionController : NSObject <UIActivityItemSource> {
    NSMutableDictionary * _accessTokensByName;
    RCCaptureSession * _activeCaptureSession;
    RCComposition * _composition;
    bool  _hasLoggedUsageStatisticRecordingEvent;
    bool  _hasStartedRecording;
    NSMutableArray * _undoableCompositionItemStack;
    unsigned long long  _usageHistoryMask;
}

@property (nonatomic, readonly) RCCaptureSession *activeCaptureSession;
@property (nonatomic, retain) RCComposition *composition;
@property (nonatomic, readonly) unsigned long long countOfUndoableCompositions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isTopUndoableCompositionFromCapture;
@property (nonatomic, readonly) NSString *savedRecordingUUID;
@property (readonly) Class superclass;

+ (id)compositionControllerForComposedAVURL:(id)arg1;

- (void).cxx_destruct;
- (id)_activitySourceRecording;
- (id)_compositionByReplacingDecomposedFragments:(id)arg1;
- (void)_eaccess_repairDecomposedFragmentMetadataIfNecessaryAndSave:(bool)arg1;
- (void)_eaccess_saveCompositionAfterAppendingInProgressCaptureDataSource:(id)arg1;
- (void)_eaccess_saveCompositionAfterCommitingFinalizedCaptureDataSource:(id)arg1;
- (void)_eaccess_saveCompositionAndRecordingDuration:(bool)arg1;
- (void)_endAccessSessionWithToken:(id)arg1 forKey:(id)arg2;
- (id)_nextCaptureWaveformDataSourceWithDestinationTimeRange:(struct { double x1; double x2; })arg1 isOverdub:(bool)arg2;
- (void)_reloadComposition;
- (id)activeCaptureSession;
- (void)activeRecordingSessionWillFinish;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize { double x1; double x2; })arg3;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (void)beginAccessSessionToExportWithAssetReadyBlock:(id /* block */)arg1;
- (void)beginAccessSessionToPlayTimeRange:(struct { double x1; double x2; })arg1 readyToPlayBlock:(id /* block */)arg2;
- (void)beginAccessSessionToTrimAsCopy:(bool)arg1 assetReadyBlock:(id /* block */)arg2;
- (void)beginRecordingWithInputDevice:(id)arg1 captureInsertionRange:(struct { double x1; double x2; })arg2 isUndoable:(bool)arg3 isOverdub:(bool)arg4 sessionPreparedBlock:(id /* block */)arg5 sessionFinishedBlock:(id /* block */)arg6;
- (id)composition;
- (unsigned long long)countOfUndoableCompositions;
- (void)deleteCompositionFromFileSystem;
- (void)deleteCompositionFromFileSystemAndDatabase;
- (void)endAccessSessions;
- (void)endEditing;
- (void)endPreviewAccessSession;
- (void)endTrimAccessSession;
- (void)finalizingComposedAssetWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithComposition:(id)arg1;
- (bool)isCaptureSessionActive;
- (bool)isTopUndoableCompositionFromCapture;
- (void)performCompositionRedoWithRedoItem:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)performCompositionUndoWithCompletionBlock:(id /* block */)arg1;
- (void)prepareToBeginEditingWithReadyBlock:(id /* block */)arg1;
- (void)rcs_composeToFinalDestinationAndDeleteDecomposedFragments:(bool)arg1 composeWaveform:(bool)arg2 canGenerateWaveformByProcessingAVURL:(bool)arg3 completionBlock:(id /* block */)arg4;
- (void)rcs_repairDecomposedFragmentMetadataIfNecessary;
- (void)sanitizeWithCompletionBlock:(id /* block */)arg1;
- (id)savedRecordingUUID;
- (void)setComposition:(id)arg1;

@end