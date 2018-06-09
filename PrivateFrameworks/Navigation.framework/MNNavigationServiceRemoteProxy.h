/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNNavigationServiceRemoteProxy : NSObject <MNNavigationServiceProxy, MNNavigationServiceReconnectorDelegate> {
    bool  _applicationActive;
    NSHashTable * _clients;
    NSXPCConnection * _connection;
    <MNNavigationServiceRemoteProxyDelegate> * _delegate;
    NSDate * _lastReconnectionDate;
    NSMutableArray * _recentConnectionInterruptions;
    MNNavigationServiceReconnector * _reconnector;
    MNSettings * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MNNavigationServiceRemoteProxyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_abandonConnection;
- (void)_cleanupReconnector;
- (void)_closeConnection;
- (void)_emptyMethod;
- (void)_initializeReconnectorWithDetails:(id)arg1 shouldPrepare:(bool)arg2;
- (id)_methodSignatureForEmptyMethod;
- (void)_openConnection;
- (void)_reconnectIfAllowed;
- (id)_remoteObjectProxy;
- (void)_updateConnection;
- (void)acceptReroute:(bool)arg1 forTrafficIncidentAlertDetails:(id)arg2;
- (void)changeSettings:(id)arg1;
- (void)closeForClient:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (void)interfaceHashesWithHandler:(id /* block */)arg1;
- (bool)isOpenForClient:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)navigationServiceProxy:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id)arg1 didUpdateNavigationDetails:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)navigationServiceReconnector:(id)arg1 didReconnectWithDetails:(id)arg2;
- (void)openForClient:(id)arg1;
- (void)prepareNavigationWithRouteDetails:(id)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)repeatCurrentGuidanceWithReply:(id /* block */)arg1;
- (void)repeatCurrentTrafficAlertWithReply:(id /* block */)arg1;
- (void)resumeOriginalDestination;
- (void)setCurrentAudioOutputSetting:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setFullGuidanceMode:(bool)arg1;
- (void)setGuidancePromptsEnabled:(bool)arg1;
- (void)setHFPPreference:(bool)arg1 forSetting:(id)arg2;
- (void)setHeadingOrientation:(int)arg1;
- (void)setIsConnectedToCarplay:(bool)arg1;
- (void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2;
- (void)setTraceIsPlaying:(bool)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTracePosition:(double)arg1;
- (void)startNavigationForRouteDetails:(id)arg1 handler:(id /* block */)arg2;
- (void)startPredictingDestinationsWithHandler:(id /* block */)arg1;
- (void)stopCurrentGuidancePrompt;
- (void)stopNavigation;
- (void)stopPredictingDestinations;
- (void)switchToRouteWithDetails:(id)arg1;
- (void)updateDestination:(id)arg1;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(id /* block */)arg2;

@end