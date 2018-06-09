/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMDeviceListRestrictionsCommand_StatusBooleanDictionary : CEMPayloadBase {
    NSDictionary * _statusANY;
}

@property (nonatomic, copy) NSDictionary *statusANY;

+ (id)allowedStatusKeys;
+ (id)build;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusANY:(id)arg1;
- (id)statusANY;

@end