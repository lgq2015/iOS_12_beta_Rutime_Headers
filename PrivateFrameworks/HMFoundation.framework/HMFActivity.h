/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFActivity : HMFObject <HMFLogging, HMFObject> {
    unsigned long long  _assertions;
    NSUUID * _identifier;
    NSObject<OS_os_activity> * _internal;
    NSArray * _internalAssertions;
    HMFUnfairLock * _lock;
    NSString * _name;
    HMFActivity * _parent;
    NSDate * _startDate;
    struct os_activity_scope_state_s { unsigned long long x1[2]; } * _state;
    bool  _valid;
}

@property (readonly) unsigned long long assertions;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) NSArray *internalAssertions;
@property (readonly, copy) NSString *name;
@property (readonly) HMFActivity *parent;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) NSDate *startDate;
@property (readonly) Class superclass;
@property (getter=isValid, readonly) bool valid;

+ (void)activityWithName:(id)arg1 block:(id /* block */)arg2;
+ (void)activityWithName:(id)arg1 parent:(id)arg2 assertions:(unsigned long long)arg3 block:(id /* block */)arg4;
+ (void)activityWithName:(id)arg1 parent:(id)arg2 block:(id /* block */)arg3;
+ (id)assertionsForActivityAssertions:(unsigned long long)arg1 name:(id)arg2;
+ (id)bundleIdentifier;
+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (unsigned long long)assertions;
- (void)dealloc;
- (id)identifier;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 parent:(id)arg2;
- (id)initWithName:(id)arg1 parent:(id)arg2 assertions:(unsigned long long)arg3;
- (id)internalAssertions;
- (void)invalidate;
- (bool)isValid;
- (id)logIdentifier;
- (void)mark;
- (void)markWithFormat:(id)arg1;
- (void)markWithReason:(id)arg1;
- (id)name;
- (id)parent;
- (id)propertyDescription;
- (id)shortDescription;
- (id)startDate;

@end