/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterReport : NSObject <NSCopying, NSSecureCoding> {
    long long  _action;
    NEFilterFlow * _flow;
}

@property long long action;
@property (copy) NEFilterFlow *flow;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)action;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)flow;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFlow:(id)arg1 action:(long long)arg2;
- (void)setAction:(long long)arg1;
- (void)setFlow:(id)arg1;

@end