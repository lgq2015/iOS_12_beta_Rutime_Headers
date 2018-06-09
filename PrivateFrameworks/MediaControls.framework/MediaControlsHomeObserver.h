/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsHomeObserver : NSObject <HFHomeManagerObserver, HFHomeObserver> {
    <MediaControlsHomeObserverDelegate> * _delegate;
    HMHomeManager * _homeManager;
    NSMutableSet * _knownUIDs;
    NSObject<OS_dispatch_queue> * _notifyQueue;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MediaControlsHomeObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notifyDelegate;
- (void)_updateUIDs;
- (void)beginObserving;
- (id)delegate;
- (bool)hasAccessoryWithUID:(id)arg1;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)stopObserving;

@end