/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCSSQLCachePool : NSObject {
    NSMutableDictionary * _cachesByPath;
    NSMutableDictionary * _checkoutsByPath;
}

@property (nonatomic, retain) NSMutableDictionary *cachesByPath;
@property (nonatomic, retain) NSMutableDictionary *checkoutsByPath;

+ (id)sharedPool;

- (void).cxx_destruct;
- (id)_init;
- (id)cacheForContext:(id)arg1;
- (id)cachesByPath;
- (id)checkoutsByPath;
- (void)releaseCache:(id)arg1 forContext:(id)arg2;
- (void)setCachesByPath:(id)arg1;
- (void)setCheckoutsByPath:(id)arg1;

@end
