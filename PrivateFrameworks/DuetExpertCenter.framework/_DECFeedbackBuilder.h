/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECFeedbackBuilder : NSObject {
    id /* block */  _feedbackHandler;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)initWithFeedbackHandler:(id /* block */)arg1;
- (void)receiveFeedback:(id)arg1 result:(id)arg2 metadata:(id)arg3 engaged:(bool)arg4;

@end