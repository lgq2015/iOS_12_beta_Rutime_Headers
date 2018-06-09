/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCPLStatus : NSObject <CPLStatusDelegate> {
    CPLStatus * _cplStatus;
    id /* block */  _handler;
    bool  _isUpdating;
    double  _lastUpdate;
    unsigned long long  _needsUpdate;
    PLPhotoLibrary * _photoLibrary;
    NSObject<OS_dispatch_queue> * _serialQueue;
    PXCPLState * _state;
    NSProgress * _syncProgress;
    unsigned long long  _syncProgressState;
    id  _syncProgressSubscriber;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXCPLState *state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithInitialSynchronousUpdateType:(unsigned long long)arg1;
- (id)_initWithInitialUpdateType:(unsigned long long)arg1 isSynchronous:(bool)arg2;
- (void)_performUpdate;
- (void)_schedulePendingUpdates;
- (void)_scheduleUpdateForType:(unsigned long long)arg1;
- (void)_setSyncProgress:(id)arg1;
- (void)_subscribeToSyncProgress;
- (void)_unsubscribeFromSyncProgress;
- (id)_updateState:(id)arg1 requestedTypes:(unsigned long long)arg2 failedTypes:(unsigned long long*)arg3;
- (void)dealloc;
- (id /* block */)handler;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)overrideSystemBudgetsForSyncSession:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setHandler:(id /* block */)arg1;
- (void)setState:(id)arg1;
- (id)state;
- (void)statusDidChange:(id)arg1;
- (void)syncWithCloudPhotoLibrary;
- (void)userPauseCloudPhotos:(bool)arg1;

@end