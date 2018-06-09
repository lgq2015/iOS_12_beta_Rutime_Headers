/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKTermsPageViewController : UIViewController <UINavigationBarDelegate> {
    <SKTermsPageViewControllerDelegate> * _delegate;
    UINavigationBar * _navbar;
    NSString * _terms;
    UIToolbar * _toolbar;
    UIWebView * _webview;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKTermsPageViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_buttonAccept:(id)arg1;
- (void)_buttonDecline:(id)arg1;
- (void)_dismissViewController;
- (void)_dismissViewControllerAnimated:(bool)arg1;
- (void)_dismissViewControllerAnimated:(bool)arg1 withAcceptance:(bool)arg2;
- (void)_loadSubviews;
- (id)_markupTermsWithHTML:(id)arg1;
- (id)delegate;
- (unsigned long long)edgesForExtendedLayout;
- (id)init;
- (id)initWithTerms:(id)arg1;
- (void)loadView;
- (long long)positionForBar:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end