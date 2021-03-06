/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaPickerLibraryMusicVideosViewConfiguration : MusicLibraryMusicVideosViewConfiguration {
    bool  _isMultipleSelectionAllowed;
}

- (void)_multipleSelectionAllowanceDidChange:(id)arg1;
- (bool)canPreviewEntityValueContext:(id)arg1;
- (void)dealloc;
- (void)handleSelectionOfAddButtonForEntityValueProvider:(id)arg1 inEntityProvider:(id)arg2 fromViewController:(id)arg3;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (id)init;
- (id)initWithMultipleSelectionAllowed:(bool)arg1;
- (id)loadEntityViewDescriptor;
- (id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2;

@end
