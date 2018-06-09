/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAFamilyEligibilityRequest : AAFamilyRequest {
    SSAccount * _iTunesAccount;
}

@property (nonatomic, retain) SSAccount *iTunesAccount;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)iTunesAccount;
- (void)setITunesAccount:(id)arg1;
- (id)urlRequest;
- (id)urlString;

@end