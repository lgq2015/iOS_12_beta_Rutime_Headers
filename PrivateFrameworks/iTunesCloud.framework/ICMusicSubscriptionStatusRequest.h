/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMusicSubscriptionStatusRequest : NSObject <NSCopying> {
    bool  _allowsFallbackToExpiredStatus;
    bool  _allowsFallbackToStatusNeedingReload;
    long long  _maximumRetryCount;
    bool  _shouldIgnoreCache;
    ICStoreRequestContext * _storeRequestContext;
}

@property (nonatomic) bool allowsFallbackToExpiredStatus;
@property (nonatomic) bool allowsFallbackToStatusNeedingReload;
@property (nonatomic) long long maximumRetryCount;
@property (nonatomic) bool shouldIgnoreCache;
@property (nonatomic, copy) ICStoreRequestContext *storeRequestContext;

- (void).cxx_destruct;
- (bool)allowsFallbackToExpiredStatus;
- (bool)allowsFallbackToStatusNeedingReload;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithStoreRequestContext:(id)arg1;
- (long long)maximumRetryCount;
- (void)setAllowsFallbackToExpiredStatus:(bool)arg1;
- (void)setAllowsFallbackToStatusNeedingReload:(bool)arg1;
- (void)setMaximumRetryCount:(long long)arg1;
- (void)setShouldIgnoreCache:(bool)arg1;
- (void)setStoreRequestContext:(id)arg1;
- (bool)shouldIgnoreCache;
- (id)storeRequestContext;

@end