/* made by EzioChiu.
 */

@protocol AVPlaybackControlsViewDelegate <NSObject>

@required

- (void)playbackControlsView:(AVPlaybackControlsView *)arg1 interactiveContentOverlayViewLayoutMarginsDidChange:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 shouldLayoutIfNeeded:(bool)arg3;

@end
