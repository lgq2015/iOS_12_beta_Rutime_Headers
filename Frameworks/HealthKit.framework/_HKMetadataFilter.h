/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKMetadataFilter : _HKFilter {
    NSString * _key;
    unsigned long long  _operatorType;
}

@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly) unsigned long long operatorType;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_acceptsOperatorType:(unsigned long long)arg1;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithKey:(id)arg1 operatorType:(unsigned long long)arg2;
- (bool)acceptsDataObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)key;
- (unsigned long long)operatorType;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)_filterIgnoringPrivateMetadata;
- (id)predicateWithProfile:(id)arg1;

@end