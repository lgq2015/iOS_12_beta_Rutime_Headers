/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackingStoreSaveToPersistentStore : NSOperation {
    HMDHomeManager * _homeManager;
    bool  _incrementGeneration;
    NSString * _reason;
}

@property (nonatomic, readonly) HMDHomeManager *homeManager;
@property (nonatomic, readonly) bool incrementGeneration;
@property (nonatomic, readonly) NSString *reason;

- (void).cxx_destruct;
- (id)homeManager;
- (bool)incrementGeneration;
- (id)initWithHomeManager:(id)arg1 reason:(id)arg2 incrementGeneration:(bool)arg3;
- (void)main;
- (id)reason;

@end
