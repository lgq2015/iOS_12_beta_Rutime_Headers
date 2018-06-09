/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSURLAction : NSObject {
    long long  _actionType;
    NSError * _error;
    NSURL * _redirectURL;
}

@property (nonatomic) long long actionType;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSURL *redirectURL;

+ (id)actionWithError:(id)arg1;
+ (id)redirectActionWithURL:(id)arg1;
+ (id)retryAction;

- (void).cxx_destruct;
- (long long)actionType;
- (id)description;
- (id)error;
- (id)initWithType:(long long)arg1;
- (id)redirectURL;
- (void)setActionType:(long long)arg1;
- (void)setError:(id)arg1;
- (void)setRedirectURL:(id)arg1;

@end