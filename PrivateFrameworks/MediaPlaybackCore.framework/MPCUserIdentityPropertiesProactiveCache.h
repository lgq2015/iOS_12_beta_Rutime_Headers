/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCUserIdentityPropertiesProactiveCache : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _cacheQueue;
    NSCountedSet * _proactiveCachingIdentities;
}

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)_init;
- (void)_proactivelyCacheUserIdentity:(id)arg1;
- (void)_userIdentityStoreDidChangeNotification:(id)arg1;
- (void)beginProactiveCachingForUserIdentity:(id)arg1;
- (void)endProactiveCachingForUserIdentity:(id)arg1;

@end
