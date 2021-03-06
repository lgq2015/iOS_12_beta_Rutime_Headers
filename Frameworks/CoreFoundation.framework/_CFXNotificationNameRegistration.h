/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface _CFXNotificationNameRegistration : _CFXNotificationRegistrationContainer {
    struct __CFString { } * _name;
}

@property (readonly) struct __CFString { }*name;

+ (Class)childClass;
+ (const struct { long long x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); }*)keyCallbacks;

- (id)acquireObject:(void*)arg1;
- (void)dealloc;
- (bool)enumerate:(id /* block */)arg1;
- (void)find:(void*)arg1 observer:(void*)arg2 matching:(struct { struct { id *x_1_1_1; unsigned long long x_1_1_2; bool x_1_1_3; } x1; struct { id *x_2_1_1; unsigned long long x_2_1_2; bool x_2_1_3; } x2; }*)arg3;
- (id)initWithName:(struct __CFString { }*)arg1 options:(unsigned long long)arg2 parent:(id)arg3;
- (void*)key;
- (void)match:(void*)arg1 observer:(void*)arg2 matching:(struct { struct { id *x_1_1_1; unsigned long long x_1_1_2; bool x_1_1_3; } x1; struct { id *x_2_1_1; unsigned long long x_2_1_2; bool x_2_1_3; } x2; }*)arg3;
- (struct __CFString { }*)name;

@end
