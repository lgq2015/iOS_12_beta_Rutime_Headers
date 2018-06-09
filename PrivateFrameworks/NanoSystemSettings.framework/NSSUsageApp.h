/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/NanoSystemSettings
 */

@interface NSSUsageApp : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSString * _bundleVersion;
    unsigned long long  _dataSize;
    unsigned long long  _dynamicSize;
    NSString * _name;
    unsigned long long  _sharedSize;
    unsigned long long  _staticSize;
    unsigned long long  _totalSize;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSString *bundleVersion;
@property (nonatomic) unsigned long long dataSize;
@property (nonatomic) unsigned long long dynamicSize;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) unsigned long long sharedSize;
@property (nonatomic) unsigned long long staticSize;
@property (nonatomic) unsigned long long totalSize;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (unsigned long long)dataSize;
- (id)description;
- (unsigned long long)dynamicSize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setDataSize:(unsigned long long)arg1;
- (void)setDynamicSize:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setStaticSize:(unsigned long long)arg1;
- (void)setTotalSize:(unsigned long long)arg1;
- (unsigned long long)sharedSize;
- (unsigned long long)staticSize;
- (unsigned long long)totalSize;

@end