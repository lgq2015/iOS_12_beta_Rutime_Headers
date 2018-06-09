/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlayerPath : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleID;
    void * _mediaRemotePlayerPath;
    int  _pid;
    NSString * _playerID;
    bool  _resolved;
    MPAVRoute * _route;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (getter=isInProcess, nonatomic, readonly) bool inProcess;
@property (nonatomic, readonly) void*mediaRemotePlayerPath;
@property (nonatomic, readonly, copy) NSString *playerID;
@property (nonatomic, readonly, copy) NSString *representedBundleDisplayName;
@property (nonatomic, readonly, copy) NSString *representedBundleID;
@property (getter=isResolved, nonatomic, readonly) bool resolved;
@property (nonatomic, readonly) MPAVRoute *route;
@property (getter=isSystemMusicPath, nonatomic, readonly) bool systemMusicPath;

+ (id)deviceActivePlayerPath;
+ (id)pathWithCustomOrigin:(void*)arg1 bundleID:(id)arg2 playerID:(id)arg3;
+ (id)pathWithRoute:(id)arg1 bundleID:(id)arg2 playerID:(id)arg3;
+ (id)pathWithRoute:(id)arg1 mediaRemotePlayerPath:(void*)arg2 isResolved:(bool)arg3;
+ (bool)supportsSecureCoding;
+ (id)systemMusicPathWithRoute:(id)arg1 playerID:(id)arg2;
+ (id)unresolvablePathWithRoute:(id)arg1 bundleID:(id)arg2 playerID:(id)arg3;

- (void).cxx_destruct;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRoute:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 playerID:(id)arg4;
- (id)initWithRoute:(id)arg1 bundleID:(id)arg2 playerID:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isInProcess;
- (bool)isResolved;
- (bool)isSystemMusicPath;
- (void*)mediaRemotePlayerPath;
- (id)playerID;
- (id)representedBundleDisplayName;
- (id)representedBundleID;
- (void)resolveWithCompletion:(id /* block */)arg1;
- (void)resolveWithRouteResolvedHandler:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)route;

@end