/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
 */

@interface FLFollowUpActionHandler : FLHeadlessActionHandler <FLExtensionHostContextInterface> {
    id /* block */  _completionHandler;
    FLViewExtensionLoader * _extensionLoader;
    id /* block */  _extensionRequestedViewControllerPresentation;
    UIViewController * _remoteViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ extensionRequestedViewControllerPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_extensionLoader;
- (void)extensionDidFinish;
- (void)extensionDidFinishWithError:(id)arg1;
- (id /* block */)extensionRequestedViewControllerPresentation;
- (void)handleExtensionBasedAction:(id)arg1 completion:(id /* block */)arg2;
- (void)setExtensionRequestedViewControllerPresentation:(id /* block */)arg1;

@end