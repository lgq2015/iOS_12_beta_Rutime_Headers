/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXPhotoKitAdjustedVideoURLRequest : _PXPhotoKitAdjustedUIMediaRequest {
    PHVideoRequestOptions * _options;
    NSString * _pairingIdentifier;
    PLPhotoEditRenderer * _renderer;
    id /* block */  _resultHandler;
}

@property (nonatomic, readonly) PHVideoRequestOptions *options;
@property (nonatomic, readonly, copy) NSString *pairingIdentifier;
@property (nonatomic, readonly, copy) id /* block */ resultHandler;

- (void).cxx_destruct;
- (void)_handleExportFinished:(bool)arg1 error:(id)arg2 videoURL:(id)arg3;
- (void)_renderIfNeeded;
- (void)editSourceDidChange;
- (id)initWithRenderQueue:(id)arg1 asset:(id)arg2 pairingIdentifier:(id)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (id)options;
- (id)pairingIdentifier;
- (void)progressDidChange;
- (id /* block */)resultHandler;
- (void)start;

@end