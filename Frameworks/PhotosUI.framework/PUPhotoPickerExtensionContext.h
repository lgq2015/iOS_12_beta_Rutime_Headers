/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoPickerExtensionContext : PUPhotoPickerAbstractExtensionContext <PUPhotoPickerHostService, PUPhotoPickerRemoteService> {
    NSOperationQueue * _multipleMediaConversionConcurrentQueue;
    NSObject<OS_dispatch_queue> * _multipleMediaIsolationQueue;
    NSString * _temporaryDirectoryInHost;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSOperationQueue *multipleMediaConversionConcurrentQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *multipleMediaIsolationQueue;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *temporaryDirectoryInHost;

- (void).cxx_destruct;
- (id)_copyPathToTempDirectoryIfNeeded:(id)arg1;
- (id)_copyUrlToTempDirectoryIfNeeded:(id)arg1;
- (void)_createPhotoPickerInfoDictionaryFromInfoDictionary:(id)arg1 appendTo:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleLivePhotoImageUrlFetch:(id)arg1 appendTo:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleLivePhotoVideoUrlFetch:(id)arg1 appendTo:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleMutlipleMediaCompletion:(id)arg1;
- (id)_host;
- (void)_photoPickerInfoDictionaryFromUIImagePickerControllerInfoDictionary:(id)arg1 completion:(id /* block */)arg2;
- (id)_photosMediaDirectoryURL;
- (void)_removeItemAtURLIfNeeded:(id)arg1;
- (void)_saveImageURLForLivePhoto:(id)arg1 fileURL:(id)arg2 appendTo:(id)arg3 completion:(id /* block */)arg4;
- (void)_saveVideoURLForLivePhoto:(id)arg1 fileURL:(id)arg2 appendTo:(id)arg3 completion:(id /* block */)arg4;
- (void)cancelPhotoPicker;
- (void)didDisplayPhotoPickerPreview;
- (void)didDisplayPhotoPickerSourceType:(id)arg1;
- (void)didSelectMediaWithInfoDictionary:(id)arg1;
- (void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg1;
- (void)dismissCurrentViewControllerFromPhotoPickerAnimated:(id)arg1;
- (void)displayActionTypeDescription:(id)arg1;
- (void)displayActionWithType:(id)arg1;
- (void)displaySecondaryActionWithType:(id)arg1;
- (void)initiatePhotoPickerSelection;
- (void)invalidatePhotoPickerHostServices;
- (void)invalidatePhotoPickerRemoteServices;
- (id)multipleMediaConversionConcurrentQueue;
- (id)multipleMediaIsolationQueue;
- (void)performAppearanceUpdateUsingPhotoPickerAppearanceDictionary:(id)arg1;
- (void)performPhotoPickerPreviewOfFirstAsset;
- (void)performTraitCollectionUpdateUsingData:(id)arg1 completion:(id /* block */)arg2;
- (void)requestViewControllerFromPhotoPickerWithRequestIdentifier:(id)arg1;
- (void)requestedViewControllerOptionsWithCompletionHandler:(id /* block */)arg1;
- (void)setPhotoPickerNavigationBarHidden:(id)arg1;
- (void)setPhotoPickerViewControllerPrompt:(id)arg1;
- (void)setPhotoPickerViewControllerTitle:(id)arg1;
- (void)setTemporaryDirectoryInHost:(id)arg1;
- (id)temporaryDirectoryInHost;

@end