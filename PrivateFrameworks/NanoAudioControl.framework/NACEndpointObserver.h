/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@interface NACEndpointObserver : NSObject {
    void * _callbackToken;
    void * _discoverySession;
    NSObject<OS_dispatch_group> * _initialFetchGroup;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (id)sharedObserver;

- (void).cxx_destruct;
- (void)fetchRouteForOriginIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)init;

@end
