/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICClientInfo : NSObject <NSCopying, NSMutableCopying> {
    NSString * _clientIdentifier;
    NSString * _clientVersion;
    NSString * _processName;
    NSString * _requestingBundleIdentifier;
    NSString * _requestingBundleVersion;
}

@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (nonatomic, readonly, copy) NSString *clientVersion;
@property (nonatomic, readonly, copy) NSString *processName;
@property (nonatomic, readonly, copy) NSString *requestingBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *requestingBundleVersion;

+ (id)defaultInfo;

- (void).cxx_destruct;
- (id)_clientInfoCopyWithClass:(Class)arg1;
- (id)clientIdentifier;
- (id)clientVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)processName;
- (id)requestingBundleIdentifier;
- (id)requestingBundleVersion;

@end
