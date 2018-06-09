/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRecordAncestorsOperation : CKDDatabaseOperation {
    id /* block */  _ancestorFetchedBlock;
    NSArray * _recordIDs;
    id /* block */  _shareRecordFetchedBlock;
}

@property (nonatomic, copy) id /* block */ ancestorFetchedBlock;
@property (nonatomic, retain) NSArray *recordIDs;
@property (nonatomic, copy) id /* block */ shareRecordFetchedBlock;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id /* block */)ancestorFetchedBlock;
- (void)finishWithError:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (id)recordIDs;
- (void)setAncestorFetchedBlock:(id /* block */)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setShareRecordFetchedBlock:(id /* block */)arg1;
- (id /* block */)shareRecordFetchedBlock;

@end