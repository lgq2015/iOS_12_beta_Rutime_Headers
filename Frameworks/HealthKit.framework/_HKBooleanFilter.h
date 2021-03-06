/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKBooleanFilter : _HKFilter {
    bool  _boolValue;
}

@property (nonatomic, readonly) bool boolValue;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)filterWithBoolValue:(bool)arg1;
+ (bool)supportsSecureCoding;

- (bool)acceptsDataObject:(id)arg1;
- (bool)boolValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)predicateWithProfile:(id)arg1;

@end
