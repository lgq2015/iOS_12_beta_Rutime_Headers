/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKRemoteUINavigationController : UINavigationController <GKBubbleFlowableViewController> {
    GKRemoteUIController * _remoteUIController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) GKRemoteUIController *remoteUIController;
@property (readonly) Class superclass;

- (bool)_gkCanBeRemovedFromParentWhenCovered;
- (bool)_gkUsesBubbleFlowModalPresentation;
- (void)dealloc;
- (id)initWithRemoteUIController:(id)arg1;
- (void)loadView;
- (id)remoteUIController;
- (unsigned long long)supportedInterfaceOrientations;

@end
