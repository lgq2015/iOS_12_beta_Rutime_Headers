/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRetouchImageLayer : BLRetouchLayer {
    UIImage * _image;
    BLPixelImageBuffer * _imageBuffer;
    double  _imageScaleFactor;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) BLPixelImageBuffer *imageBuffer;
@property (nonatomic) double imageScaleFactor;

- (void).cxx_destruct;
- (id)image;
- (id)imageBuffer;
- (double)imageScaleFactor;
- (struct CGSize { double x1; double x2; })imageSize;
- (struct CGContext { }*)newContextForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inDestRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 andScale:(double)arg3;
- (void)setImage:(id)arg1;
- (void)setImageBuffer:(id)arg1;
- (void)setImageScaleFactor:(double)arg1;

@end