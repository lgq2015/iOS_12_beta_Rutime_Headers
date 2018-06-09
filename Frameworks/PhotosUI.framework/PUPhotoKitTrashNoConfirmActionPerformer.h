/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoKitTrashNoConfirmActionPerformer : PUPhotoKitDestructiveActionsPerformer

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (long long)destructivePhotosAction;
- (bool)shouldConfirmDestructiveAction;

@end