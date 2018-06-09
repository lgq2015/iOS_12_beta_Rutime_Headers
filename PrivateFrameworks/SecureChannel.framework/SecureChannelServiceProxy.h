/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecureChannel.framework/SecureChannel
 */

@interface SecureChannelServiceProxy : NSObject <SecureChannelService> {
    NSXPCConnection * _connectionToService;
    NSObject<SecureChannelService> * _remoteObject;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)callToActionForURL:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (void)runApproverFlowForURL:(id)arg1 withCompletion:(id /* block */)arg2;

@end