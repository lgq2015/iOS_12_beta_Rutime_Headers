/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RapportUI.framework/RapportUI
 */

@interface RPPairingManagerUIController : NSObject {
    bool  _allowManualIP;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _invalidationHandler;
    UIViewController * _presentingViewController;
    bool  _runInProcess;
    NSString * _serviceType;
}

@property (nonatomic) bool allowManualIP;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (nonatomic) bool runInProcess;
@property (nonatomic, copy) NSString *serviceType;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)activate;
- (bool)allowManualIP;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)presentingViewController;
- (bool)runInProcess;
- (id)serviceType;
- (void)setAllowManualIP:(bool)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setRunInProcess:(bool)arg1;
- (void)setServiceType:(id)arg1;

@end