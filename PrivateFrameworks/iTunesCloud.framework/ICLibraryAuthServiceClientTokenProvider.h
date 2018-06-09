/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICLibraryAuthServiceClientTokenProvider : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSString * _cachedClientToken;
    NSDate * _cachedClientTokenExpiration;
    NSNumber * _cachedDSID;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSObject<OS_dispatch_queue> * _delayQueue;
    id /* block */  _requestDelayBlock;
}

+ (id)sharedProvider;

- (void).cxx_destruct;
- (id)_activeAccountDSID;
- (void)_handleITunesStoreAccountsChanged;
- (void)_handleRequestToken;
- (void)_handleTokenResponse:(id)arg1 tokenRequest:(id)arg2;
- (id /* block */)_requestTokenWithDelay:(long long)arg1;
- (id)cachedTokenAndResetCache:(bool)arg1;
- (id)init;

@end