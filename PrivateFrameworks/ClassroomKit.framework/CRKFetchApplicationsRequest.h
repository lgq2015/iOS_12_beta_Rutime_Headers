/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKFetchApplicationsRequest : CATTaskRequest {
    NSArray * _bundleIdentifiers;
}

@property (nonatomic, copy) NSArray *bundleIdentifiers;

+ (bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (id)bundleIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBundleIdentifiers:(id)arg1;

@end
