/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

@interface WFPasswordAlertController : UIAlertController {
    id /* block */  _completionHandler;
    UIAlertAction * _joinAction;
    bool  _joinable;
    NSString * _password;
    NSString * _sharedPassword;
    bool  _supportsWiFiPasswordSharing;
    id /* block */  _textHandler;
    id /* block */  _visibilityHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) UIAlertAction *joinAction;
@property (nonatomic) bool joinable;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSString *sharedPassword;
@property (nonatomic) bool supportsWiFiPasswordSharing;
@property (nonatomic, copy) id /* block */ textHandler;
@property (nonatomic, copy) id /* block */ visibilityHandler;

+ (id)passwordAlertControllerWithNetworkName:(id)arg1 details:(id)arg2 supportsWiFiPasswordSharing:(bool)arg3 textHandler:(id /* block */)arg4 visibilityHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (void)enterPassword:(id)arg1 joinAfterDelay:(double)arg2;
- (id)joinAction;
- (bool)joinable;
- (id)password;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setJoinAction:(id)arg1;
- (void)setJoinable:(bool)arg1;
- (void)setPassword:(id)arg1;
- (void)setSharedPassword:(id)arg1;
- (void)setSupportsWiFiPasswordSharing:(bool)arg1;
- (void)setTextHandler:(id /* block */)arg1;
- (void)setVisibilityHandler:(id /* block */)arg1;
- (id)sharedPassword;
- (bool)supportsWiFiPasswordSharing;
- (void)textDidChange:(id)arg1;
- (id /* block */)textHandler;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id /* block */)visibilityHandler;

@end