/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKModifyWebSharingOperation : CKDatabaseOperation {
    NSMutableDictionary * _recordErrors;
    NSArray * _recordIDsToShare;
    NSArray * _recordIDsToShareReadWrite;
    NSArray * _recordIDsToUnshare;
    id /* block */  _recordSharedBlock;
    id /* block */  _recordUnsharedBlock;
    NSMutableArray * _sharedRecordIDs;
    NSMutableArray * _unsharedRecordIDs;
    id /* block */  _webShareRecordsCompletionBlock;
}

@property (nonatomic, retain) NSMutableDictionary *recordErrors;
@property (nonatomic, retain) NSArray *recordIDsToShare;
@property (nonatomic, retain) NSArray *recordIDsToShareReadWrite;
@property (nonatomic, retain) NSArray *recordIDsToUnshare;
@property (nonatomic, copy) id /* block */ recordSharedBlock;
@property (nonatomic, copy) id /* block */ recordUnsharedBlock;
@property (nonatomic, retain) NSMutableArray *sharedRecordIDs;
@property (nonatomic, retain) NSMutableArray *unsharedRecordIDs;
@property (nonatomic, copy) id /* block */ webShareRecordsCompletionBlock;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (bool)hasCKOperationCallbacksSet;
- (id)initWithRecordIDsToWebShare:(id)arg1 recordIDsToUnshare:(id)arg2;
- (void)performCKOperation;
- (id)recordErrors;
- (id)recordIDsToShare;
- (id)recordIDsToShareReadWrite;
- (id)recordIDsToUnshare;
- (id /* block */)recordSharedBlock;
- (id /* block */)recordUnsharedBlock;
- (void)setRecordErrors:(id)arg1;
- (void)setRecordIDsToShare:(id)arg1;
- (void)setRecordIDsToShareReadWrite:(id)arg1;
- (void)setRecordIDsToUnshare:(id)arg1;
- (void)setRecordSharedBlock:(id /* block */)arg1;
- (void)setRecordUnsharedBlock:(id /* block */)arg1;
- (void)setSharedRecordIDs:(id)arg1;
- (void)setUnsharedRecordIDs:(id)arg1;
- (void)setWebShareRecordsCompletionBlock:(id /* block */)arg1;
- (id)sharedRecordIDs;
- (id)unsharedRecordIDs;
- (id /* block */)webShareRecordsCompletionBlock;

@end