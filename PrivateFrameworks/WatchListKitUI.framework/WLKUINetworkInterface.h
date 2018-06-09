/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUINetworkInterface : IKJSObject <WLKUINetworkInterface> {
    NSXPCConnection * _connection;
    int  _playbackReportToken;
    bool  _suppressServerConfigNotifications;
}

- (void).cxx_destruct;
- (id)_connection;
- (void)_fireInitConfigCallbackWithUUID:(id)arg1;
- (void)_handleAppLibChange:(id)arg1;
- (void)_handlePlaybackReport:(id)arg1;
- (void)_handleServerConfigChange:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)dealloc;
- (void)fetchConfiguration:(bool)arg1 :(id)arg2;
- (id)initWithAppContext:(id)arg1;
- (void)invalidateConfiguration;
- (id)makeRequest:(id)arg1 :(id)arg2;

@end