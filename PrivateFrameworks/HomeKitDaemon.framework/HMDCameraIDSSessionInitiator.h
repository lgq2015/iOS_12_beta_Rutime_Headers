/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraIDSSessionInitiator : HMDCameraIDSSessionHandler <HMDCameraPowerAssertionProtocol, HMDCameraRemoteStreamSenderProtocol, IDSServiceDelegate, IDSSessionDelegate> {
    <HMDCameraIDSSessionInitiatorDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSString * _destinationID;
    HMDCameraNetworkConfig * _localNetworkConfig;
    AVCPacketRelay * _packetRelay;
    HMFOSTransaction * _packetRelayTransaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HMDCameraIDSSessionInitiatorDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *destinationID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDCameraNetworkConfig *localNetworkConfig;
@property (nonatomic, readonly) NSNumber *mtu;
@property (nonatomic, retain) AVCPacketRelay *packetRelay;
@property (nonatomic, retain) HMFOSTransaction *packetRelayTransaction;
@property (nonatomic, readonly) HMDCameraSessionID *sessionID;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callSessionEnded:(id)arg1;
- (void)_callSessionStarted:(id)arg1;
- (void)_sendInvitation;
- (void)_startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(id)arg2 cameraVideoSSRC:(unsigned int)arg3 audioSocket:(int)arg4 audioNetworkConfig:(id)arg5 cameraAudioSSRC:(unsigned int)arg6;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)destinationID;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 destinationID:(id)arg3 localNetworkConfig:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6;
- (id)localNetworkConfig;
- (id)logIdentifier;
- (id)mtu;
- (void)openRelaySession;
- (id)packetRelay;
- (id)packetRelayTransaction;
- (void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2;
- (void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2;
- (void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)sessionStarted:(id)arg1;
- (void)setPacketRelay:(id)arg1;
- (void)setPacketRelayTransaction:(id)arg1;
- (void)startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(id)arg2 cameraVideoSSRC:(unsigned int)arg3 audioSocket:(int)arg4 audioNetworkConfig:(id)arg5 cameraAudioSSRC:(unsigned int)arg6;

@end