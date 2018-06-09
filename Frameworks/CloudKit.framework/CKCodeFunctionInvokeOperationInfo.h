/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKCodeFunctionInvokeOperationInfo : CKDatabaseOperationInfo {
    NSString * _functionName;
    NSData * _serializedParameters;
    NSString * _serviceName;
}

@property (nonatomic, copy) NSString *functionName;
@property (nonatomic, copy) NSData *serializedParameters;
@property (nonatomic, copy) NSString *serviceName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)functionName;
- (id)initWithCoder:(id)arg1;
- (id)serializedParameters;
- (id)serviceName;
- (void)setFunctionName:(id)arg1;
- (void)setSerializedParameters:(id)arg1;
- (void)setServiceName:(id)arg1;

@end