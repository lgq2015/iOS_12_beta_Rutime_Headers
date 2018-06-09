/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFXPCClient : NSObject <NSXPCConnectionDelegate> {
    bool  _activateCalled;
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    bool  _invalidateDone;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activate;
- (void)_invalidate;
- (id)connection;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (void)connectionEstablished;
- (void)dealloc;
- (id)dispatchQueue;
- (id)exportedInterface;
- (void)getRemoteObjectProxyOnQueue:(id /* block */)arg1;
- (id)init;
- (void)interrupted;
- (void)invalidated;
- (id)machServiceName;
- (void)onqueue_activate;
- (void)onqueue_connectionEstablished;
- (void)onqueue_connectionInterrupted;
- (void)onqueue_connectionInvalidated;
- (void)onqueue_ensureConnectionEstablished;
- (void)onqueue_ensureXPCStarted;
- (void)onqueue_getRemoteObjectProxyOnQueue:(id /* block */)arg1;
- (void)onqueue_interrupted;
- (void)onqueue_invalidate;
- (void)onqueue_invalidated;
- (id)remoteObjectInterface;
- (void)setConnection:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (bool)shouldEscapeXpcTryCatch;

@end