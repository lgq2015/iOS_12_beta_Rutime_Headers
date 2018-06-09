/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSBackgroundTask : NSObject {
    BKSProcessAssertion * _assertion;
    <VSBackgroundTaskDelegate> * _delegate;
    NSString * _name;
}

@property (nonatomic, retain) BKSProcessAssertion *assertion;
@property (nonatomic) <VSBackgroundTaskDelegate> *delegate;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)assertion;
- (bool)begin;
- (id)delegate;
- (void)end;
- (id)init;
- (id)name;
- (void)setAssertion:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setName:(id)arg1;

@end