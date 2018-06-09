/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSBasicSceneAgent : NSObject <BSDescriptionProviding, FBSSceneAgent> {
    <FBSSceneHandle> * _scene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <FBSSceneHandle> *scene;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureWithScene:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didReceiveMessage:(id)arg1 fromCounterpartAgent:(id)arg2 withResponseSender:(id /* block */)arg3;
- (id)scene;
- (void)scene:(id)arg1 didInitializeWithEvent:(id)arg2 completion:(id /* block */)arg3;
- (void)scene:(id)arg1 handleEvent:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)scene:(id)arg1 reviewEvent:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)scene:(id)arg1 willInvalidateWithEvent:(id)arg2 completion:(id /* block */)arg3;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end