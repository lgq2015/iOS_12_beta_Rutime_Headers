/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NURenderClient : NSObject {
    id /* block */  _genericCompletionBlock;
    NSString * _name;
    NUPriority * _priority;
    NURenderContext * _renderContext;
    NSObject<OS_dispatch_queue> * _responseQueue;
    bool  _shouldCoalesceUpdates;
}

@property (copy) id /* block */ genericCompletionBlock;
@property (copy) NSString *name;
@property (retain) NUPriority *priority;
@property (nonatomic, retain) NURenderContext *renderContext;
@property (readonly) NSObject<OS_dispatch_queue> *responseQueue;
@property (nonatomic) bool shouldCoalesceUpdates;

- (void).cxx_destruct;
- (void)cancel;
- (id)description;
- (id /* block */)genericCompletionBlock;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 responseQueue:(id)arg2;
- (id)name;
- (id)priority;
- (id)renderContext;
- (id)responseQueue;
- (void)setGenericCompletionBlock:(id /* block */)arg1;
- (void)setName:(id)arg1;
- (void)setPriority:(id)arg1;
- (void)setRenderContext:(id)arg1;
- (void)setShouldCoalesceUpdates:(bool)arg1;
- (bool)shouldCoalesceUpdates;
- (void)submitGenericRequest:(id)arg1;
- (void)submitGenericRequest:(id)arg1 completion:(id /* block */)arg2;

@end