/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

@interface NFContainerRegistry : NSObject <NFContainerRegistry> {
    <NFCallbackRegistration> * _callback;
    <NFRegistrationContainer> * _privateContainer;
    <NFRegistrationContainer> * _publicContainer;
}

@property (nonatomic, readonly) <NFCallbackRegistration> *callback;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NFRegistrationContainer> *privateContainer;
@property (nonatomic, readonly) <NFRegistrationContainer> *publicContainer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)callback;
- (id)initWithPublicContainer:(id)arg1 privateContainer:(id)arg2 callback:(id)arg3;
- (id)privateContainer;
- (id)publicContainer;

@end
