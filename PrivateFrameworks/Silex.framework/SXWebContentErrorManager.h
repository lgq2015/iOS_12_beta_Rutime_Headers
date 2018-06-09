/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXWebContentErrorManager : NSObject <SXWebContentErrorProvider, SXWebContentErrorReporting, SXWebContentMessageHandler> {
    id /* block */  _block;
    NSError * _error;
    <SXWebContentLogger> * _logger;
}

@property (setter=onError:, nonatomic, copy) id /* block */ block;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXWebContentLogger> *logger;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;
- (id)error;
- (id)initWithMessageHandlerManager:(id)arg1 timeoutManager:(id)arg2 logger:(id)arg3;
- (id)logger;
- (void)onError:(id /* block */)arg1;
- (void)reportError:(id)arg1;
- (void)simulateCrashForError:(id)arg1;

@end