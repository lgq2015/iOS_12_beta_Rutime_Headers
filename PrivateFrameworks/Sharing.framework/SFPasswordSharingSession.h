/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFPasswordSharingSession : NSObject {
    bool  _activateCalled;
    NSString * _deviceName;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _hashedEmail;
    NSString * _hashedPhone;
    NSString * _hotspotPSK;
    bool  _invalidateCalled;
    int  _pairState;
    int  _passwordShareState;
    SFDevice * _peerDevice;
    id /* block */  _progressHandler;
    id /* block */  _promptForPINHandler;
    SFSession * _sfSession;
    int  _sfSessionState;
    NSDate * _shareClock;
}

@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) NSString *hashedEmail;
@property (nonatomic, retain) NSString *hashedPhone;
@property (nonatomic, retain) NSString *hotspotPSK;
@property (nonatomic, retain) SFDevice *peerDevice;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, copy) id /* block */ promptForPINHandler;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_completedWithError:(id)arg1;
- (void)_receivedObject:(id)arg1 flags:(unsigned int)arg2;
- (void)_run;
- (int)_runPair;
- (int)_runPasswordShare;
- (void)_runPasswordShareReceiveResponse:(id)arg1;
- (void)_runPasswordShareSendInfo;
- (int)_runSFSessionStart;
- (void)activate;
- (void)dealloc;
- (id)deviceName;
- (id)dispatchQueue;
- (id)hashedEmail;
- (id)hashedPhone;
- (id)hotspotPSK;
- (id)init;
- (void)invalidate;
- (id)peerDevice;
- (id /* block */)progressHandler;
- (id /* block */)promptForPINHandler;
- (void)setDeviceName:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setHashedEmail:(id)arg1;
- (void)setHashedPhone:(id)arg1;
- (void)setHotspotPSK:(id)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setPromptForPINHandler:(id /* block */)arg1;
- (void)tryPIN:(id)arg1;

@end