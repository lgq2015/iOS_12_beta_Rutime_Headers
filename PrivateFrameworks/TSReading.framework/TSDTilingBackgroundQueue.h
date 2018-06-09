/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDTilingBackgroundQueue : NSObject {
    TSKAccessController * mAccessController;
    NSObject<OS_dispatch_semaphore> * mCanEnqueueReaders;
    NSObject<OS_dispatch_group> * mInFlightReaders;
    NSObject<OS_dispatch_semaphore> * mReadLockSignal;
    unsigned long long  mReaderCount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  mReaderSpinLock;
    long long  mShutdownToken;
    bool  mShuttingDown;
}

@property (getter=isShuttingDown) bool shuttingDown;

+ (bool)isHoldingReadLockFromBackgroundQueue;
+ (id)p_sharedLimitedQueue;

- (void)dealloc;
- (void)drainAndPerformSync:(id /* block */)arg1;
- (id)init;
- (id)initWithAccessController:(id)arg1;
- (bool)isShuttingDown;
- (void)p_readLock;
- (void)p_readUnlock;
- (void)performAsync:(id /* block */)arg1;
- (void)setShuttingDown:(bool)arg1;
- (void)shutdown;

@end