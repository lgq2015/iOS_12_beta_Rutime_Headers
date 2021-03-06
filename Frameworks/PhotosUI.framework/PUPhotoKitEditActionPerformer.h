/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoKitEditActionPerformer : PUPhotoKitActionPerformer

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void)_beginEditingCurrentAsset;
- (void)_presentEditorForAsset:(id)arg1;
- (void)performUserInteractionTask;

@end
