/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarDismisser : NSObject {
    id /* block */  _dismissBlock;
    bool  _enabled;
}

@property (nonatomic, copy) id /* block */ dismissBlock;
@property (getter=isEnabled, nonatomic) bool enabled;

- (void).cxx_destruct;
- (id /* block */)dismissBlock;
- (id)initWithStatusBar:(id)arg1;
- (void)invalidate;
- (bool)isEnabled;
- (void)setDismissBlock:(id /* block */)arg1;
- (void)setEnabled:(bool)arg1;

@end
