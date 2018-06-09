/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface _PUScrubberContainerView : UIView {
    double  __edgeInset;
    UIView * __movieScrubber;
    UIView * __slomoRegionEditor;
}

@property (setter=_setEdgeInset:, nonatomic) double _edgeInset;
@property (setter=_setMovieScrubber:, nonatomic, retain) UIView *_movieScrubber;
@property (setter=_setSlomoRegionEditor:, nonatomic, retain) UIView *_slomoRegionEditor;

- (void).cxx_destruct;
- (double)_edgeInset;
- (id)_movieScrubber;
- (void)_setEdgeInset:(double)arg1;
- (void)_setMovieScrubber:(id)arg1;
- (void)_setSlomoRegionEditor:(id)arg1;
- (id)_slomoRegionEditor;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end