/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSAccountStoreCache : NSObject

+ (void)_resetAccountStoreCache;
+ (id)accountStoreForMediaType:(id)arg1;
+ (id)cache;
+ (id)cacheAccessQueue;
+ (id)defaultMediaTypeForCurrentProcess;
+ (id)mediaTypeForAccountStore:(id)arg1;
+ (id)mediaTypeForProcessInfo:(id)arg1;

@end