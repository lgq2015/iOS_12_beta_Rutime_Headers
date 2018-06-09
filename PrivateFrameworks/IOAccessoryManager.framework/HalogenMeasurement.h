/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IOAccessoryManager.framework/IOAccessoryManager
 */

@interface HalogenMeasurement : NSObject {
    struct OpaqueAudioComponentInstance { } * _audioComponentInst;
    NSCondition * _audioTimeoutCond;
    int  _audioTimeoutInSec;
    int  _bitDepth;
    int  _calibrationSampleOffsetInFrames;
    double  _capacitanceInNanoF;
    double  _clippingScore;
    double  _compensatedImpedance;
    double  _compensatedPhase;
    unsigned int  _connect;
    NSMutableData * _currentCalibrationData;
    double  _currentGainCorrection;
    NSMutableData * _currentMeasurementData;
    double  _currentPhaseCompensation;
    unsigned long long  _eisPinToken1;
    unsigned long long  _eisPinToken2;
    double  _goertzelImpedance;
    double  _goertzelPhase;
    HalogenLdcmCalc * _halogenLdcmCalc;
    int  _halogenResult;
    int  _hydraSettlingTimeInMs;
    int  _initalPhaseInDegrees;
    int  _inputFrameSizeInBytes;
    bool  _isCalibrationDone;
    bool  _isMeasurementDone;
    unsigned short  _maxOutputAmplitude;
    int  _measurementSampleOffsetInFrames;
    int  _nHydraSettlingSamples;
    int  _nInputChannels;
    int  _nMeasurementSamples;
    int  _nOutputChannels;
    int  _nPaddingSamples;
    int  _nTotalSamples;
    int  _nWarmupSamples;
    int  _outputFrameSizeInBytes;
    NSMutableData * _pcmInputData;
    int  _pcmInputDataIndexInBytes;
    int  _pcmInputDataMaxSzInBytes;
    int  _pcmInputDataSampleCnt;
    NSMutableData * _pcmOutputData;
    int  _pcmOutputDataIndexInBytes;
    int  _pcmOutputDataMaxSzInBytes;
    int  _pinToMeasure;
    double  _resistanceInOhms;
    int  _sampleRate;
    unsigned int  _service;
    double  _signalFreq;
    NSMutableData * _voltageCalibrationData;
    double  _voltageGainCorrection;
    NSMutableData * _voltageMeasurementData;
    int  _warmupTimeInMs;
}

@property struct OpaqueAudioComponentInstance { }*audioComponentInst;
@property NSCondition *audioTimeoutCond;
@property int audioTimeoutInSec;
@property int bitDepth;
@property (readonly) int calibrationSampleOffsetInFrames;
@property (readonly) double capacitanceInNanoF;
@property (readonly) double clippingScore;
@property (readonly) double compensatedImpedance;
@property (readonly) double compensatedPhase;
@property unsigned int connect;
@property NSMutableData *currentCalibrationData;
@property (readonly) double currentGainCorrection;
@property NSMutableData *currentMeasurementData;
@property (readonly) double currentPhaseCompensation;
@property unsigned long long eisPinToken1;
@property unsigned long long eisPinToken2;
@property (readonly) double goertzelImpedance;
@property (readonly) double goertzelPhase;
@property HalogenLdcmCalc *halogenLdcmCalc;
@property (readonly) int halogenResult;
@property int hydraSettlingTimeInMs;
@property int initalPhaseInDegrees;
@property int inputFrameSizeInBytes;
@property bool isCalibrationDone;
@property bool isMeasurementDone;
@property unsigned short maxOutputAmplitude;
@property int measurementSampleOffsetInFrames;
@property int nHydraSettlingSamples;
@property int nInputChannels;
@property int nMeasurementSamples;
@property int nOutputChannels;
@property int nPaddingSamples;
@property int nTotalSamples;
@property int nWarmupSamples;
@property int outputFrameSizeInBytes;
@property NSMutableData *pcmInputData;
@property int pcmInputDataIndexInBytes;
@property int pcmInputDataMaxSzInBytes;
@property int pcmInputDataSampleCnt;
@property NSMutableData *pcmOutputData;
@property int pcmOutputDataIndexInBytes;
@property int pcmOutputDataMaxSzInBytes;
@property int pinToMeasure;
@property (readonly) double resistanceInOhms;
@property int sampleRate;
@property unsigned int service;
@property double signalFreq;
@property NSMutableData *voltageCalibrationData;
@property (readonly) double voltageGainCorrection;
@property NSMutableData *voltageMeasurementData;
@property int warmupTimeInMs;

- (bool)_allocBuffers;
- (bool)_connectToAccessoryManager:(int)arg1;
- (void)_disconnectFromAccessoryManager;
- (bool)_doHalogenLdcmCalc;
- (void)_freeBuffers;
- (void)_generateSineWave;
- (bool)_initAudioPath;
- (struct OpaqueAudioComponentInstance { }*)audioComponentInst;
- (id)audioTimeoutCond;
- (int)audioTimeoutInSec;
- (int)bitDepth;
- (int)calibrationSampleOffsetInFrames;
- (double)capacitanceInNanoF;
- (double)clippingScore;
- (double)compensatedImpedance;
- (double)compensatedPhase;
- (unsigned int)connect;
- (id)currentCalibrationData;
- (double)currentGainCorrection;
- (id)currentMeasurementData;
- (double)currentPhaseCompensation;
- (void)dealloc;
- (int)doMeasurement:(bool)arg1 onPin:(int)arg2;
- (unsigned long long)eisPinToken1;
- (unsigned long long)eisPinToken2;
- (double)goertzelImpedance;
- (double)goertzelPhase;
- (id)halogenLdcmCalc;
- (int)halogenResult;
- (int)hydraSettlingTimeInMs;
- (id)initWithSize:(int)arg1 onPort:(int)arg2;
- (int)initalPhaseInDegrees;
- (int)inputFrameSizeInBytes;
- (bool)isCalibrationDone;
- (bool)isMeasurementDone;
- (unsigned short)maxOutputAmplitude;
- (int)measurementSampleOffsetInFrames;
- (int)nHydraSettlingSamples;
- (int)nInputChannels;
- (int)nMeasurementSamples;
- (int)nOutputChannels;
- (int)nPaddingSamples;
- (int)nTotalSamples;
- (int)nWarmupSamples;
- (int)outputFrameSizeInBytes;
- (id)pcmInputData;
- (int)pcmInputDataIndexInBytes;
- (int)pcmInputDataMaxSzInBytes;
- (int)pcmInputDataSampleCnt;
- (id)pcmOutputData;
- (int)pcmOutputDataIndexInBytes;
- (int)pcmOutputDataMaxSzInBytes;
- (int)pinToMeasure;
- (double)resistanceInOhms;
- (int)sampleRate;
- (int)saveAsWav:(id)arg1;
- (unsigned int)service;
- (void)setAudioComponentInst:(struct OpaqueAudioComponentInstance { }*)arg1;
- (void)setAudioTimeoutCond:(id)arg1;
- (void)setAudioTimeoutInSec:(int)arg1;
- (void)setBitDepth:(int)arg1;
- (void)setConnect:(unsigned int)arg1;
- (void)setCurrentCalibrationData:(id)arg1;
- (void)setCurrentMeasurementData:(id)arg1;
- (void)setEisPinToken1:(unsigned long long)arg1;
- (void)setEisPinToken2:(unsigned long long)arg1;
- (void)setHalogenLdcmCalc:(id)arg1;
- (void)setHydraSettlingTimeInMs:(int)arg1;
- (void)setInitalPhaseInDegrees:(int)arg1;
- (void)setInputFrameSizeInBytes:(int)arg1;
- (void)setIsCalibrationDone:(bool)arg1;
- (void)setIsMeasurementDone:(bool)arg1;
- (void)setMaxOutputAmplitude:(unsigned short)arg1;
- (void)setMeasurementSampleOffsetInFrames:(int)arg1;
- (void)setNHydraSettlingSamples:(int)arg1;
- (void)setNInputChannels:(int)arg1;
- (void)setNMeasurementSamples:(int)arg1;
- (void)setNOutputChannels:(int)arg1;
- (void)setNPaddingSamples:(int)arg1;
- (void)setNTotalSamples:(int)arg1;
- (void)setNWarmupSamples:(int)arg1;
- (void)setOutputFrameSizeInBytes:(int)arg1;
- (void)setPcmInputData:(id)arg1;
- (void)setPcmInputDataIndexInBytes:(int)arg1;
- (void)setPcmInputDataMaxSzInBytes:(int)arg1;
- (void)setPcmInputDataSampleCnt:(int)arg1;
- (void)setPcmOutputData:(id)arg1;
- (void)setPcmOutputDataIndexInBytes:(int)arg1;
- (void)setPcmOutputDataMaxSzInBytes:(int)arg1;
- (void)setPinToMeasure:(int)arg1;
- (void)setSampleRate:(int)arg1;
- (void)setService:(unsigned int)arg1;
- (void)setSignalFreq:(double)arg1;
- (void)setVoltageCalibrationData:(id)arg1;
- (void)setVoltageMeasurementData:(id)arg1;
- (void)setWarmupTimeInMs:(int)arg1;
- (double)signalFreq;
- (id)voltageCalibrationData;
- (double)voltageGainCorrection;
- (id)voltageMeasurementData;
- (int)warmupTimeInMs;

@end