/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMPhotoKitPhotosPickerActionPerformer : PXCMMShowPhotosPickerActionPerformer <PXCMMPhotoKitActionPerformer> {
    UIViewController * _photosPickerViewController;
}

@property (nonatomic, readonly) PXCMMPhotoKitSession *session;

- (void).cxx_destruct;
- (id)_currentAssets;
- (id)_currentSelectedAssets;
- (void)_pickerDidCompleteWithPickedAssets:(id)arg1;
- (void)performUserInteractionTask;

@end
