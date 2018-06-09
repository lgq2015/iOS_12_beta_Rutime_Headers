/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFActionBuilder : HFItemBuilder

@property (nonatomic, readonly) HMAction *action;
@property (getter=isAffectedByEndEvents, nonatomic, readonly) bool affectedByEndEvents;
@property (nonatomic, readonly) bool requiresDeviceUnlock;

+ (id)actionBuilderForAction:(id)arg1 inHome:(id)arg2;
+ (Class)homeKitRepresentationClass;

- (id)action;
- (id)copyForCreatingNewAction;
- (id)createNewAction;
- (bool)isAffectedByEndEvents;
- (bool)requiresDeviceUnlock;
- (void)setAction:(id)arg1;
- (bool)updateWithActionBuilder:(id)arg1;

@end