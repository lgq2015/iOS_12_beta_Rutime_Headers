/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicArtworkView : UIImageView {
    NSMutableSet * _activeTouches;
    <MusicArtworkViewDelegate> * _delegate;
    long long  _externalContentMode;
    unsigned long long  _highlightTransactionCount;
    UIView * _highlightView;
    double  _idealAspectRatio;
    bool  _overallHighlighted;
    bool  _shouldRespectHighlightProperty;
    bool  _touchHighlighted;
}

@property (nonatomic) <MusicArtworkViewDelegate> *delegate;
@property (nonatomic) double idealAspectRatio;
@property (nonatomic) bool shouldRespectHighlightProperty;

- (void).cxx_destruct;
- (void)_finishTouches:(id)arg1 didCancel:(bool)arg2 withEvent:(id)arg3;
- (void)_musicArtworkViewCommonInitialization;
- (void)_setTouchHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)_updateArtworkViewContentMode;
- (void)_updateOverallHighlightedAnimated:(bool)arg1;
- (id)delegate;
- (double)idealAspectRatio;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (bool)isArtworkSizeCloseEnoughToIdealAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (void)setContentMode:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIdealAspectRatio:(double)arg1;
- (void)setImage:(id)arg1;
- (void)setShouldRespectHighlightProperty:(bool)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (bool)shouldRespectHighlightProperty;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end