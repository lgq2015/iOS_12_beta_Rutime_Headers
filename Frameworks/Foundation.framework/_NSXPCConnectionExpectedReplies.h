/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSXPCConnectionExpectedReplies : NSObject {
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    struct __CFDictionary { } * _replyTable;
    unsigned long long  _sequence;
}

- (void)dealloc;
- (id)init;
- (id)progressForSequence:(unsigned long long)arg1;
- (void)removeProgressSequence:(unsigned long long)arg1;
- (unsigned long long)sequenceForProgress:(id)arg1;

@end
