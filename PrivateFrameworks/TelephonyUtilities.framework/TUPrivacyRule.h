/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUPrivacyRule : NSObject <NSCoding> {
    NSString * _email;
    TUPhoneNumber * _phoneNumber;
    int  _type;
}

@property (nonatomic, readonly) NSString *email;
@property (nonatomic, readonly) TUPhoneNumber *phoneNumber;
@property (nonatomic, readonly) int type;

+ (id)ruleForEmail:(id)arg1;
+ (id)ruleForPhoneNumber:(id)arg1;

- (void).cxx_destruct;
- (id)email;
- (void)encodeWithCoder:(id)arg1;
- (id)initForEmail:(id)arg1;
- (id)initForPhoneNumber:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)phoneNumber;
- (int)type;

@end
