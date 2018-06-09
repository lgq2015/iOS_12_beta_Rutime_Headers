/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicJSNativeViewEventRegistry : IKJSObject <MusicJSNativeViewEventRegistry> {
    NSMapTable * _accessBlockQueuesMap;
    NSMutableDictionary * _eventListenersMap;
    NSMapTable * _eventRequestQueuesMap;
    NSMutableSet * _viewControllersBeingRegistered;
}

- (void).cxx_destruct;
- (id)_descriptionForNativeViewEventType:(long long)arg1;
- (void)_dispatchNativeViewEventOfType:(long long)arg1 withExtraInfo:(id)arg2 forJSNativeViewController:(id)arg3 appContext:(id)arg4 jsContext:(id)arg5 completion:(id /* block */)arg6;
- (id)_existingRegisteredJSNativeViewControllerForViewController:(id)arg1;
- (void)_flushAccessBlockQueue:(id)arg1 forViewController:(id)arg2;
- (void)_flushNativeViewEventRequestQueue:(id)arg1 forViewController:(id)arg2;
- (unsigned long long)_indexOfEventListener:(id)arg1 forNativeViewIdentifier:(id)arg2 eventType:(id)arg3 returningContainerMutableArray:(id*)arg4;
- (id)_keyForNativeViewIdentifier:(id)arg1 eventType:(id)arg2;
- (void)_registerViewController:(id)arg1 withExistingJSNativeViewController:(id)arg2;
- (bool)_shouldUseInternalEventRegistryListenersToDispatchNativeViewEventOfType:(long long)arg1;
- (void)addNativeViewAppearanceListener:(id)arg1 :(id)arg2 :(id)arg3;
- (void)dispatchNativeViewEventOfType:(long long)arg1 forViewController:(id)arg2;
- (void)dispatchNativeViewEventOfType:(long long)arg1 withExtraInfo:(id)arg2 forViewController:(id)arg3 completion:(id /* block */)arg4;
- (void)registerExistingJSNativeViewController:(id)arg1 forViewController:(id)arg2;
- (void)removeNativeViewAppearanceListener:(id)arg1 :(id)arg2 :(id)arg3;
- (void)requestAccessToJSNativeViewControllerForViewController:(id)arg1 usingBlock:(id /* block */)arg2;

@end