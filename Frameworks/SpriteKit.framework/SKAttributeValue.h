/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKAttributeValue : NSObject <NSSecureCoding> {
    long long  _type;
    float  floatValues;
    unsigned short  halfFloatValues;
}

@property (nonatomic) float floatValue;
@property (nonatomic, readonly) long long type;
@property (nonatomic) void vectorFloat2Value;
@property (nonatomic) void vectorFloat3Value;
@property (nonatomic) void vectorFloat4Value;

+ (bool)supportsSecureCoding;
+ (id)valueWithFloat:(float)arg1;
+ (id)valueWithVectorFloat2;
+ (id)valueWithVectorFloat3;
+ (id)valueWithVectorFloat4;

- (bool)copyValueTo:(void*)arg1 type:(long long)arg2 count:(unsigned int)arg3;
- (void)encodeWithCoder:(id)arg1;
- (float)floatValue;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToAttributeValue:(id)arg1;
- (void)setFloatValue:(float)arg1;
- (void)setVectorFloat2Value;
- (void)setVectorFloat3Value;
- (void)setVectorFloat4Value;
- (long long)type;
- (void)vectorFloat2Value;
- (void)vectorFloat3Value;
- (void)vectorFloat4Value;

@end