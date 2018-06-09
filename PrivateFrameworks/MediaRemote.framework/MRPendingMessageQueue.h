/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRPendingMessageQueue : NSObject {
    unsigned long long  _lowPriorityMessagesCount;
    unsigned long long  _maxLowPriorityMessagesAllowed;
    NSMutableArray * _messages;
}

- (void).cxx_destruct;
- (void)_purge;
- (void)dealloc;
- (id)initWithMaxLowPriorityMessagesAllowed:(unsigned long long)arg1;
- (id)peek;
- (void)pop;
- (void)push:(id)arg1;

@end