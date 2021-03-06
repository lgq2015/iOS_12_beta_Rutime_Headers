/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@interface PKDiscoveryLSWatcher : NSObject <LSApplicationWorkspaceObserverProtocol> {
    PKDiscoveryDriver * _wdriver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property PKDiscoveryDriver *wdriver;

- (void).cxx_destruct;
- (id)initWithDriver:(id)arg1;
- (void)pluginsDidInstall:(id)arg1;
- (void)pluginsDidUninstall:(id)arg1;
- (void)setWdriver:(id)arg1;
- (void)stopUpdates;
- (void)update;
- (id)wdriver;

@end
