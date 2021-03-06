/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFExecutionEnvironment : NSObject {
    NSHashTable * _observers;
    unsigned long long  _runningState;
}

@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, readonly) unsigned long long runningState;

+ (id)sharedInstance;
+ (id)stringForHFExecutionEnvironmentRunningState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)dispatchMessageToObserversWithBlock:(id /* block */)arg1;
- (void)executionEnvironmentDidBecomeActive;
- (void)executionEnvironmentDidEnterBackground;
- (void)executionEnvironmentWillEnterForeground;
- (void)executionEnvironmentWillResignActive;
- (id)init;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (unsigned long long)runningState;
- (void)setObservers:(id)arg1;
- (void)setRunningState:(unsigned long long)arg1;

@end
