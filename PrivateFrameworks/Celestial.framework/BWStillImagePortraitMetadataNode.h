/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImagePortraitMetadataNode : BWNode {
    NSDictionary * _cameraInfoByPortType;
    FigSDOFRenderingTuningParameters * _sdofTuningParams;
    NSDictionary * _sensorIDDictionary;
}

+ (void)initialize;

- (int)_loadAndConfigureSDOFRenderering;
- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)initWithSensorIDDictionary:(id)arg1 cameraInfoByPortType:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end