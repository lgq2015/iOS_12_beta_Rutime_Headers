/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUPhotoEditToolController : UIViewController <PUPhotoEditLayoutDynamicAdaptable, PUViewControllerSpecChangeObserver, UIScrollViewDelegate> {
    PLPhotoEditAggregateSession * _aggregateSession;
    <PUPhotoEditToolControllerDelegate> * _delegate;
    PLEditSource * _editSource;
    long long  _layoutOrientation;
    NSString * _localizedName;
    bool  _performingLiveInteraction;
    PLPhotoEditMutableModel * _photoEditModel;
    id /* block */  _ppt_didBecomeActiveToolBlock;
    UIButton * _preferredAlternateToolbarButton;
    UIImage * _selectedToolbarIcon;
    PUPhotoEditToolControllerSpec * _spec;
    UIImage * _toolbarIcon;
    PUPhotoEditValuesCalculator * _valuesCalculator;
}

@property (nonatomic, readonly) PLPhotoEditAggregateSession *aggregateSession;
@property (nonatomic, readonly) bool canResetToDefaultValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUPhotoEditToolControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PLEditSource *editSource;
@property (nonatomic, readonly, copy) NURenderPipelineFilter *filter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long layoutOrientation;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *localizedResetToolActionTitle;
@property (getter=isPerformingLiveInteraction, nonatomic, readonly) bool performingLiveInteraction;
@property (nonatomic, readonly) PLPhotoEditMutableModel *photoEditModel;
@property (nonatomic, copy) id /* block */ ppt_didBecomeActiveToolBlock;
@property (nonatomic, readonly) UIButton *preferredAlternateToolbarButton;
@property (nonatomic, readonly, copy) UIColor *preferredPreviewBackgroundColor;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } preferredPreviewViewInsets;
@property (nonatomic, readonly) UIImage *selectedToolbarIcon;
@property (nonatomic, readonly) PUPhotoEditToolControllerSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool suppressesEditUpdates;
@property (nonatomic, readonly) UIImage *toolbarIcon;
@property (nonatomic, readonly) PUPhotoEditValuesCalculator *valuesCalculator;
@property (nonatomic, readonly) bool wantsDefaultPreviewView;
@property (nonatomic, readonly) bool wantsSecondaryToolbarVisible;
@property (nonatomic, readonly) bool wantsZoomAndPanEnabled;

- (void).cxx_destruct;
- (void)_photoEditModelDidChange:(id)arg1;
- (void)_updateTraitCollectionAndLayoutReferenceSize;
- (void)_updateTraitCollectionAndLayoutReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (id)aggregateSession;
- (void)baseLivePhotoInvalidated;
- (void)basePhotoInvalidated;
- (bool)canBecomeActiveTool;
- (bool)canResetToDefaultValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectInCoordinateSpace:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didBecomeActiveTool;
- (void)didResignActiveTool;
- (id)editSource;
- (id)filter;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)installLivePhotoPlaybackGestureRecognizer:(id)arg1;
- (bool)installTogglePreviewGestureRecognizer:(id)arg1;
- (bool)isPerformingLiveInteraction;
- (long long)layoutOrientation;
- (void)loadView;
- (id)localizedName;
- (id)localizedResetToolActionTitle;
- (void)mediaViewIsReady;
- (id)photoEditModel;
- (void)photoEditModelDidChange;
- (id /* block */)ppt_didBecomeActiveToolBlock;
- (id)preferredAlternateToolbarButton;
- (id)preferredPreviewBackgroundColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })preferredPreviewViewInsets;
- (void)prepareForSave;
- (void)resetToDefaultValueAnimated:(bool)arg1;
- (id)selectedToolbarIcon;
- (void)setAggregateSession:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutOrientation:(long long)arg1;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)setPerformingLiveInteraction:(bool)arg1;
- (void)setPpt_didBecomeActiveToolBlock:(id /* block */)arg1;
- (void)setPreferredAlternateToolbarButton:(id)arg1;
- (void)setSpec:(id)arg1;
- (void)setupWithPhotoEditModel:(id)arg1 editSource:(id)arg2 valuesCalculator:(id)arg3;
- (id)spec;
- (void)specDidChange;
- (bool)suppressesEditUpdates;
- (id)toolbarIcon;
- (void)traitCollectionDidChange:(id)arg1;
- (id)valuesCalculator;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wantsDefaultPreviewView;
- (bool)wantsSecondaryToolbarVisible;
- (bool)wantsZoomAndPanEnabled;
- (void)willBecomeActiveTool;
- (void)willResignActiveTool;

@end