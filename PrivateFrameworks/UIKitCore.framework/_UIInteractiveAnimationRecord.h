/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIInteractiveAnimationRecord : NSObject <UIInteractionProgressObserver> {
    NSUUID * _UUID;
    bool  _completed;
    NSMapTable * _pausedTimes;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (getter=isCompleted, nonatomic) bool completed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMapTable *pausedTimes;
@property (readonly) Class superclass;

+ (void)discardRecord:(id)arg1;
+ (void)saveRecord:(id)arg1;

- (void).cxx_destruct;
- (id)UUID;
- (id)init;
- (id)initWithUUID:(id)arg1;
- (void)interactionProgress:(id)arg1 didEnd:(bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (bool)isCompleted;
- (id)pausedTimes;
- (void)setCompleted:(bool)arg1;

@end