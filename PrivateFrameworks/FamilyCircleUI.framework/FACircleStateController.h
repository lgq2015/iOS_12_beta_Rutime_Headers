/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FACircleStateController : NSObject <DevicePINControllerDelegate> {
    id /* block */  _performOperationCompletion;
    UIViewController * _presenter;
    FARequestConfigurator * _requestConfigurator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *presenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_contextRequiresRemoteService:(id)arg1;
- (void)_ensurePresenterWithCompletion:(id /* block */)arg1;
- (void)_performOperationWithContext:(id)arg1 viewController:(id)arg2 completion:(id /* block */)arg3;
- (void)_presentViewServiceWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_restrictionsPINCompletionWithSuccess:(bool)arg1;
- (void)didAcceptEnteredPIN;
- (void)didCancelEnteringPIN;
- (id)init;
- (id)initWithPresenter:(id)arg1;
- (void)performOperationWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)presenter;
- (void)setPresenter:(id)arg1;
- (void)showRestrictionsPINController;

@end
