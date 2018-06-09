/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMFileCopier : NSObject {
    void * _BOMCopier;
    id /* block */  _callback;
    <IMFileCopierDelegate> * _delegate;
    bool  _didErrorOccur;
    id  _identifier;
    bool  _inProgress;
    NSURL * _inputURL;
    unsigned long long  _operation;
    NSURL * _outputURL;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _shouldCancel;
}

@property void*_BOMCopier;
@property (copy) id /* block */ _callback;
@property (retain) NSObject<OS_dispatch_queue> *_queue;
@property <IMFileCopierDelegate> *delegate;
@property (nonatomic, readonly) bool didErrorOccur;
@property (readonly, retain) id identifier;
@property bool inProgress;
@property (readonly, retain) NSURL *inputURL;
@property unsigned long long operation;
@property (readonly, retain) NSURL *outputURL;
@property (nonatomic, readonly) bool wasCancelled;

- (void*)_BOMCopier;
- (id /* block */)_callback;
- (void)_fillOutputURLFromInputURL;
- (void)_main_copierFinishedWithResult:(id)arg1;
- (id)_queue;
- (id)_temporaryCopierPath;
- (void)_worker_doCopy;
- (void)cancel;
- (void)cleanup;
- (void)dealloc;
- (id)delegate;
- (bool)didErrorOccur;
- (id)identifier;
- (bool)inProgress;
- (id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(unsigned long long)arg4 completionBlock:(id /* block */)arg5 queue:(id)arg6;
- (id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(unsigned long long)arg4 delegate:(id)arg5;
- (id)inputURL;
- (unsigned long long)operation;
- (id)outputURL;
- (void)setDelegate:(id)arg1;
- (void)setInProgress:(bool)arg1;
- (void)setOperation:(unsigned long long)arg1;
- (void)set_BOMCopier:(void*)arg1;
- (void)set_callback:(id /* block */)arg1;
- (void)set_queue:(id)arg1;
- (void)start;
- (bool)wasCancelled;

@end