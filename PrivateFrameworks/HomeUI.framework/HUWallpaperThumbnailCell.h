/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUWallpaperThumbnailCell : UITableViewCell <UIDropInteractionDelegate> {
    <HUWallpaperThumbnailCellDelegate> * _delegate;
    UIDropInteraction * _dropInteraction;
    NSLayoutConstraint * _imageHeightConstraint;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    UIImageView * _imageThumbnailView;
    NSLayoutConstraint * _imageWidthConstraint;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUWallpaperThumbnailCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIDropInteraction *dropInteraction;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) NSLayoutConstraint *imageHeightConstraint;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, retain) UIImageView *imageThumbnailView;
@property (nonatomic, retain) NSLayoutConstraint *imageWidthConstraint;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)dropInteraction;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (id)image;
- (id)imageHeightConstraint;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)imageThumbnailView;
- (id)imageWidthConstraint;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg1;
- (void)setDropInteraction:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageHeightConstraint:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImageThumbnailView:(id)arg1;
- (void)setImageWidthConstraint:(id)arg1;

@end