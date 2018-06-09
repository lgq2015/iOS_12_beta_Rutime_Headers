/* made by EzioChiu.
 */

@protocol MiroTrimmerDelegate <NSObject>

@optional

- (void)trimmer:(id <MiroTrimmer>)arg1 didContinueTrimmingClip:(id <MiroClip>)arg2 startTime:(float)arg3 endTime:(float)arg4;
- (void)trimmer:(id <MiroTrimmer>)arg1 didEndTrimmingClip:(id <MiroClip>)arg2 startTime:(float)arg3 endTime:(float)arg4;
- (bool)trimmer:(id <MiroTrimmer>)arg1 shouldContinueTrimmingClip:(id <MiroClip>)arg2 startTime:(float)arg3 endTime:(float)arg4;
- (void)trimmer:(id <MiroTrimmer>)arg1 willStartTrimmingClip:(id <MiroClip>)arg2;

@end