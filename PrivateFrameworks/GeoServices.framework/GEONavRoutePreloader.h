/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavRoutePreloader : GEORoutePreloader <GEORoutePreloaderSubclass> {
    bool  _anyErrors;
    double  _beginTime;
    <GEORoutePreloadCamera> * _camera;
    long long  _currentLoadingSteps;
    NSMutableArray * _failedSubscriptions;
    bool  _finished;
    NSTimer * _geodCrashTimer;
    bool  _hadEnoughTilesToDisableNetworking;
    double  _maneuverSizeInMeters;
    double  _mostRecentErrorTime;
    NSMapTable * _stepErrors;
    unsigned int  _stepGeneration;
    NSMapTable * _stepLifetimeErrors;
    NSMutableArray * _steps;
    NSMutableDictionary * _subscriptions;
    GEOTileKeyList * _tilesLoadingOrLoaded;
    GEOTileKeyList * _tilesMissed;
    GEOTileKeyList * _tilesReceived;
    bool  _tooFarFromRoute;
}

@property (nonatomic, retain) <GEORoutePreloadCamera> *camera;
@property (nonatomic, readonly) NSObject<OS_os_log> *preloaderLog;

- (void).cxx_destruct;
- (void)_accumulateSteps;
- (void)_cancelAllSteps;
- (void)_cancelPreloadTasks;
- (void)_cancelRequestsInPast;
- (void)_cancelStep:(id)arg1;
- (id)_descriptionForStep:(id)arg1;
- (void)_evaluateNetworkPerformance:(id)arg1;
- (void)_geodCrashed:(id)arg1;
- (void)_incrementErrorForStep:(id)arg1;
- (bool)_loadStep:(id)arg1 requireWiFi:(bool)arg2;
- (void)_performNextRequests;
- (void)_performTileRequestsPreemptedStepIndex:(long long)arg1 currentRoutePositionStepIndex:(long long)arg2 firstErrorStepIndex:(long long)arg3 firstLoadStepIndex:(long long)arg4 loadStepsAhead:(long long)arg5 loadStepsAheadIfNoWiFi:(long long)arg6;
- (void)_resetErrCounts;
- (void)_retryFailuresWithErrorsReset:(bool)arg1;
- (void)beginLoading;
- (id)camera;
- (bool)fullDebuggingEnabled;
- (void)getPreloadSetCoordinates:(struct { double x1; double x2; }*)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long*)arg3;
- (id)initWithRoute:(id)arg1 loggingEnabled:(bool)arg2 minimalDebugging:(bool)arg3 fullDebugging:(bool)arg4 batteryHandler:(id /* block */)arg5;
- (bool)isSufficientlyLoaded;
- (bool)loggingEnabled;
- (bool)minimalDebuggingEnabled;
- (void)performTearDown;
- (int)preloadStateForTile:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)preloaderLog;
- (void)setCamera:(id)arg1;
- (void)setNetworkQuality:(unsigned long long)arg1;
- (void)setTraits:(id)arg1;
- (void)stopLoading;
- (void)updateWithRouteMatch:(id)arg1;

@end