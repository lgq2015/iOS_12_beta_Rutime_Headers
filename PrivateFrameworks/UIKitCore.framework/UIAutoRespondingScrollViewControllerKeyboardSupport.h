/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIAutoRespondingScrollViewControllerKeyboardSupport : NSObject {
    double  _adjustmentForKeyboard;
    unsigned int  _registeredForNotifications;
    UIViewController<_UIKeyboardAutoRespondingScrollViewController> * _viewController;
    unsigned int  _viewIsDisappearing;
}

@property (nonatomic) double adjustmentForKeyboard;
@property (nonatomic) bool registeredForNotifications;
@property (nonatomic) bool viewIsDisappearing;

- (void).cxx_destruct;
- (void)_adjustScrollViewForKeyboardInfo:(id)arg1;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardDidShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (double)adjustmentForKeyboard;
- (id)initWithViewController:(id)arg1;
- (bool)registeredForNotifications;
- (void)setAdjustmentForKeyboard:(double)arg1;
- (void)setRegisteredForNotifications:(bool)arg1;
- (void)setViewIsDisappearing:(bool)arg1;
- (bool)viewIsDisappearing;

@end