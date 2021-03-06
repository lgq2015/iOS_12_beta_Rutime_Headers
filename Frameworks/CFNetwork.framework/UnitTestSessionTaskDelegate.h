/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface UnitTestSessionTaskDelegate : NSObject <NSURLSessionTaskDelegate> {
    struct SmartBlockWithArgs<NSURLSessionTaskMetrics *> { 
        struct BlockHolderVar<NSURLSessionTaskMetrics *> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _didFinishCollectingMetricsCompletionBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct SmartBlockWithArgs<NSURLSessionTaskMetrics *> { struct BlockHolderVar<NSURLSessionTaskMetrics *> {} *x1; struct __shared_weak_count {} *x2; } didFinishCollectingMetricsCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (struct SmartBlockWithArgs<NSURLSessionTaskMetrics *> { struct BlockHolderVar<NSURLSessionTaskMetrics *> {} *x1; struct __shared_weak_count {} *x2; })didFinishCollectingMetricsCompletionBlock;
- (void)setDidFinishCollectingMetricsCompletionBlock:(struct SmartBlockWithArgs<NSURLSessionTaskMetrics *> { struct BlockHolderVar<NSURLSessionTaskMetrics *> {} *x1; struct __shared_weak_count {} *x2; })arg1;

@end
