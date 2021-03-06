/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMessagesRecentPhotosGadgetProvider : PXGadgetProvider {
    double  _preferredHeight;
    UIViewController<PXPhotoLibraryPresenting> * _recentPhotosViewController;
}

@property (nonatomic) double preferredHeight;
@property (nonatomic, retain) UIViewController<PXPhotoLibraryPresenting> *recentPhotosViewController;

- (void).cxx_destruct;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (void)loadDataForGadgets;
- (double)preferredHeight;
- (id)recentPhotosViewController;
- (void)setPreferredHeight:(double)arg1;
- (void)setRecentPhotosViewController:(id)arg1;

@end
