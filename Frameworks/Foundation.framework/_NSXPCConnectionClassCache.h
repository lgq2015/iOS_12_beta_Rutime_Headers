/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSXPCConnectionClassCache : NSObject {
    NSMutableSet * _cache;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
}

- (void)addClass:(Class)arg1;
- (void)clear;
- (bool)containsClass:(Class)arg1;
- (void)dealloc;
- (id)init;

@end
