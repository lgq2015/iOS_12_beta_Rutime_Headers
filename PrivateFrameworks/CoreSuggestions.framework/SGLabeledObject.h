/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGLabeledObject : SGObject {
    unsigned long long  _extractionType;
    NSString * _label;
}

@property (nonatomic, readonly) unsigned long long extractionType;
@property (nonatomic, readonly) NSString *label;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)extractionType;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 extractionType:(unsigned long long)arg2 recordId:(id)arg3;
- (id)initWithLabel:(id)arg1 extractionType:(unsigned long long)arg2 recordId:(id)arg3 origin:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLabeledObject:(id)arg1;
- (id)label;
- (id)localizedLabel;

@end
