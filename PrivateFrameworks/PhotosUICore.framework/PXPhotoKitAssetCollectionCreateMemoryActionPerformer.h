/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitAssetCollectionCreateMemoryActionPerformer : PXPhotoKitAssetCollectionActionPerformer

+ (bool)canPerformOnAssetCollection:(id)arg1 people:(id)arg2;
+ (id)createBarButtonItemForAssetCollection:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3;
+ (id)createPreviewActionForAssetCollection:(id)arg1 withHandler:(id /* block */)arg2;
+ (id)createPreviewActionGroupForAssetCollection:(id)arg1 mutableActionTypeToPreviewActionMap:(id)arg2 withHandler:(id /* block */)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollection:(id)arg2 person:(id)arg3;

- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end