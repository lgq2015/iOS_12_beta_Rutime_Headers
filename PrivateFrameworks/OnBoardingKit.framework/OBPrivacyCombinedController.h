/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@interface OBPrivacyCombinedController : UIViewController {
    bool  _allowsOpeningSafari;
    bool  _darkMode;
    NSString * _displayLanguage;
    bool  _presentedFromPrivacyPane;
}

@property bool allowsOpeningSafari;
@property (getter=isDarkMode, nonatomic) bool darkMode;
@property (retain) NSString *displayLanguage;
@property bool presentedFromPrivacyPane;

+ (void)presentPrivacyCombinedControllerOverController:(id)arg1 dismissHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (bool)allowsOpeningSafari;
- (id)displayLanguage;
- (id)init;
- (id)initWithIdentifiers:(id)arg1;
- (bool)isDarkMode;
- (bool)presentedFromPrivacyPane;
- (void)setAllowsOpeningSafari:(bool)arg1;
- (void)setDarkMode:(bool)arg1;
- (void)setDisplayLanguage:(id)arg1;
- (void)setPresentedFromPrivacyPane:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;

@end
