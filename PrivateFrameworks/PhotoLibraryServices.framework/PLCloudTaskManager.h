/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudTaskManager : NSObject {
    NSMutableDictionary * _highPriorityResourceToTaskIdentifierMap;
    NSMutableDictionary * _lowPriorityResourceToTaskIdentifierMap;
    NSMutableDictionary * _pendingTaskForTaskIdentifier;
    NSMutableDictionary * _resourceForTaskIdentifier;
}

- (id)_identifierForResource:(id)arg1;
- (void)_setTaskIdentifiers:(id)arg1 forResource:(id)arg2 highPriority:(bool)arg3;
- (bool)addProgressBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2 forResource:(id)arg3 highPriority:(bool)arg4 withTaskIdentifier:(id)arg5;
- (bool)cancelTaskWithTaskIdentifier:(id)arg1;
- (void)createPendingTaskWithProgressBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2 forResource:(id)arg3 highPriority:(bool)arg4 withTaskIdentifier:(id)arg5;
- (void)dealloc;
- (id)firstTaskIdentifierForResource:(id)arg1 highPriority:(bool)arg2;
- (id)getPendingTaskForTaskIdentifier:(id)arg1;
- (bool)hasTaskIdentifierForResource:(id)arg1 highPriority:(bool)arg2;
- (id)init;
- (void)removeTaskIdentifiersForResource:(id)arg1 highPriority:(bool)arg2;
- (void)reportCompletionForResource:(id)arg1 withError:(id)arg2 highPriority:(bool)arg3;
- (void)reportProgress:(float)arg1 forResource:(id)arg2 highPriority:(bool)arg3;
- (void)reset;
- (void)setPendingTaskWithTransferTask:(id)arg1 withTaskIdentifier:(id)arg2;
- (id)taskForResource:(id)arg1 highPriority:(bool)arg2;
- (id)taskIdentifiersForResource:(id)arg1 highPriority:(bool)arg2;

@end
