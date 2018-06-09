/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface LSExtensionPoint : _LSQueryResult <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    NSString * _name;
    NSDictionary * _sdkEntry;
    NSString * _version;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDictionary *sdkEntry;
@property (nonatomic, readonly) NSString *version;

+ (id)extensionPointForIdentifier:(id)arg1;
+ (id)identifierForCurrentProcess;
+ (bool)supportsSecureCoding;

- (id)_initWithIdentifier:(id)arg1 andData:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (id)sdkEntry;
- (id)version;

@end