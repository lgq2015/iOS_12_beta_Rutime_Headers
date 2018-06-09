/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMViewController : UIViewController <PXActionMenuDelegate, PXCMMActionControllerDelegate, PXCMMActionPerformerDelegate, PXCMMAssetsViewControllerDelegate, PXChangeObserver, PXSectionedDataSourceManagerObserver, UIPopoverPresentationControllerDelegate> {
    <PXCMMActionControllerDelegate> * _actionDelegate;
    UIBarButtonItem * _actionMenuButtonItem;
    NSProgress * _actionProgress;
    PXActionMenuController * _activeActionMenuController;
    UIActivityIndicatorView * _activityIndicatorView;
    PXCMMAssetsProgressListener * _assetsProgressListener;
    PXCMMAssetsViewController * _assetsViewController;
    <PXCMMViewControllerDelegate> * _delegate;
    NSArray * _layoutConstraints;
    bool  _loadingPeopleSuggestions;
    PXOneUpPresentation * _oneUpPresentation;
    UIBarButtonItem * _progressButton;
    PXCMMSession * _session;
    bool  _showTitleInNavigationBar;
    PXCMMSpecManager * _specManager;
    UINavigationBar * _standaloneNavigationBar;
    PXUpdater * _updater;
}

@property (nonatomic) <PXCMMActionControllerDelegate> *actionDelegate;
@property (nonatomic, retain) UIBarButtonItem *actionMenuButtonItem;
@property (nonatomic, retain) NSProgress *actionProgress;
@property (nonatomic, retain) PXActionMenuController *activeActionMenuController;
@property (nonatomic, retain) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic, readonly) PXCMMAssetsViewController *assetsViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXCMMViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *layoutConstraints;
@property (getter=isLoadingPeopleSuggestions, nonatomic) bool loadingPeopleSuggestions;
@property (nonatomic, readonly) PXOneUpPresentation *oneUpPresentation;
@property (nonatomic, retain) UIBarButtonItem *progressButton;
@property (nonatomic, readonly) PXCMMSession *session;
@property (nonatomic) bool showTitleInNavigationBar;
@property (nonatomic, readonly) PXCMMSpecManager *specManager;
@property (nonatomic, retain) UINavigationBar *standaloneNavigationBar;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXUpdater *updater;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void).cxx_destruct;
- (bool)_canPresentComposeRecipientViewController;
- (void)_completePeopleSuggestionsLoading;
- (void)_dismissViewControllerWithCompletionHandler:(id /* block */)arg1;
- (void)_handleActionButton;
- (void)_handleActionMenuButtonItem:(id)arg1;
- (void)_handleComposeRecipientCancelButton:(id)arg1;
- (id)_localizedSelectionTitle;
- (void)_performCancel;
- (void)_presentComposeRecipientViewController;
- (void)_presentViewController:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_setupNavigationItem;
- (bool)_shouldShowActionMenu;
- (bool)_shouldWaitBeforePresentingComposeRecipientViewController;
- (void)_updateActionProgress;
- (void)_updateComponentViewController:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_updateComponentsViewControllerLayout;
- (void)_updateStyle;
- (void)_updateTitle;
- (id)actionDelegate;
- (void)actionMenu:(id)arg1 actionPerformer:(id)arg2 didChangeState:(unsigned long long)arg3;
- (bool)actionMenu:(id)arg1 dismissViewController:(struct NSObject { Class x1; }*)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionMenu:(id)arg1 presentViewController:(id)arg2;
- (id)actionMenuButtonItem;
- (bool)actionPerformer:(id)arg1 dismissViewController:(struct NSObject { Class x1; }*)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionPerformer:(id)arg1 presentViewController:(struct NSObject { Class x1; }*)arg2;
- (id)actionProgress;
- (id)activeActionMenuController;
- (id)activityIndicatorView;
- (id)assetsViewController;
- (void)assetsViewControllerDidTapActionButton:(id)arg1;
- (void)assetsViewControllerDidTapSendBackActionButton:(id)arg1;
- (id)completeMyMomentViewController:(id)arg1 performActionForSession:(id)arg2;
- (id)completeMyMomentViewController:(id)arg1 performSendBackActionForSession:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)didPerformDeletionActionForAssetsViewController:(id)arg1;
- (void)didTapAddMoreButtonForAssetsViewController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSession:(id)arg1;
- (bool)isLoadingPeopleSuggestions;
- (id)layoutConstraints;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)oneUpPresentation;
- (id)oneUpPresentationForAssetsViewController:(id)arg1;
- (long long)positionForBar:(id)arg1;
- (id)progressButton;
- (bool)px_canPerformCrossfadeTransitionWithDetailViewController:(id)arg1;
- (bool)px_canPerformCrossfadeTransitionWithMasterViewController:(id)arg1;
- (id)session;
- (void)setActionDelegate:(id)arg1;
- (void)setActionMenuButtonItem:(id)arg1;
- (void)setActionProgress:(id)arg1;
- (void)setActiveActionMenuController:(id)arg1;
- (void)setActivityIndicatorView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutConstraints:(id)arg1;
- (void)setLoadingPeopleSuggestions:(bool)arg1;
- (void)setProgressButton:(id)arg1;
- (void)setShowTitleInNavigationBar:(bool)arg1;
- (void)setStandaloneNavigationBar:(id)arg1;
- (bool)shouldShowAddMoreButtonForAssetsViewController:(id)arg1;
- (bool)showTitleInNavigationBar;
- (id)specManager;
- (id)standaloneNavigationBar;
- (void)updateViewConstraints;
- (id)updater;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (id)px_gridPresentation;

@end