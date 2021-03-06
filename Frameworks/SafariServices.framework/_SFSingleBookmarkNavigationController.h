/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFSingleBookmarkNavigationController : UINavigationController <_SFBookmarkInfoViewControllerDelegate> {
    <_SFSingleBookmarkNavigationControllerDelegate> * _bookmarkNavDelegate;
    WebBookmarkCollection * _collection;
    bool  _delegateNotifiedOfResult;
    _SFBookmarkInfoViewController * _infoViewController;
}

@property (nonatomic) <_SFSingleBookmarkNavigationControllerDelegate> *bookmarkNavDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)newBookmarkInfoViewControllerWithBookmark:(id)arg1 inCollection:(id)arg2 addingBookmark:(bool)arg3 toFavorites:(bool)arg4 willBeDisplayedModally:(bool)arg5;

- (void).cxx_destruct;
- (id)_initWithBookmark:(id)arg1 inCollection:(id)arg2 addingBookmark:(bool)arg3 toFavorites:(bool)arg4;
- (void)addBookmarkWithTitle:(id)arg1 address:(id)arg2 parentBookmark:(id)arg3;
- (void)bookmarkInfoViewController:(id)arg1 didFinishWithResult:(bool)arg2;
- (bool)bookmarkInfoViewControllerCanSaveBookmarkChanges:(id)arg1;
- (bool)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)arg1;
- (id)bookmarkNavDelegate;
- (id)initForAddingToFavoritesInCollection:(id)arg1;
- (id)initWithBookmark:(id)arg1 inCollection:(id)arg2;
- (id)initWithCollection:(id)arg1;
- (bool)prepareForPresentationForAddingBookmark:(bool)arg1;
- (void)setBookmarkNavDelegate:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
