/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFPrintController : NSObject {
    UIPrintInfo * _cachedPrintInfo;
    WBUPrintPageRenderer * _cachedPrintPageRenderer;
    SFPrintQueueItem * _currentItem;
    <_SFPrintControllerDelegate> * _delegate;
    <_SFDialogPresenting> * _dialogPresenter;
    NSString * _loadingDialogTitle;
    NSString * _pageTitle;
    UIPrintInteractionController * _printInteractionController;
    NSMutableArray * _printQueue;
    _SFReaderController * _readerController;
    bool  _suppressingPrintUI;
    NSString * _urlString;
    UIViewController * _viewControllerForPresentation;
    WKWebView * _webView;
}

@property (nonatomic) <_SFPrintControllerDelegate> *delegate;
@property (nonatomic) <_SFDialogPresenting> *dialogPresenter;
@property (nonatomic, readonly) UIPrintInfo *printInfo;
@property (nonatomic, readonly) WBUPrintPageRenderer *printRenderer;
@property (nonatomic) _SFReaderController *readerController;
@property (nonatomic) UIViewController *viewControllerForPresentation;
@property (nonatomic) WKWebView *webView;

- (void).cxx_destruct;
- (id)_dequeuePrintItem;
- (void)_didFinishPrintingCurrentItemWithResult:(long long)arg1 fromPrintInteractionControllerCompletion:(bool)arg2;
- (void)_enqueuePrintItem:(id)arg1;
- (void)_preparePrintInteractionControllerForUsage:(long long)arg1 onlyIfLoaded:(bool)arg2 completion:(id /* block */)arg3;
- (void)_printCurrentItem;
- (void)_shouldAllowBlockedPrintWithCompletionHandler:(id /* block */)arg1;
- (void)_shouldPrintWhileLoadingForUsage:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)clearQueue;
- (void)dealloc;
- (id)delegate;
- (id)dialogPresenter;
- (void)handleNextPrintRequest;
- (id)init;
- (void)preparePrintInteractionControllerForUsage:(long long)arg1 completion:(id /* block */)arg2;
- (void)printFrame:(id)arg1 initiatedByWebContent:(bool)arg2 completion:(id /* block */)arg3;
- (id)printInfo;
- (void)printInteractionControllerDidFinish;
- (id)printRenderer;
- (id)readerController;
- (bool)reservePrintInteractionController;
- (void)resetPrintUISuppression;
- (void)setDelegate:(id)arg1;
- (void)setDialogPresenter:(id)arg1;
- (void)setReaderController:(id)arg1;
- (void)setViewControllerForPresentation:(id)arg1;
- (void)setWebView:(id)arg1;
- (void)updatePrintInfo;
- (id)viewControllerForPresentation;
- (id)webView;

@end