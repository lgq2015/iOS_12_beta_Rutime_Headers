/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKFirstUnlockQueue : NSObject {
    bool  _isBeforeFirstUnlock;
    bool  _isSuspended;
    const char * _name;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_firstUnlock:(id)arg1;
- (void)dealloc;
- (void)dispatch:(id /* block */)arg1;
- (id)initWithName:(const char *)arg1;

@end
