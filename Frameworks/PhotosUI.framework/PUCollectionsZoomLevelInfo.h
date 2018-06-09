/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCollectionsZoomLevelInfo : PUGridZoomLevelInfo <PUSectionedGridLayoutDelegate> {
    PHFetchResult * _collectionsFetchResult;
    NSMutableDictionary * _resultsForCollectionList;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_collectionsFetchResult;
- (void)_getDataForVisualSection:(long long)arg1 title:(id*)arg2 locations:(id*)arg3 startDate:(id*)arg4 endDate:(id*)arg5;
- (struct __CFString { }*)aggregateLevelKey;
- (id)assetsToDisplayInMapForVisualSection:(long long)arg1;
- (double)cellAspectRatioHint;
- (long long)cellFillMode;
- (void)configureSectionHeaderView:(id)arg1 forVisualSection:(long long)arg2;
- (id)diagnosticsProviderForVisualSection:(long long)arg1;
- (id)displayTitle;
- (void)getPhotosDataSource:(id*)arg1 displayTitleInfo:(id*)arg2 forDetailsForVisualSection:(long long)arg3;
- (long long)imageDeliveryMode;
- (struct CGSize { double x1; double x2; })imageRequestItemSize;
- (id)initWithZoomLevel:(unsigned long long)arg1 zoomLevelManager:(id)arg2 baseZoomLevelInfo:(id)arg3;
- (long long)maxRowsPerSection;
- (void)modelDidChange:(id)arg1;
- (id)momentsInCollectionList:(id)arg1;
- (id)newCollectionViewLayout;
- (long long)numberOfVisualSectionsForSectionedGridLayout:(id)arg1;
- (id)renderedStripsElementKind;
- (id)sectionHeaderElementKind;
- (double)sectionedGridLayout:(id)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2;
- (double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2;
- (id)sectionedGridLayout:(id)arg1 sectionsForVisualSection:(long long)arg2;
- (bool)supportsIncrementalChangeNotifications;
- (struct CGSize { double x1; double x2; })thumbnailImageSize;
- (void)updateLayoutMetricsForWidth:(double)arg1 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;

@end