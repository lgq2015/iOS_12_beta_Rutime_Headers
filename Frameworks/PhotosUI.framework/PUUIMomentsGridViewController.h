/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUUIMomentsGridViewController : PUPhotosGridViewController <PUPhotoPickerSelectionHandler, PUPhotoPickerServicesConsumer, PUPhotoPickerTestSupportHandler> {
    PUUIImagePickerControllerHelper * __imagePickerControllerHelper;
    NSArray * __imagePickerMediaTypes;
    bool  _didDisappear;
    UIBarButtonItem * _imagePickerCancelButton;
    UIBarButtonItem * _imagePickerMultipleSelectionDoneButton;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _lastKnownSafeAreaInsets;
    double  _lastKnownWidth;
    <PUPhotoPicker> * _photoPicker;
}

@property (readonly) PUUIImagePickerControllerHelper *_imagePickerControllerHelper;
@property (setter=_setImagePickerMediaTypes:, nonatomic, copy) NSArray *_imagePickerMediaTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didDisappear;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } lastKnownSafeAreaInsets;
@property (nonatomic) double lastKnownWidth;
@property (nonatomic) <PUPhotoPicker> *photoPicker;
@property (nonatomic, readonly) bool referenceValuesDidChange;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleImagePickerCancel:(id)arg1;
- (void)_handleImagePickerMultipleSelectionDone:(id)arg1;
- (id)_imagePickerControllerHelper;
- (id)_imagePickerMediaTypes;
- (void)_scrollToBottomIfNeeded;
- (void)_setImagePickerMediaTypes:(id)arg1;
- (void)_setTitle;
- (bool)allowsPeeking;
- (bool)canDragIn;
- (bool)canDragOut;
- (bool)canNavigateToPhotoInteractively:(bool)arg1;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3;
- (bool)didDisappear;
- (void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out bool*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5;
- (void)handleNavigateToAsset:(id)arg1 inContainer:(id)arg2;
- (void)handleToggleSelectionOfItemAtIndexPath:(id)arg1;
- (id)init;
- (id)initWithSpec:(id)arg1;
- (bool)initiallyScrolledToBottom;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })lastKnownSafeAreaInsets;
- (double)lastKnownWidth;
- (void)loadView;
- (id)newGridLayout;
- (void)performPhotoPickerPreviewOfFirstAsset;
- (void)performPhotoPickerSelection;
- (id)photoPicker;
- (bool)referenceValuesDidChange;
- (double)sectionedGridLayout:(id)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2;
- (double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2;
- (void)setDidDisappear:(bool)arg1;
- (void)setLastKnownSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLastKnownWidth:(double)arg1;
- (void)setPhotoPicker:(id)arg1;
- (void)setPhotoPickerMediaTypes:(id)arg1;
- (bool)shouldPerformAutomaticContentOffsetAdjustment;
- (bool)shouldShowMenu;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end