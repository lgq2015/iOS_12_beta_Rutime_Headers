/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PDAssertion : NSObject {
    NSString * _identifier;
    bool  _invalidateWhenBackgrounded;
    NSString * _reason;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) bool invalidateWhenBackgrounded;
@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 reason:(id)arg3;
- (bool)invalidateWhenBackgrounded;
- (id)reason;
- (void)setInvalidateWhenBackgrounded:(bool)arg1;
- (unsigned long long)type;

@end
