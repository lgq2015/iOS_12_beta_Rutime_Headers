/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCameraAudioCodec : NSObject <NSSecureCoding> {
    unsigned long long  _audioCodec;
}

@property (nonatomic, readonly) unsigned long long audioCodec;

+ (bool)isValid:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (unsigned long long)audioCodec;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAudioCodecType:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;

@end
