/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIBackButtonContainerView : UIView {
    double  _backButtonLeadingMargin;
    CALayer * _edgeMask;
    UIImage * _edgeMaskImage;
    CALayer * _fillMask;
    bool  _isRTL;
}

@property (nonatomic) double backButtonLeadingMargin;
@property (nonatomic, retain) UIImage *edgeMaskImage;
@property (nonatomic) bool isRTL;
@property (nonatomic) bool maskEnabled;

- (void).cxx_destruct;
- (double)backButtonLeadingMargin;
- (id)edgeMaskImage;
- (bool)isRTL;
- (bool)maskEnabled;
- (void)setBackButtonLeadingMargin:(double)arg1;
- (void)setEdgeMaskImage:(id)arg1;
- (void)setIsRTL:(bool)arg1;
- (void)setMaskEnabled:(bool)arg1;

@end