/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerMediaSelectionCriteria : NSObject {
    void * _criteriaInternal;
}

@property (nonatomic, readonly) NSArray *preferredLanguages;
@property (nonatomic, readonly) NSArray *preferredMediaCharacteristics;

- (void)dealloc;
- (id)description;
- (id)figDictionary;
- (void)finalize;
- (id)init;
- (id)initWithFigDictionary:(id)arg1;
- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2;
- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 fallbackPreferredLanguages:(id)arg3 fallbackPreferredMediaCharacteristics:(id)arg4 captionDisplayType:(long long)arg5;
- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 preferredMediaSubTypes:(id)arg3 precludedMediaSubTypes:(id)arg4;
- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 preferredMediaSubTypes:(id)arg3 precludedMediaSubTypes:(id)arg4 preferMultichannelAudio:(bool)arg5 precludeMultichannelAudio:(bool)arg6;
- (bool)precludeMultichannelAudio;
- (id)precludedMediaSubTypes;
- (bool)preferMultichannelAudio;
- (id)preferredLanguages;
- (id)preferredMediaCharacteristics;
- (id)preferredMediaSubTypes;

@end
