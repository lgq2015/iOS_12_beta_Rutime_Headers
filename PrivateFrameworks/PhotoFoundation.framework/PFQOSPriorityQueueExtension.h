/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFQOSPriorityQueueExtension : PFPriorityQueueExtension <PFQOSPriorityEnqueuing>

- (void)enqueueWithCurrentQOSPriority:(id /* block */)arg1;
- (void)enqueueWithQOSPriority:(unsigned int)arg1 block:(id /* block */)arg2;
- (id)initWithConcurrentScheduling:(bool)arg1;

@end
