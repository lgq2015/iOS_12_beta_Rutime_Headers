/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMediaSocialSuggestedHandlesOperation : SSVComplexOperation {
    SKUIClientContext * _clientContext;
    NSLock * _lock;
    id /* block */  _outputBlock;
    NSArray * _words;
}

@property (copy) id /* block */ outputBlock;
@property (copy) NSArray *words;

- (void).cxx_destruct;
- (id)initWithClientContext:(id)arg1;
- (void)main;
- (id /* block */)outputBlock;
- (void)setOutputBlock:(id /* block */)arg1;
- (void)setWords:(id)arg1;
- (id)words;

@end