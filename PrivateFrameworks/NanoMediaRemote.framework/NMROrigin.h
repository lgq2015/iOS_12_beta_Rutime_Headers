/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMROrigin : NSObject <NMROriginMediaRemoteObserverNotificationHandler> {
    NSString * _cachedDisplayName;
    void * _deviceInfo;
    void * _mediaRemoteOrigin;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) void*deviceInfo;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) bool isLocal;
@property (nonatomic, readonly) long long logicalDeviceCount;
@property (nonatomic, readonly) void*mediaRemoteOrigin;
@property (nonatomic, readonly) int originType;
@property (nonatomic, readonly) NSNumber *uniqueIdentifier;

+ (void*)_originFromNotification:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void*)deviceInfo;
- (id)displayName;
- (unsigned long long)hash;
- (id)initWithMROriginRef:(void*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLocal;
- (long long)logicalDeviceCount;
- (void*)mediaRemoteOrigin;
- (int)originType;
- (bool)shouldHandleNotification:(id)arg1;
- (id)uniqueIdentifier;
- (bool)updateDeviceInfo:(void*)arg1;
- (void)updateWithMROrigin:(void*)arg1;

@end