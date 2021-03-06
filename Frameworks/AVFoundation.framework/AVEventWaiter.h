/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVEventWaiter : NSObject {
    NSCondition * _condition;
    bool  _eventCompleted;
}

- (void)dealloc;
- (id)init;
- (void)markEventAsCompleted;
- (void)waitUntilEventIsCompleted;

@end
