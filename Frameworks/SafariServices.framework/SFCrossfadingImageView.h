/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFCrossfadingImageView : UIView {
    UIImage * _fromImage;
    double  _progress;
    UIImage * _toImage;
}

@property (nonatomic, retain) UIImage *fromImage;
@property (nonatomic) double progress;
@property (nonatomic, retain) UIImage *toImage;

- (void).cxx_destruct;
- (void)_updateCrossfade;
- (id)fromImage;
- (double)progress;
- (void)setFromImage:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setToImage:(id)arg1;
- (id)toImage;

@end
