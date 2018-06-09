/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKPromotedIAPSetVisibilityRequest : SKRequest {
    NSString * _bundleId;
    id /* block */  _completionHandler;
    NSString * _productId;
    long long  _visibility;
}

@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) NSString *productId;
@property (nonatomic) long long visibility;

- (void).cxx_destruct;
- (void)_handleReply:(id)arg1;
- (void)_start;
- (id)bundleId;
- (id /* block */)completionHandler;
- (id)initWithVisibility:(long long)arg1 productId:(id)arg2 bundleId:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithVisibility:(long long)arg1 productId:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)productId;
- (void)setBundleId:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setProductId:(id)arg1;
- (void)setVisibility:(long long)arg1;
- (long long)visibility;

@end