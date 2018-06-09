/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAPaymentSummaryRequest : AAAppleIDSettingsRequest {
    NSString * _heartbeatToken;
    NSString * _secondaryAuthToken;
}

@property (nonatomic, copy) NSString *heartbeatToken;
@property (nonatomic, copy) NSString *secondaryAuthToken;

+ (Class)responseClass;

- (void).cxx_destruct;
- (bool)forceGSToken;
- (id)heartbeatToken;
- (id)secondaryAuthToken;
- (void)setHeartbeatToken:(id)arg1;
- (void)setSecondaryAuthToken:(id)arg1;
- (id)urlRequest;
- (id)urlString;

@end