/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDocumentPickerPresentationController : NSObject <HKHealthPrivacyHostDocumentPickerViewControllerDelegate, _HKDocumentPickerPresentationController> {
    bool  _didPresent;
    HKHealthPrivacyHostDocumentPickerViewController * _hostViewController;
    _UIAsyncInvocation * _requestCancellationInvocation;
    UIWindow * _savedKeyWindow;
    UIWindow * _window;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didPresent;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKHealthPrivacyHostDocumentPickerViewController *hostViewController;
@property (nonatomic, retain) _UIAsyncInvocation *requestCancellationInvocation;
@property (nonatomic, retain) UIWindow *savedKeyWindow;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (void)_didFinishDismissing;
- (void)_dismissViewControllerAnimated:(bool)arg1;
- (void)_presentRemoteViewController:(id)arg1;
- (void)_presentWithPromptSession:(id)arg1 completion:(id /* block */)arg2;
- (void)_requestAndConfigureHostViewController:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)cancelPresentation;
- (void)dealloc;
- (bool)didPresent;
- (void)healthPrivacyHostDocumentPickerViewController:(id)arg1 didFinishWithError:(id)arg2;
- (id)hostViewController;
- (void)presentWithSession:(id)arg1 completion:(id /* block */)arg2;
- (id)requestCancellationInvocation;
- (id)savedKeyWindow;
- (void)setDidPresent:(bool)arg1;
- (void)setHostViewController:(id)arg1;
- (void)setRequestCancellationInvocation:(id)arg1;
- (void)setSavedKeyWindow:(id)arg1;
- (void)setWindow:(id)arg1;
- (id)window;

@end