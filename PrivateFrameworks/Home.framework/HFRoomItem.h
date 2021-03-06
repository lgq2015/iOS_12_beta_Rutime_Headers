/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFRoomItem : HFItem <HFHomeKitItemProtocol> {
    HMHome * _home;
    HMRoom * _room;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) HMRoom *room;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)description;
- (id)home;
- (id)homeKitObject;
- (id)init;
- (id)initWithHome:(id)arg1 room:(id)arg2;
- (id)room;
- (id)togglePowerState;

@end
