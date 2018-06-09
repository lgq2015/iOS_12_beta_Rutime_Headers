/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWGraph : NSObject {
    NSString * _applicationID;
    bool  _beingConfigured;
    bool  _classicRetainedBufferCount;
    NSObject<OS_dispatch_group> * _commitGroup;
    NSMutableArray * _connections;
    BWSinkNode * _deferredPreparePrioritySink;
    NSMutableArray * _deferredStartSourceNodes;
    int  _errorStatus;
    bool  _haveStartedOrMadeLiveDeferredSourceNodes;
    long long  _inflightConfigurationID;
    BWMemoryPool * _memoryPool;
    NSString * _modeDescription;
    NSMutableArray * _nodes;
    NSArray * _nodesToPrepareAfterGraphStart;
    NSMutableArray * _nodesToPrepareConcurrently;
    NSMutableArray * _outputsWithSharedPools;
    NSMutableDictionary * _outputsWithSharedPoolsForAttachedMedia;
    bool  _prefetchesPixelBufferPools;
    bool  _running;
    NSMutableArray * _sinkNodes;
    NSString * _sourceDescription;
    NSMutableArray * _sourceNodes;
    NSObject<OS_dispatch_group> * _sourceNodesStartGroup;
    NSObject<OS_dispatch_group> * _startGroup;
    <BWGraphStatusDelegate> * _statusDelegate;
    NSDictionary * _subgraphsByName;
    bool  _supportsLiveReconfiguration;
}

@property (nonatomic, readonly) bool deferredNodePrepareEnabled;
@property int errorStatus;
@property (nonatomic, retain) BWMemoryPool *memoryPool;
@property (nonatomic) bool prefetchesPixelBufferPools;
@property (nonatomic) <BWGraphStatusDelegate> *statusDelegate;
@property (nonatomic, readonly) bool supportsLiveReconfiguration;

+ (void)initialize;

- (id)_breadthFirstEnumerator;
- (id)_depthFirstEnumeratorWithVertexOrdering:(int)arg1;
- (void)_getNodesToPrepareSeriallyBeforeGraphStart:(id*)arg1 concurrentlyBeforeGraphStart:(id*)arg2 afterGraphStart:(id*)arg3;
- (void)_logActiveNodesAfterGraphStopTimeout;
- (void)_logActiveSinkNodesAfterGraphStopTimeout;
- (void)_makeParentConfigurationChangesLive;
- (id)_newDispatchGroupForSinksToBecomeLiveWithConfigurationID:(long long)arg1;
- (id)_newDispatchGroupForSinksToTransitionToState:(int)arg1;
- (id)_nodesInSubgraphOfSinkNode:(id)arg1;
- (bool)_prepareNodesWithConfigurationChanges:(id*)arg1;
- (bool)_resolveFormats:(id*)arg1;
- (bool)_resolveRetainedBufferCounts:(id*)arg1;
- (void)_resolveVideoRetainedBufferCountsForOutput:(id)arg1 forAttachedMediaKey:(id)arg2 outputsWithSharedPools:(id)arg3;
- (void)_resumeInputConnectionsForNodes:(id)arg1;
- (id)_reverseBreadthFirstEnumerator;
- (id)_reverseDepthFirstEnumeratorWithVertexOrdering:(int)arg1;
- (id)_sinkNodes;
- (id)_sourceNodes;
- (void)_suspendInputConnectionsForNodes:(id)arg1;
- (void)_timedOutWaitingForOperationToCompleteWithDescription:(id)arg1;
- (void)_waitForSourceNodesToStart;
- (void)_waitForStartOrCommitToComplete;
- (void)_writeDotStringToFile;
- (bool)addNode:(id)arg1 error:(id*)arg2;
- (id)applicationID;
- (void)beginConfiguration;
- (bool)commitConfigurationWithID:(long long)arg1 error:(id*)arg2;
- (bool)connectOutput:(id)arg1 toInput:(id)arg2 pipelineStage:(id)arg3;
- (void)dealloc;
- (bool)deferredNodePrepareEnabled;
- (id)dotString;
- (void)enableConcurrentPrepareForNode:(id)arg1;
- (void)enableDeferredPrepareForNodesNotInPathOfSinkNode:(id)arg1;
- (void)enableDeferredStartForSourceNode:(id)arg1;
- (int)errorStatus;
- (id)init;
- (id)memoryPool;
- (id)modeDescription;
- (bool)prefetchesPixelBufferPools;
- (void)setApplicationID:(id)arg1;
- (void)setErrorStatus:(int)arg1;
- (void)setMemoryPool:(id)arg1;
- (void)setModeDescription:(id)arg1;
- (void)setPrefetchesPixelBufferPools:(bool)arg1;
- (void)setSourceDescription:(id)arg1;
- (void)setStatusDelegate:(id)arg1;
- (void)setSubgraphsByName:(id)arg1;
- (id)sourceDescription;
- (bool)start:(id*)arg1;
- (void)startDeferredNodePrepareIfNeededWithCompletionHandler:(id /* block */)arg1;
- (void)startDeferredSourceNodesIfNeeded;
- (id)statusDelegate;
- (bool)stop:(id*)arg1;
- (id)subgraphsByName;
- (bool)supportsLiveReconfiguration;
- (void)waitForStartOrCommitToComplete;

@end