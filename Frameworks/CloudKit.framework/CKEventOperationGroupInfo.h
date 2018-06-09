/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKEventOperationGroupInfo : NSObject <NSSecureCoding> {
    NSString * _operationGroupID;
    NSString * _operationGroupName;
}

@property (nonatomic, readonly) NSString *operationGroupID;
@property (nonatomic, readonly) NSString *operationGroupName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperationGroup:(id)arg1;
- (id)operationGroupID;
- (id)operationGroupName;

@end