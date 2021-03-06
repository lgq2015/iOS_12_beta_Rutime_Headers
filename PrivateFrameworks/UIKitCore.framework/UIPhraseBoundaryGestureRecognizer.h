/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer {
    double  _secondDelay;
    bool  _secondDelayElapsed;
    UIDelayedAction * _secondDelayTimer;
    UIResponder<UITextInput> * _textInput;
    id  _userData;
}

@property (nonatomic) double secondDelay;
@property (nonatomic, readonly) bool secondDelayElapsed;
@property (nonatomic) UIResponder<UITextInput> *textInput;
@property (nonatomic) id userData;

- (void).cxx_destruct;
- (void)_resetGestureRecognizer;
- (void)clearTimer;
- (double)secondDelay;
- (bool)secondDelayElapsed;
- (void)secondDelayElapsed:(id)arg1;
- (void)setSecondDelay:(double)arg1;
- (void)setState:(long long)arg1;
- (void)setTextInput:(id)arg1;
- (void)setUserData:(id)arg1;
- (void)startTimer;
- (id)textInput;
- (id)userData;

@end
