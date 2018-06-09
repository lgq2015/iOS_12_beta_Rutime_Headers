/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDisplayTitleInfo : PXObservable <PXPhotoLibraryUIChangeObserver> {
    PHAssetCollection * __assetCollection;
    NSString * _fontName;
    NSString * _subtitle;
    NSString * _title;
}

@property (setter=_setAssetCollection:, nonatomic, retain) PHAssetCollection *_assetCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *fontName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)_assetCollection;
- (void)_setAssetCollection:(id)arg1;
- (void)_updatePropertiesFromAssetCollection;
- (id)description;
- (id)fontName;
- (id)init;
- (id)initWithAssetCollection:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 fontName:(id)arg3;
- (id)mutableChangeObject;
- (void)performChanges:(id /* block */)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)setFontName:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end