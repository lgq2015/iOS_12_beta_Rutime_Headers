/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISpringBoardHostedView : UIView {
    NSString * _remoteViewIdentifier;
    bool  _remoteViewOpaque;
    UIWindow * _remoteWindow;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)registerWithIdentifier:(id)arg1 andController:(id)arg2;
- (id)remoteViewIdentifier;
- (void)setRemoteViewOpaque:(bool)arg1;
- (void)unregister;

@end
