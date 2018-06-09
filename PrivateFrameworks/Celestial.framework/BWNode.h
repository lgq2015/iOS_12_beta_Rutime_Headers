/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWNode : NSObject {
    long long  _configurationID;
    BWGraph * _graph;
    bool  _haveWarnedAboutUnimplementedDroppedSampleHandler;
    BWNodeInput * _input;
    NSMutableArray * _inputs;
    NSString * _name;
    BWNodeOutput * _output;
    NSMutableArray * _outputs;
    <BWNodeRenderDelegate> * _renderDelegate;
    bool  _singleInput;
    bool  _singleOutput;
    bool  _supportsConcurrentLiveInputCallbacks;
    bool  _supportsLiveReconfiguration;
}

@property (nonatomic) BWGraph *graph;
@property (nonatomic, readonly) bool hasNonLiveConfigurationChanges;
@property (readonly) BWNodeInput *input;
@property (readonly) NSArray *inputs;
@property (nonatomic, copy) NSString *name;
@property (readonly) NSString *nodeSubType;
@property (readonly) NSString *nodeType;
@property (readonly) BWNodeOutput *output;
@property (readonly) NSArray *outputs;
@property (nonatomic) <BWNodeRenderDelegate> *renderDelegate;
@property (nonatomic) bool supportsConcurrentLiveInputCallbacks;
@property (nonatomic) bool supportsLiveReconfiguration;

+ (void)initialize;

- (void)_handleMessage:(id)arg1 fromInput:(id)arg2;
- (void)addInput:(id)arg1;
- (void)addOutput:(id)arg1;
- (bool)allInputsHaveReachedState:(int)arg1;
- (long long)configurationID;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (id)description;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (id)graph;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)handleIrisReferenceMovieRequest:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)handleStillImagePrewarmWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 resolvedPhotoManifest:(id)arg3 forInput:(id)arg4;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2;
- (bool)hasNonLiveConfigurationChanges;
- (id)init;
- (id)input;
- (id)inputs;
- (void)makeCurrentConfigurationLive;
- (id)name;
- (id)nodeSubType;
- (id)nodeType;
- (id)output;
- (id)outputs;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)renderDelegate;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setConfigurationID:(long long)arg1;
- (void)setGraph:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRenderDelegate:(id)arg1;
- (void)setSupportsConcurrentLiveInputCallbacks:(bool)arg1;
- (void)setSupportsLiveReconfiguration:(bool)arg1;
- (bool)supportsConcurrentLiveInputCallbacks;
- (bool)supportsLiveReconfiguration;

@end