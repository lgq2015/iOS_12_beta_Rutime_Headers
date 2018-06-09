/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroAutoEditOperation : NSOperation {
    MiroAutoEditController * _autoEditController;
    MiroAutoEditor * _autoEditorParent;
    id /* block */  _cleanupHandler;
    MiroCloudDownloader * _cloudDownloader;
    bool  _isExecuting;
    bool  _isFinished;
    MiroMemory * _memory;
    int  _requestID;
    bool  _shouldSave;
}

@property (retain) MiroAutoEditController *autoEditController;
@property (retain) MiroAutoEditor *autoEditorParent;
@property (copy) id /* block */ cleanupHandler;
@property (nonatomic, retain) MiroCloudDownloader *cloudDownloader;
@property (retain) MiroMemory *memory;
@property (nonatomic) int requestID;
@property bool shouldSave;

- (void).cxx_destruct;
- (void)_downloadWithCompletionHandler:(id /* block */)arg1;
- (id)autoEditController;
- (id)autoEditorParent;
- (id /* block */)cleanupHandler;
- (id)cloudDownloader;
- (void)finished;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (id)memory;
- (void)performAutoEditAsynchronously;
- (int)requestID;
- (void)setAutoEditController:(id)arg1;
- (void)setAutoEditorParent:(id)arg1;
- (void)setCleanupHandler:(id /* block */)arg1;
- (void)setCloudDownloader:(id)arg1;
- (void)setMemory:(id)arg1;
- (void)setRequestID:(int)arg1;
- (void)setShouldSave:(bool)arg1;
- (bool)shouldCancelOnNonLocalAssets;
- (bool)shouldDownload;
- (bool)shouldSave;
- (void)start;

@end