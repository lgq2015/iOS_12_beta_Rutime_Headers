/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSpecialEventsOperation : FCOperation {
    id /* block */  _catchUpCompletionHandler;
    <FCCoreConfiguration> * _configuration;
    FCCloudContext * _context;
    NSError * _error;
    FCSpecialEventsOperationResult * _specialEventsResult;
}

@property (copy) id /* block */ catchUpCompletionHandler;
@property (nonatomic, copy) <FCCoreConfiguration> *configuration;
@property (nonatomic, retain) FCCloudContext *context;
@property (retain) NSError *error;
@property (retain) FCSpecialEventsOperationResult *specialEventsResult;

- (void).cxx_destruct;
- (void)_checkShouldShowBreakingNewsWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)catchUpCompletionHandler;
- (id)configuration;
- (id)context;
- (id)error;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)setCatchUpCompletionHandler:(id /* block */)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setError:(id)arg1;
- (void)setSpecialEventsResult:(id)arg1;
- (id)specialEventsResult;
- (bool)validateOperation;

@end