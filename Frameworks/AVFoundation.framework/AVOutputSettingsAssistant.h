/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOutputSettingsAssistant : NSObject {
    AVOutputSettingsAssistantInternal * _internal;
}

@property (nonatomic, readonly) NSDictionary *audioSettings;
@property (nonatomic, readonly) NSString *outputFileType;
@property (nonatomic, readonly) NSDictionary *videoSettings;

+ (id)_allOutputSettingsPresets;
+ (id)availableOutputSettingsPresets;
+ (id)baseSettingsProviderForPreset:(id)arg1;
+ (id)outputSettingsAssistantWithPreset:(id)arg1;
+ (bool)validatesSourceVideoMinFrameDuration;
+ (id)videoEncoderCapabilities;
+ (id)videoSettingsAdjusterForPreset:(id)arg1;

- (id)audioSettings;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)initWithPreset:(id)arg1;
- (id)outputFileType;
- (void)setSourceAudioFormat:(struct opaqueCMFormatDescription { }*)arg1;
- (void)setSourceVideoAverageFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSourceVideoFormat:(struct opaqueCMFormatDescription { }*)arg1;
- (void)setSourceVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (const struct opaqueCMFormatDescription { }*)sourceAudioFormat;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })sourceVideoAverageFrameDuration;
- (const struct opaqueCMFormatDescription { }*)sourceVideoFormat;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })sourceVideoMinFrameDuration;
- (id)videoSettings;

@end