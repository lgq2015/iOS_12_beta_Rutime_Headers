/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEHotspotConfigurationHelper : NSObject {
    NEHelper * _helper;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) NEHelper *helper;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)createXPCRequest:(id)arg1 requestType:(long long)arg2;
- (id)helper;
- (id)init;
- (id)processQueryNetworksResponse:(id)arg1;
- (id)queue;
- (void)sendRequest:(id)arg1 requestType:(long long)arg2 resultHandler:(id /* block */)arg3;

@end
