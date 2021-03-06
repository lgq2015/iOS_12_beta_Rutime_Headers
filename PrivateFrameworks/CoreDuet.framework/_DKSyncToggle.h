/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSyncToggle : NSObject {
    SEL  _disableSelector;
    SEL  _enableSelector;
    bool  _enabled;
    NSString * _name;
    NSObject * _object;
}

@property (nonatomic, readonly) SEL disableSelector;
@property (nonatomic, readonly) SEL enableSelector;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSObject *object;

+ (id)toggleWithObject:(id)arg1 name:(id)arg2 enableSelector:(SEL)arg3 disableSelector:(SEL)arg4;

- (void).cxx_destruct;
- (SEL)disableSelector;
- (SEL)enableSelector;
- (id)initWithObject:(id)arg1 name:(id)arg2 enableSelector:(SEL)arg3 disableSelector:(SEL)arg4;
- (bool)isEnabled;
- (id)name;
- (id)object;
- (void)setEnabled:(bool)arg1;

@end
