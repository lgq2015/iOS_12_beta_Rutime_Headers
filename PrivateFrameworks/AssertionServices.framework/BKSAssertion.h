/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSAssertion : NSObject {
    bool  _acquired;
    id /* block */  _acquisitionHandler;
    <BKSAssertionClientProtocol> * _client;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSString * _identifier;
    id /* block */  _invalidationHandler;
    BSSignal * _invalidationSignal;
    NSString * _name;
}

@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) bool valid;

- (id)_clientQueue;
- (bool)_clientQueue_acquireAssertion;
- (bool)_clientQueue_acquired;
- (id)_clientQueue_client;
- (id)_clientQueue_createEvent;
- (id)_clientQueue_destroyEvent;
- (id)_clientQueue_identifier;
- (void)_clientQueue_invalidate:(bool)arg1;
- (id)_clientQueue_name;
- (void)_clientQueue_updateAssertion;
- (id)_clientQueue_updateEvent;
- (id)_initWithClient:(id)arg1;
- (id)_initWithClient:(id)arg1 name:(id)arg2;
- (id)_initWithClient:(id)arg1 name:(id)arg2 handler:(id /* block */)arg3;
- (void)_registerAssertionAndAcquire:(bool)arg1;
- (bool)acquire;
- (void)assertionDidInvalidate;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)name;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setName:(id)arg1;
- (bool)valid;

@end