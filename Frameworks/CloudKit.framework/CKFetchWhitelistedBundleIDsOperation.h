/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchWhitelistedBundleIDsOperation : CKOperation {
    NSArray * _bundleIDs;
    id /* block */  _fetchWhitelistedBundleIDsCompletionBlock;
}

@property (nonatomic, copy) NSArray *bundleIDs;
@property (nonatomic, copy) id /* block */ fetchWhitelistedBundleIDsCompletionBlock;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (id)activityCreate;
- (id)bundleIDs;
- (id /* block */)fetchWhitelistedBundleIDsCompletionBlock;
- (bool)hasCKOperationCallbacksSet;
- (Class)operationInfoClass;
- (void)performCKOperation;
- (void)setBundleIDs:(id)arg1;
- (void)setFetchWhitelistedBundleIDsCompletionBlock:(id /* block */)arg1;

@end
