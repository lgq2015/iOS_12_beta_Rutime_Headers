/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSharingProgressController : NSObject {
    UIAlertController * _alertController;
    id /* block */  _cancellationHandler;
    UIView * _containerView;
    bool  _didHide;
    bool  _didShow;
    UIView * _dimmingView;
    NSProgress * _progress;
    UIView * _progressContainerView;
    PXSharingProgressViewController * _progressViewController;
    NSString * _title;
    double  _whenDidShow;
}

@property (nonatomic, copy) id /* block */ cancellationHandler;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)_newProgressContainerView;
- (void)_updateFractionCompletedFromProgress;
- (id /* block */)cancellationHandler;
- (void)dealloc;
- (void)hideAnimated:(bool)arg1 allowDelay:(bool)arg2;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)progress;
- (void)setCancellationHandler:(id /* block */)arg1;
- (void)setProgress:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)showAnimated:(bool)arg1 allowDelay:(bool)arg2;
- (id)title;

@end