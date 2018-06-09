/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface IrisClipStyleTransition : IrisClipStyle {
    bool  _buildIntro;
    bool  _buildOutro;
    int  _containedTransitionOverlapOffset;
    bool  _videoContainedWithinTransitions;
}

@property (nonatomic) bool buildIntro;
@property (nonatomic) bool buildOutro;
@property (nonatomic, readonly) int containedTransitionOverlapOffset;
@property (nonatomic) bool videoContainedWithinTransitions;

- (bool)buildIntro;
- (bool)buildOutro;
- (id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2;
- (int)containedTransitionOverlapOffset;
- (double)idealDuration;
- (double)maximumDuration;
- (double)minimumDuration;
- (int)minimumPhotoFrameDuration;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })preferredInTransitionDurationRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })preferredOutTransitionDurationRange;
- (void)setBuildIntro:(bool)arg1;
- (void)setBuildOutro:(bool)arg1;
- (void)setVideoContainedWithinTransitions:(bool)arg1;
- (bool)videoContainedWithinTransitions;

@end