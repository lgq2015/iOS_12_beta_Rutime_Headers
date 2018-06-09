/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@interface PKDaemonClient : NSObject {
    NSObject<OS_xpc_object> * _pkd;
    long long  _protocolVersion;
    NSObject<OS_dispatch_queue> * _replyQueue;
}

@property (retain) NSObject<OS_xpc_object> *pkd;
@property long long protocolVersion;
@property (retain) NSObject<OS_dispatch_queue> *replyQueue;

+ (id)convertToXPC:(id)arg1 version:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)accessPlugIns:(id)arg1 synchronously:(bool)arg2 flags:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)addPlugIns:(id)arg1 reply:(id /* block */)arg2;
- (void)bulkPlugins:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)bulkSetPluginAnnotations:(id)arg1 reply:(id /* block */)arg2;
- (id)convertFromXPC:(id)arg1;
- (void)copyReceipt:(id /* block */)arg1;
- (id)errorInReply:(id)arg1;
- (void)findPlugInByPathURL:(id)arg1 reply:(id /* block */)arg2;
- (void)findPlugInByUUID:(id)arg1 reply:(id /* block */)arg2;
- (void)holdPlugins:(id)arg1 flags:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (id)initWithServiceName:(const char *)arg1;
- (void)matchPlugIns:(id)arg1 flags:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (id)pkd;
- (long long)protocolVersion;
- (void)readyPlugIns:(id)arg1 synchronously:(bool)arg2 flags:(unsigned long long)arg3 environment:(id)arg4 reply:(id /* block */)arg5;
- (void)releaseHold:(id)arg1 reply:(id /* block */)arg2;
- (void)removePlugIns:(id)arg1 reply:(id /* block */)arg2;
- (id)replyQueue;
- (id)request:(const char *)arg1;
- (id)request:(const char *)arg1 paths:(id)arg2;
- (void)send:(id)arg1 reply:(id /* block */)arg2;
- (void)sendSynchronously:(bool)arg1 request:(id)arg2 reply:(id /* block */)arg3;
- (void)set:(id)arg1 plugins:(id)arg2;
- (void)set:(id)arg1 uuids:(id)arg2;
- (void)setPkd:(id)arg1;
- (void)setPluginAnnotations:(id)arg1 annotations:(id)arg2 reply:(id /* block */)arg3;
- (void)setProtocolVersion:(long long)arg1;
- (void)setReplyQueue:(id)arg1;

@end