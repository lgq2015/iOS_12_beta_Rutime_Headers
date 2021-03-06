/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUILibraryGridCollectionViewController : VUILibraryFetchControllerViewController <UICollectionViewDataSource, UICollectionViewDelegate, VUILocalContentProtocol, VUIMediaEntitiesFetchControllerDelegate> {
    NSMutableDictionary * _cellMetrics;
    struct CGSize { 
        double width; 
        double height; 
    }  _cellSize;
    double  _cellWidth;
    UICollectionView * _collectionView;
    UIBarButtonItem * _currentNavBarButtonItem;
    bool  _displaySortFilter;
    VUIMediaEntityFetchRequest * _fetchRequest;
    bool  _forceBackButton;
    NSArray * _genreGroupedResults;
    long long  _gridFilter;
    UIBarButtonItem * _libraryBarButton;
    bool  _onlyShowLocalContent;
    bool  _requiresRelayout;
    VUILibraryLockupViewCell * _sizingCell;
    VUILibraryCollectionHeaderView * _sizingHeaderView;
    NSArray * _totalResults;
}

@property (nonatomic) double cellWidth;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) UIBarButtonItem *currentNavBarButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VUIMediaEntityFetchRequest *fetchRequest;
@property (nonatomic) bool forceBackButton;
@property (nonatomic, retain) NSArray *genreGroupedResults;
@property (nonatomic) long long gridFilter;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIBarButtonItem *libraryBarButton;
@property (nonatomic) bool onlyShowLocalContent;
@property (nonatomic, retain) VUILibraryLockupViewCell *sizingCell;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *totalResults;

- (void).cxx_destruct;
- (double)_computeBottomMargin;
- (void)_configureSizingCellForItemAtIndexPath:(id)arg1;
- (id)_getFilterTitleForEnum:(long long)arg1;
- (void)_toggleSortFilter;
- (void)_updateCurrentViewIfNeeded;
- (void)_updateLayout;
- (void)_updateNavigationBarPadding;
- (void)_updateWithMediaEntities:(id)arg1 mediaEntitiesChangeSet:(id)arg2 grouping:(id)arg3 groupingChangeSet:(id)arg4;
- (double)cellWidth;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (id)currentNavBarButtonItem;
- (id)fetchRequest;
- (bool)forceBackButton;
- (id)genreGroupedResults;
- (long long)gridFilter;
- (id)initWithMediaLibrary:(id)arg1 fetchRequest:(id)arg2 displaySortFilter:(bool)arg3;
- (id)initWithMediaLibrary:(id)arg1 mediaEntities:(id)arg2 displaySortFilter:(bool)arg3;
- (id)libraryBarButton;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (bool)onlyShowLocalContent;
- (void)setCellWidth:(double)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setCurrentNavBarButtonItem:(id)arg1;
- (void)setFetchRequest:(id)arg1;
- (void)setForceBackButton:(bool)arg1;
- (void)setGenreGroupedResults:(id)arg1;
- (void)setGridFilter:(long long)arg1;
- (void)setLibraryBarButton:(id)arg1;
- (void)setOnlyShowLocalContent:(bool)arg1;
- (void)setSizingCell:(id)arg1;
- (void)setTitle:(id)arg1 withLargeTitleDisplayEnabled:(bool)arg2;
- (void)setTotalResults:(id)arg1;
- (id)sizingCell;
- (id)totalResults;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateWithLatestMediaEntities:(id)arg1 andChangeSet:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
