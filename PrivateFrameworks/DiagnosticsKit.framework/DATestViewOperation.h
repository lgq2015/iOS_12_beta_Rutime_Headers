/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DATestViewOperation : NSOperation {
    bool  _cancelled;
    <DATestViewOperationDelegate> * _delegate;
    bool  _executing;
    bool  _finished;
    NSDictionary * _parameters;
    NSDictionary * _predicates;
    NSDictionary * _specifications;
    DKMutableDiagnosticResult * _testResult;
    UIViewController * _viewController;
    DATestViewController * _weakViewController;
}

@property (nonatomic) <DATestViewOperationDelegate> *delegate;
@property (nonatomic, retain) NSDictionary *parameters;
@property (nonatomic, retain) NSDictionary *predicates;
@property (nonatomic, retain) NSDictionary *specifications;
@property (nonatomic, retain) DKMutableDiagnosticResult *testResult;
@property (nonatomic, retain) UIViewController *viewController;
@property (nonatomic) DATestViewController *weakViewController;

- (void).cxx_destruct;
- (void)_cancel;
- (void)_finish;
- (void)cancel;
- (id)delegate;
- (void)finish;
- (bool)isAsynchronous;
- (bool)isCancelled;
- (bool)isExecuting;
- (bool)isFinished;
- (id)parameters;
- (id)predicates;
- (void)setDelegate:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setPredicates:(id)arg1;
- (void)setSpecifications:(id)arg1;
- (void)setTestResult:(id)arg1;
- (void)setViewController:(id)arg1;
- (void)setWeakViewController:(id)arg1;
- (id)specifications;
- (void)start;
- (id)testResult;
- (id)viewController;
- (id)weakViewController;

@end