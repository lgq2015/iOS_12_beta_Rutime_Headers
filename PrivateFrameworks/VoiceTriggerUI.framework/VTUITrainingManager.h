/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface VTUITrainingManager : NSObject <AFAudioAnalyzerDelegate, VTUIAudioSessionDelegate, VTUITrainingSessionDelegate> {
    AFAudioAnalyzer * _audioAnalyzer;
    <VTUIAudioSession> * _audioSession;
    id /* block */  _cleanupCompletion;
    VTUITrainingSession * _currentTrainingSession;
    <VTUITrainingManagerDelegate> * _delegate;
    NSString * _locale;
    bool  _performRMS;
    VTPhraseSpotter * _phraseSpotter;
    NSObject<OS_dispatch_queue> * _queue;
    float  _rms;
    long long  _sessionNumber;
    SFSpeechRecognizer * _speechRecognizer;
    bool  _speechRecognizerAvailable;
    bool  _suspendAudio;
    NSMutableArray * _trainingSessions;
}

@property (readonly) int audioSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VTUITrainingManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property float rms;
@property (readonly) bool speechRecognizerAvailable;
@property (readonly) Class superclass;
@property bool suspendAudio;

+ (id)sharedtrainingSessionQueue;
+ (id)trainingManagerWithLocaleID:(id)arg1;

- (void).cxx_destruct;
- (void)VTUITrainingSessionRMSAvailable:(float)arg1;
- (void)VTUITrainingSessionStopListen;
- (int)_audioSource;
- (void)_beginOfSpeechDetected;
- (bool)_createAudioAnalyzer;
- (void)_destroyAudioSession;
- (void)_endOfSpeechDetected;
- (bool)_setupAudioSession;
- (bool)_shouldShowHeadsetDisconnectionMessage;
- (bool)_startAudioSession;
- (void)_stopAudioSession;
- (void)audioAnalyzer:(id)arg1 didDetectHardEndpointAtTime:(double)arg2;
- (void)audioAnalyzer:(id)arg1 didDetectStartpointAtTime:(double)arg2;
- (void)audioSessionDidStartRecording:(bool)arg1 error:(id)arg2;
- (void)audioSessionDidStopRecording:(long long)arg1;
- (void)audioSessionErrorDidOccur:(id)arg1;
- (void)audioSessionRecordBufferAvailable:(id)arg1;
- (void)audioSessionUnsupportedAudioRoute;
- (int)audioSource;
- (bool)cancelTrainingForID:(long long)arg1;
- (id)cleanupWithCompletion:(id /* block */)arg1;
- (void)closeSessionBeforeStartWithStatus:(int)arg1 successfully:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)createSpeechRecognizer;
- (bool)createVoiceTrigger;
- (id)delegate;
- (void)destroyVoiceTrigger;
- (void)didDetectForceEndPoint;
- (id)initWithLocaleIdentifier:(id)arg1 withAudioSession:(id)arg2;
- (void)prepareWithCompletion:(id /* block */)arg1;
- (void)reset;
- (float)rms;
- (void)setDelegate:(id)arg1;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setRms:(float)arg1;
- (void)setSuspendAudio:(bool)arg1;
- (bool)shouldPerformRMS;
- (bool)speechRecognizerAvailable;
- (void)startRMS;
- (void)stopRMS;
- (bool)suspendAudio;
- (long long)trainUtterance:(long long)arg1 shouldUseASR:(bool)arg2 completion:(id /* block */)arg3;

@end
