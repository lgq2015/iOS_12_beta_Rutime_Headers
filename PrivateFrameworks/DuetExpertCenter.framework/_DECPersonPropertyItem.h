/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECPersonPropertyItem : _DECPersonItem {
    NSString * _firstName;
    NSData * _imageData;
    NSString * _label;
    NSString * _lastName;
    NSString * _localizedFullName;
    NSString * _source;
    NSString * _value;
}

@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSString *localizedFullName;
@property (nonatomic, readonly) NSString *source;
@property (nonatomic, readonly) NSString *value;

+ (id)personPropertyWithContactIdentifier:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 localizedFullName:(id)arg4 label:(id)arg5 value:(id)arg6 source:(id)arg7 imageData:(id)arg8;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEqualToDECPersonPropertyItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (unsigned long long)hash;
- (id)imageData;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 localizedFullName:(id)arg4 label:(id)arg5 value:(id)arg6 source:(id)arg7 imageData:(id)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)label;
- (id)lastName;
- (id)localizedFullName;
- (id)source;
- (id)value;

@end