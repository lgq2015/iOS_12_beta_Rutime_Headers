/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAClassRegistry : NSObject {
    NSMutableDictionary * _classesByAceClassNameByGroupIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (getter=_classesByAceClassNameByGroupIdentifier, nonatomic, readonly) NSMutableDictionary *classesByAceClassNameByGroupIdentifier;
@property (getter=_queue, nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedClassRegistry;

- (void)_accessMutableStateWithBlock:(id /* block */)arg1;
- (id)_classesByAceClassNameByGroupIdentifier;
- (id)_queue;
- (Class)classForAceClassWithName:(id)arg1 inGroupWithIdentifier:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)registerClass:(Class)arg1 forAceClassWithName:(id)arg2 inGroupWithIdentifier:(id)arg3;

@end
