/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFLActionImplementation : NSObject {
    WFLAction * _action;
    id /* block */  _completionHandler;
    long long  _executionContext;
    NSArray * _input;
    NSArray * _output;
    NSProgress * _progress;
    <WFLActionUserInterface> * _userInterface;
}

@property (nonatomic, readonly) WFLAction *action;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) long long executionContext;
@property (nonatomic, readonly) NSArray *input;
@property (nonatomic, retain) NSArray *output;
@property (nonatomic, readonly) NSProgress *progress;
@property (nonatomic, readonly) <WFLActionUserInterface> *userInterface;

+ (void)initialize;
+ (id)userCancelledError;

- (void).cxx_destruct;
- (id)action;
- (void)cancelRunning;
- (id /* block */)completionHandler;
- (long long)executionContext;
- (void)finishRunningWithError:(id)arg1;
- (id)input;
- (id)output;
- (id)progress;
- (void)run;
- (void)runAction:(id)arg1 withInput:(id)arg2 userInterface:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setExecutionContext:(long long)arg1;
- (void)setOutput:(id)arg1;
- (id)userInterface;

@end