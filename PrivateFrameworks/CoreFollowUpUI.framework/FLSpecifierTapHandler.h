/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
 */

@interface FLSpecifierTapHandler : NSObject {
    <FLSpecifierTapHandlerDelegate> * _delegate;
}

@property (nonatomic) <FLSpecifierTapHandlerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_handleActionForItem:(id)arg1 fromSpecifier:(id)arg2 eventSource:(unsigned long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)actionTapped:(id)arg1 eventSource:(unsigned long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)startSpinnerForSpecifier:(id)arg1;
- (void)stopSpinnerForSpecifier:(id)arg1;

@end
