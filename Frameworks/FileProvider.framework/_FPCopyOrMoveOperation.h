/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface _FPCopyOrMoveOperation : FPActionOperation <NSProgressReporting> {
    NSMutableArray * _childOperations;
    FPItem * _createdFolder;
    FPItem * _destinationFolder;
    NSString * _destinationName;
    NSFileCoordinator * _fileCoordinator;
    bool  _isCopyOperation;
    id /* block */  _itemCreationBlock;
    unsigned long long  _lastUsedDatePolicy;
    id /* block */  _operationCompletionBlock;
    NSOperationQueue * _operationQueue;
    NSProgress * _progress;
    bool  _recursiveOperation;
    bool  _shouldBounceOnCollision;
    bool  _shouldStopAccessingSourceURL;
    long long  _sourceFileSize;
    FPItem * _sourceItem;
    NSURL * _sourceURL;
}

@property (nonatomic, readonly) FPItem *createdFolder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSFileCoordinator *fileCoordinator;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ itemCreationBlock;
@property (nonatomic, copy) id /* block */ operationCompletionBlock;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_incrementProgressBy:(unsigned long long)arg1;
- (oneway void)cancel;
- (id)createdFolder;
- (void)downloadItemIfNecessaryWithCompletionHandler:(id /* block */)arg1;
- (void)enumerateAndCopyChildren;
- (void)enumerateChildrenCopyOperations:(id /* block */)arg1;
- (id)fileCoordinator;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (bool)handleCollidingItemErrorIfNeeded:(id)arg1;
- (id)initWithItem:(id)arg1 destinationFolder:(id)arg2 copyItem:(bool)arg3 lastUsageUpdatePolicy:(unsigned long long)arg4 bounceOnCollision:(bool)arg5 operationQueue:(id)arg6;
- (id)initWithProvider:(id)arg1 shouldBounceOnCollision:(bool)arg2 lastUsedDatePolicy:(unsigned long long)arg3 operationQueue:(id)arg4;
- (id)initWithURL:(id)arg1 destinationFolder:(id)arg2 name:(id)arg3 copyItem:(bool)arg4 lastUsageUpdatePolicy:(unsigned long long)arg5 bounceOnCollision:(bool)arg6 operationQueue:(id)arg7;
- (id /* block */)itemCreationBlock;
- (void)mainWithExtensionProxy:(id)arg1;
- (id /* block */)operationCompletionBlock;
- (id)progress;
- (void)resolveItemOrURLWithCompletionHandler:(id /* block */)arg1;
- (void)setFileCoordinator:(id)arg1;
- (void)setItemCreationBlock:(id /* block */)arg1;
- (void)setOperationCompletionBlock:(id /* block */)arg1;

@end