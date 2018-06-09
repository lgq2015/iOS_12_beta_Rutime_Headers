/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCWaveform : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    unsigned long long  _decodedVersion;
    NSMutableArray * _segments;
}

@property (nonatomic, readonly) unsigned long long averagePowerLevelsRate;
@property (nonatomic, readonly) NSArray *segments;

+ (void)initialize;
+ (bool)supportsSecureCoding;
+ (id)waveformURLForAVURL:(id)arg1;
+ (id)waveformWithContentsOfURL:(id)arg1 minimumRequiredVersion:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)_mergeBoundarySegmentsInArray:(id)arg1;
- (id)_mutableSegmentsByClippingToTimeRange:(struct { double x1; double x2; })arg1;
- (id)_mutableSegmentsIntersectingTimeRange:(struct { double x1; double x2; })arg1 intersectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (unsigned long long)averagePowerLevelsRate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasUniformPowerLevel:(float)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSegments:(id)arg1;
- (bool)isWaveformDataEqualToDataInWaveform:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfSegmentsIntersectingTimeRange:(struct { double x1; double x2; })arg1;
- (bool)saveContentsToURL:(id)arg1;
- (id)segments;
- (id)segmentsByClippingToTimeRange:(struct { double x1; double x2; })arg1;

@end