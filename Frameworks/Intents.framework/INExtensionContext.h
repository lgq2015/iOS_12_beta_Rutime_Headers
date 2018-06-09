/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INExtensionContext : NSExtensionContext <INExtensionContextVending> {
    id  _activeHandlerForIntent;
    <INIntentHandlerProvidingPrivate> * _extensionHandler;
    bool  _isPrivateExtension;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) <INIntentHandlerProvidingPrivate> *_extensionHandler;
@property (retain) id activeHandlerForIntent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_beginTransactionWithIntentIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_cancelTransactionDueToTimeoutWithIntentIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_completeTransactionWithIntentIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_deliverIntent:(id)arg1 withBlock:(id /* block */)arg2;
- (id)_extensionHandler;
- (void)_getApplicationContextWithCompletion:(id /* block */)arg1;
- (void)_processIntentResponse:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)_processIntentResponseCompletionHandlerWithCompletion:(id /* block */)arg1;
- (id /* block */)_processResolutionDataProviderForIntent:(id)arg1 intentSlotDescription:(id)arg2 updateIntent:(bool)arg3 completion:(id /* block */)arg4;
- (oneway void)_resolveIntentSlot:(id)arg1 forIntent:(id)arg2 updateIntent:(bool)arg3 withCompletion:(id /* block */)arg4;
- (void)_startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2;
- (void)_stopSendingUpdatesForIntent:(id)arg1;
- (bool)_updateIntent:(id)arg1 intentSlotDescription:(id)arg2 resolutionResultDataProvider:(id)arg3;
- (void)_validateExtension;
- (id)activeHandlerForIntent;
- (oneway void)beginTransactionWithIntentIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)cancelTransactionDueToTimeout;
- (oneway void)cancelTransactionDueToTimeoutWithIntentIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)completeTransaction;
- (oneway void)completeTransactionWithIntentIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)confirmIntent:(id)arg1 withCompletion:(id /* block */)arg2;
- (oneway void)confirmationResponseForIntent:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)getApplicationContextWithCompletion:(id /* block */)arg1;
- (oneway void)handleIntent:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)handleIntent:(id)arg1 completionHandler:(id /* block */)arg2;
- (oneway void)handleIntent:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithInputItems:(id)arg1 extension:(id)arg2;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (id)initWithInputItems:(id)arg1 privateIntentHandlerProvider:(id)arg2;
- (oneway void)resolveIntentSlot:(id)arg1 forIntent:(id)arg2 completionBlock:(id /* block */)arg3;
- (oneway void)resolveIntentSlots:(id)arg1 forIntent:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)setActiveHandlerForIntent:(id)arg1;
- (oneway void)startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2;
- (oneway void)stopSendingUpdatesForIntent:(id)arg1;

@end