/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKCloudPushLocalDeltaOperation : CRKCloudEncapsulatedOperation {
    CRKCloudLocalDelta * _delta;
}

@property (nonatomic, readonly) CRKCloudLocalDelta *delta;

- (void).cxx_destruct;
- (id)delta;
- (id)initWithOperationQueue:(id)arg1 database:(id)arg2;
- (id)initWithOperationQueue:(id)arg1 database:(id)arg2 delta:(id)arg3;
- (void)main;
- (void)pushWithUpsertedRecords:(id)arg1 deletedRecordIds:(id)arg2;
- (void)retryableModifyRecordsOperationDidFinish:(id)arg1;

@end
