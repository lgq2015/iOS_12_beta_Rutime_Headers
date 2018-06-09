/* made by EzioChiu.
 */

@protocol NEExtensionTunnelProviderHostProtocol <NEExtensionProviderHostProtocol>

@required

- (void)didSetReasserting:(bool)arg1;
- (void)handleIPCDetached;
- (void)setTunnelConfiguration:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NETunnelNetworkSettings *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end