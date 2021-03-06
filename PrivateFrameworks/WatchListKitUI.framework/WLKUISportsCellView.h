/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUISportsCellView : UIView {
    TVImageElement * _appImageElement;
    _TVImageView * _appImageView;
    struct CGSize { 
        double width; 
        double height; 
    }  _cellSize;
    TVImageElement * _imageElement;
    _TVImageView * _imageView;
    WLKUISportsOverlayView * _overlayView;
    bool  _shouldLayoutImageFirst;
    NSArray * _textRenderers;
}

@property (nonatomic, retain) TVImageElement *appImageElement;
@property (nonatomic, retain) _TVImageView *appImageView;
@property (nonatomic) struct CGSize { double x1; double x2; } cellSize;
@property (nonatomic, retain) TVImageElement *imageElement;
@property (nonatomic, retain) _TVImageView *imageView;
@property (nonatomic, retain) WLKUISportsOverlayView *overlayView;
@property (nonatomic) bool shouldLayoutImageFirst;
@property (nonatomic, copy) NSArray *textRenderers;

- (void).cxx_destruct;
- (double)_imageOffset;
- (double)_textHeight;
- (double)_textOffset;
- (id)appImageElement;
- (id)appImageView;
- (struct CGSize { double x1; double x2; })cellSize;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)imageElement;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)layoutWithElement:(id)arg1;
- (id)overlayView;
- (void)prepareForCellReuse;
- (void)setAppImageElement:(id)arg1;
- (void)setAppImageView:(id)arg1;
- (void)setCellSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImageElement:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setOverlayView:(id)arg1;
- (void)setShouldLayoutImageFirst:(bool)arg1;
- (void)setTextRenderers:(id)arg1;
- (bool)shouldLayoutImageFirst;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textRenderers;

@end
