/* made by EzioChiu.
 */

@protocol CKAudioBalloonView <NSObject>

@required

- (double)duration;
- (bool)isPlayed;
- (bool)isPlaying;
- (void)setDuration:(double)arg1;
- (void)setPlayed:(bool)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setTime:(double)arg1;
- (void)setWaveform:(UIImage *)arg1;
- (void)setWaveformContentMode:(long long)arg1;
- (double)time;
- (long long)waveformContentMode;

@end