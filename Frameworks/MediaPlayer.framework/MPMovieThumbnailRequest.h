/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMovieThumbnailRequest : NSObject {
    long long  _timeOption;
    NSArray * _times;
}

@property (nonatomic) long long timeOption;
@property (nonatomic, retain) NSArray *times;

- (void).cxx_destruct;
- (void)setTimeOption:(long long)arg1;
- (void)setTimes:(id)arg1;
- (long long)timeOption;
- (id)times;

@end
