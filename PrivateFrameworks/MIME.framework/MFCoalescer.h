/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFCoalescer : NSObject {
    id  _coalescedValue;
    NSObject<OS_dispatch_source> * _coalescer;
    id /* block */  _coalescerAction;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void)_handleCoalesceEvent;
- (void)coalesceValue:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCoalescingAction:(id /* block */)arg1;

@end