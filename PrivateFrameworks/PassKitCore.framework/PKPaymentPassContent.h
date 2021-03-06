/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentPassContent : PKPassContent <NSSecureCoding> {
    NSString * _appURLScheme;
    NSArray * _availableActions;
    NSString * _cobrandName;
    NSDictionary * _localizedSuspendedReasonsByAID;
    NSString * _messagePushTopic;
    NSURL * _messageServiceURL;
    bool  _supportsTransitOnly;
    NSString * _transactionPushTopic;
    NSURL * _transactionServiceURL;
}

@property (nonatomic, copy) NSString *appURLScheme;
@property (nonatomic, copy) NSArray *availableActions;
@property (nonatomic, copy) NSString *cobrandName;
@property (nonatomic, copy) NSDictionary *localizedSuspendedReasonsByAID;
@property (nonatomic, copy) NSString *messagePushTopic;
@property (nonatomic, copy) NSURL *messageServiceURL;
@property (nonatomic) bool supportsTransitOnly;
@property (nonatomic, copy) NSString *transactionPushTopic;
@property (nonatomic, copy) NSURL *transactionServiceURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appURLScheme;
- (id)availableActions;
- (id)cobrandName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2 privateBundle:(id)arg3;
- (id)localizedSuspendedReasonsByAID;
- (id)messagePushTopic;
- (id)messageServiceURL;
- (void)setAppURLScheme:(id)arg1;
- (void)setAvailableActions:(id)arg1;
- (void)setCobrandName:(id)arg1;
- (void)setLocalizedSuspendedReasonsByAID:(id)arg1;
- (void)setMessagePushTopic:(id)arg1;
- (void)setMessageServiceURL:(id)arg1;
- (void)setSupportsTransitOnly:(bool)arg1;
- (void)setTransactionPushTopic:(id)arg1;
- (void)setTransactionServiceURL:(id)arg1;
- (bool)supportsTransitOnly;
- (id)transactionPushTopic;
- (id)transactionServiceURL;

@end
