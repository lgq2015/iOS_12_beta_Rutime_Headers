/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RERelevanceEngineSubsystem : NSObject {
    RERelevanceEngine * _relevanceEngine;
    NSObject<OS_dispatch_queue> * _relevanceEngineQueue;
    bool  _running;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) RERelevanceEngine *relevanceEngine;
@property (getter=isRunning, nonatomic, readonly) bool running;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRelevanceEngine:(id)arg1;
- (bool)isRunning;
- (void)pause;
- (id)queue;
- (id)relevanceEngine;
- (void)resume;
- (void)setRunning:(bool)arg1;

@end