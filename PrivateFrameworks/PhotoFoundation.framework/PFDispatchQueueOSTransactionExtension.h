/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFDispatchQueueOSTransactionExtension : PFDispatchQueueExtension {
    NSObject<OS_os_transaction> * _currentTransaction;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    PFDispatchQueue * _queue;
    unsigned long long  _transactionUseCount;
}

- (void).cxx_destruct;
- (void)_blockCompleted;
- (id)description;
- (void)dispatchTransactionName:(id)arg1 async:(id /* block */)arg2;
- (void)dispatchTransactionName:(id)arg1 asyncWithCurrentQOS:(id /* block */)arg2;
- (void)dispatchTransactionName:(id)arg1 qos:(unsigned int)arg2 async:(id /* block */)arg3;
- (id)init;
- (void)installOnQueue:(id)arg1;
- (id)newBlockInfo;
- (void)queue:(id)arg1 didExecute:(id)arg2;
- (void)queue:(id)arg1 skippedExecuting:(id)arg2;

@end
