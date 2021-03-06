/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGadgetDataSourceManager : PXSectionedDataSourceManager <PXGadgetDelegate, PXGadgetProviderDelegate> {
    NSArray * _cachedProviders;
    bool  _loadingInitialGadgets;
    NSObject<OS_dispatch_queue> * _lookupQueue;
    NSMutableArray * _lookupQueue_loadedProviders;
    bool  _needsToLoadAllProviders;
    <PXGadgetDelegate> * _nextGadgetResponder;
}

@property (nonatomic, copy) NSArray *cachedProviders;
@property (nonatomic, readonly) PXGadgetDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_os_log> *gadgetDataSourceManagerLog;
@property (nonatomic, readonly) NSArray *gadgetProviders;
@property (nonatomic, readonly) id /* block */ gadgetSortComparator;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool loadingInitialGadgets;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *lookupQueue;
@property (nonatomic, retain) NSMutableArray *lookupQueue_loadedProviders;
@property (nonatomic) bool needsToLoadAllProviders;
@property (nonatomic) <PXGadgetDelegate> *nextGadgetResponder;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dataSourceSnapshot;
- (void)_loadDataFromProviders:(id)arg1 withGadgetMinimum:(unsigned long long)arg2;
- (id)_sortedGadgets;
- (void)_updateDataSource;
- (id)allGadgets;
- (void)beginLoadingInitialGadgets:(unsigned long long)arg1;
- (id)cachedProviders;
- (id)createInitialDataSource;
- (id)filteredUndisplayedGadgets:(id)arg1;
- (void)gadget:(id)arg1 animateChanges:(id /* block */)arg2;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (bool)gadget:(id)arg1 transitionToViewController:(struct NSObject { Class x1; }*)arg2 animated:(bool)arg3;
- (id)gadgetDataSourceManagerLog;
- (id)gadgetProviders;
- (id /* block */)gadgetSortComparator;
- (struct NSObject { Class x1; }*)gadgetViewControllerHostingGadget:(id)arg1;
- (id)gridPresentation;
- (id)init;
- (id)initWithQueueName:(id)arg1;
- (void)invalidateGadgets;
- (void)loadRemainingGadgetsIfNeeded;
- (void)loadRemainingGadgetsIfNeededWithGenerateGadgetFinishedBlock:(id /* block */)arg1;
- (bool)loadingInitialGadgets;
- (id)lookupQueue;
- (id)lookupQueue_loadedProviders;
- (bool)needsToLoadAllProviders;
- (id)nextGadgetResponder;
- (id)noContentGadget;
- (id)oneUpPresentation;
- (void)removeCachedProviders;
- (bool)scrollGadgetToVisible:(id)arg1 animated:(bool)arg2;
- (void)setCachedProviders:(id)arg1;
- (void)setLoadingInitialGadgets:(bool)arg1;
- (void)setLookupQueue:(id)arg1;
- (void)setLookupQueue_loadedProviders:(id)arg1;
- (void)setNeedsToLoadAllProviders:(bool)arg1;
- (void)setNextGadgetResponder:(id)arg1;

@end
