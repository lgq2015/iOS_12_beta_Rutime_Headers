/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPageViewController : UIPageViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate> {
    unsigned long long  _currentPageIndex;
    long long  _currentPageIndexForAppliedParallaxEffect;
    <UIPageViewControllerDelegate> * _definedDelegate;
    <QLPageViewControllerDataSource> * _indexedDataSource;
    double  _interPageSpacing;
    bool  _isTransitioning;
    unsigned long long  _nextPageIndex;
    bool  _pageClipsToBounds;
    QLDelegateProxy * _pageViewControllerDelegateProxy;
    NSMapTable * _pages;
    double  _parallaxIntensity;
    UIScrollView * _scrollView;
    <UIScrollViewDelegate> * _scrollViewDelegate;
    QLDelegateProxy * _scrollViewDelegateProxy;
    struct CGPoint { 
        double x; 
        double y; 
    }  _scrollingStartOffset;
}

@property (nonatomic, readonly) UIViewController *currentPage;
@property (nonatomic) unsigned long long currentPageIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <QLPageViewControllerDataSource> *indexedDataSource;
@property (nonatomic) double parallaxIntensity;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic) <UIScrollViewDelegate> *scrollViewDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyParallaxEffectWithTransitionProgress:(double)arg1;
- (id)_cachedViewControllerAtIndex:(unsigned long long)arg1 offset:(long long)arg2;
- (unsigned long long)_indexOfViewController:(id)arg1;
- (void)_loadAndCacheViewControllersBeforeAndAfterIndex:(long long)arg1;
- (void)_rearrangeCachedViewControllersWithNewCurrentPageIndex:(long long)arg1;
- (id)_retrieveAndStoreViewControllerAtIndex:(unsigned long long)arg1 offset:(unsigned long long)arg2;
- (void)_setCurrentPageIndex:(unsigned long long)arg1 direction:(long long)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)_setUp;
- (void)_setViewControllers:(id)arg1 direction:(long long)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)_unsetParallaxEffect;
- (id)_viewControllerAtIndex:(unsigned long long)arg1 offset:(long long)arg2;
- (void)clearInternalCache;
- (id)currentPage;
- (unsigned long long)currentPageIndex;
- (id)delegate;
- (id)indexedDataSource;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransitionStyle:(long long)arg1 navigationOrientation:(long long)arg2 options:(id)arg3;
- (void)pageViewController:(id)arg1 didFinishAnimating:(bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (double)parallaxIntensity;
- (id)scrollView;
- (id)scrollViewDelegate;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setCurrentPageIndex:(unsigned long long)arg1;
- (void)setCurrentPageIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIndexedDataSource:(id)arg1;
- (void)setParallaxIntensity:(double)arg1;
- (void)setScrollViewDelegate:(id)arg1;
- (void)setViewControllers:(id)arg1 direction:(long long)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)viewWillAppear:(bool)arg1;

@end