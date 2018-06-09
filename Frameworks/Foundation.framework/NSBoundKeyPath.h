/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSBoundKeyPath : NSObject {
    NSString * _keyPath;
    id  _rootObject;
}

@property (readonly) NSString *keyPath;
@property id rootObject;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathWithRootObject:(id)arg1 path:(const char *)arg2;
+ (id)newKeyPathWithRootObject:(id)arg1 keyPathString:(id)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keyPath;
- (id)mutableArrayValue;
- (id)mutableOrderedSetValue;
- (id)mutableSetValue;
- (id)rootObject;
- (void)setRootObject:(id)arg1;
- (void)setValue:(id)arg1;
- (bool)validateValue:(inout id*)arg1 error:(out id*)arg2;
- (id)value;

@end