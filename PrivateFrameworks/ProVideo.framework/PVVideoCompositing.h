/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVVideoCompositing : NSObject <AVVideoCompositing> {
    bool  _cancelsPendingRequests;
    bool  _didEnterBackground;
    struct deque<int, std::__1::allocator<int> > { 
        struct __split_buffer<int *, std::__1::allocator<int *> > { 
            int **__first_; 
            int **__begin_; 
            int **__end_; 
            struct __compressed_pair<int **, std::__1::allocator<int *> > { 
                int **__value_; 
            } __end_cap_; 
        } __map_; 
        unsigned long long __start_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<int> > { 
            unsigned long long __value_; 
        } __size_; 
    }  _dropFrameTracker;
    bool  _droppedResolution;
    PVEffectScheduler * _effectScheduler;
    unsigned int  _frameCount;
    double  _frameDuration;
    bool  _hostAppIsShuttingDown;
    struct vector<HGRef<PVRenderJob>, std::__1::allocator<HGRef<PVRenderJob> > > { 
        struct HGRef<PVRenderJob> {} *__begin_; 
        struct HGRef<PVRenderJob> {} *__end_; 
        struct __compressed_pair<HGRef<PVRenderJob> *, std::__1::allocator<HGRef<PVRenderJob> > > { 
            struct HGRef<PVRenderJob> {} *__value_; 
        } __end_cap_; 
    }  _inFlightRenderJobs;
    NSLock * _inFlightRenderJobsLock;
    bool  _inPlayback;
    struct HGSynchronizable { int (**x1)(); struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; struct _opaque_pthread_t {} *x3; unsigned long long x4; struct _opaque_pthread_cond_t { long long x_5_1_1; BOOL x_5_1_2[40]; } x5; } * _inPlaybackLock;
    unsigned int  _minimumRequestCompletionTimeMS;
    struct HGSynchronizable { int (**x1)(); struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; struct _opaque_pthread_t {} *x3; unsigned long long x4; struct _opaque_pthread_cond_t { long long x_5_1_1; BOOL x_5_1_2[40]; } x5; } * _notificationStateLock;
    struct PVPerfStats { double x1; int x2; struct OnceStats { double x_3_1_1; double x_3_1_2; } x3; struct vector<PVPerfStats::FrameStats, std::__1::allocator<PVPerfStats::FrameStats> > { struct FrameStats {} *x_4_1_1; struct FrameStats {} *x_4_1_2; struct __compressed_pair<PVPerfStats::FrameStats *, std::__1::allocator<PVPerfStats::FrameStats> > { struct FrameStats {} *x_3_2_1; } x_4_1_3; } x4; bool x5; struct FrameStats { unsigned int x_6_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_6_1_2; double x_6_1_3; double x_6_1_4; double x_6_1_5; bool x_6_1_6; bool x_6_1_7; unsigned int x_6_1_8; struct vector<double, std::__1::allocator<double> > { double *x_9_2_1; double *x_9_2_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_3_1; } x_9_2_3; } x_6_1_9; } x6; struct FrameStats { unsigned int x_7_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_7_1_2; double x_7_1_3; double x_7_1_4; double x_7_1_5; bool x_7_1_6; bool x_7_1_7; unsigned int x_7_1_8; struct vector<double, std::__1::allocator<double> > { double *x_9_2_1; double *x_9_2_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_3_1; } x_9_2_3; } x_7_1_9; } x7; } * _perfStats;
    struct HGSynchronizable { int (**x1)(); struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; struct _opaque_pthread_t {} *x3; unsigned long long x4; struct _opaque_pthread_cond_t { long long x_5_1_1; BOOL x_5_1_2[40]; } x5; } * _perfStatsLock;
    NSDictionary * _pixelBufferPoolAttributes;
    id /* block */  _refreshCompletionBlock;
    NSObject<OS_dispatch_queue> * _refreshCompletionCallbackQueue;
    struct HGRef<PVRenderManager> { 
        struct PVRenderManager {} *m_Obj; 
    }  _renderManager;
    NSDictionary * _sourceAttributes;
    struct HGSynchronizable { int (**x1)(); struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; struct _opaque_pthread_t {} *x3; unsigned long long x4; struct _opaque_pthread_cond_t { long long x_5_1_1; BOOL x_5_1_2[40]; } x5; } * _throttleLock;
    unsigned int  _throttleRequestHandling;
    bool  _thumbnailCompositing;
    bool  _trackStats;
    struct HGSynchronizable { int (**x1)(); struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; struct _opaque_pthread_t {} *x3; unsigned long long x4; struct _opaque_pthread_cond_t { long long x_5_1_1; BOOL x_5_1_2[40]; } x5; } * _trackerLock;
    AVVideoComposition * _videoComposition;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _videoCompositionDuration;
    int  _windowedDropTotal;
    PVVideoCompositingContext * videoCompositingContext;
}

@property (nonatomic) bool cancelsPendingRequests;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int minimumRequestCompletionTimeMS;
@property (nonatomic, copy) id /* block */ refreshCompletionBlock;
@property (nonatomic, readonly) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (nonatomic, readonly) NSDictionary *sourcePixelBufferAttributes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsWideColorSourceFrames;
@property (nonatomic) bool thumbnailCompositing;
@property (retain) PVVideoCompositingContext *videoCompositingContext;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addFrameStats:(struct FrameStats { unsigned int x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; double x3; double x4; double x5; bool x6; bool x7; unsigned int x8; struct vector<double, std::__1::allocator<double> > { double *x_9_1_1; double *x_9_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_9_1_3; } x9; }*)arg1;
- (void)addRenderJobInFlight:(struct HGRef<PVRenderJob> { struct PVRenderJob {} *x1; })arg1;
- (void)applicationWillTerminate:(id)arg1;
- (double)averageStat:(int)arg1;
- (void)callRefreshCompletionBlock:(bool)arg1;
- (void)cancelAllPendingVideoCompositionRequests;
- (bool)cancelsPendingRequests;
- (void)checkAndReportDropFrames:(struct FrameStats { unsigned int x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; double x3; double x4; double x5; bool x6; bool x7; unsigned int x8; struct vector<double, std::__1::allocator<double> > { double *x_9_1_1; double *x_9_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_9_1_3; } x9; }*)arg1 job:(struct HGRef<PVRenderJob> { struct PVRenderJob {} *x1; })arg2;
- (void)dealloc;
- (void)didEnterBackground:(id)arg1;
- (void)didRecieveMemoryWarning:(id)arg1;
- (double)getLastStat:(int)arg1;
- (id)getPreviousInstruction:(struct HGRef<PVRenderJob> { struct PVRenderJob {} *x1; })arg1;
- (double)getTimeSinceLast:(struct FrameStats { unsigned int x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; double x3; double x4; double x5; bool x6; bool x7; unsigned int x8; struct vector<double, std::__1::allocator<double> > { double *x_9_1_1; double *x_9_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_9_1_3; } x9; }*)arg1;
- (bool)inPlayback;
- (id)init;
- (unsigned int)minimumRequestCompletionTimeMS;
- (double)numFrames;
- (void)printAndClearStats;
- (id /* block */)refreshCompletionBlock;
- (void)removeRenderJobInFlight:(struct HGRef<PVRenderJob> { struct PVRenderJob {} *x1; })arg1;
- (void)renderContextChanged:(id)arg1;
- (void)renderRequestFinished:(struct HGRef<PVRenderJob> { struct PVRenderJob {} *x1; })arg1;
- (id)requiredPixelBufferAttributesForRenderContext;
- (void)setCancelsPendingRequests:(bool)arg1;
- (void)setColorSpacesFromDestinationBuffer:(id)arg1;
- (void)setFrameDuration:(double)arg1;
- (void)setInPlayback:(bool)arg1;
- (void)setMinimumRequestCompletionTimeMS:(unsigned int)arg1;
- (void)setRefreshCompletionBlock:(id /* block */)arg1;
- (void)setThumbnailCompositing:(bool)arg1;
- (void)setVideoCompositingContext:(id)arg1;
- (void)setupEffectScheduler;
- (void)setupTextureFactories;
- (bool)shouldDoLowPowerExport;
- (void)signalScheduling:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 playerRate:(float)arg2;
- (void)signalSchedulingResetSearch;
- (id)sourcePixelBufferAttributes;
- (void)startVideoCompositionRequest:(id)arg1;
- (bool)supportsWideColorSourceFrames;
- (unsigned long long)taskResidentSize;
- (bool)thumbnailCompositing;
- (void)trackStats:(bool)arg1;
- (id)videoCompositingContext;
- (void)videoCompositionChanged:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (double)windowedFPS;

@end