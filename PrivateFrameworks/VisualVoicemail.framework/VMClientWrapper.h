/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMClientWrapper : NSObject {
    NSXPCConnection * _clientConnection;
    <VMClientXPCProtocol> * _manager;
}

@property (nonatomic, retain) NSXPCConnection *clientConnection;
@property (nonatomic) <VMClientXPCProtocol> *manager;

+ (bool)isVMXPCAvailable;
+ (id)voicemailClientXPCInterface;
+ (id)voicemailServerXPCInterface;

- (void).cxx_destruct;
- (void)_handleXPCConnectionEstablished:(id)arg1;
- (void)_handleXPCDisconnectNotification:(id)arg1;
- (id)clientConnection;
- (void)dealloc;
- (id)init;
- (id)manager;
- (void)setClientConnection:(id)arg1;
- (void)setManager:(id)arg1;

@end
