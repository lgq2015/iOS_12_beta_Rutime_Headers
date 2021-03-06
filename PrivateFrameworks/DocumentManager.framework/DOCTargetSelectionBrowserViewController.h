/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

@interface DOCTargetSelectionBrowserViewController : UINavigationController <DOCAppearanceProtocol, DOCHostTargetSelectionBrowserViewControllerProxy> {
    DOCConfiguration * _configuration;
    NSArray * _items;
    DOCAppearance * _lastAppearance;
    UIViewController<DOCRemoteAppearanceInterface> * _localViewController;
    _UIResilientRemoteViewContainerViewController * _remoteViewController;
    <DOCServiceTargetSelectionBrowserViewControllerProxy> * _serviceProxy;
    <DOCTargetSelectionBrowserViewControllerDelegate> * _targetSelectionDelegate;
    NSArray * _urls;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <DOCTargetSelectionBrowserViewControllerDelegate> *targetSelectionDelegate;

- (void).cxx_destruct;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_dismissWithBlock:(id /* block */)arg1;
- (void)_updateNavigationBar;
- (void)cancelPresentation;
- (void)dismissViewController;
- (void)filesExportedAtURLs:(id)arg1;
- (id)initForExportingWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 items:(id)arg2;
- (id)initWithConfiguration:(id)arg1 urls:(id)arg2;
- (void)notifyDelegateOfCancellation;
- (id)remoteInterface;
- (id)remoteViewController;
- (void)setTargetSelectionDelegate:(id)arg1;
- (void)setURLs:(id)arg1;
- (id)targetSelectionDelegate;
- (void)updateAppearance:(id)arg1;
- (void)viewDidLoad;

@end
