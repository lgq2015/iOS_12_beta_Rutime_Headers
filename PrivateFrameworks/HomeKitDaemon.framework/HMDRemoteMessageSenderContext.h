/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteMessageSenderContext : HMFObject <HMFObject, NSCopying> {
    HMDAccountHandle * _accountHandle;
    HMDAccountIdentifier * _accountIdentifier;
    HMDDeviceHandle * _deviceHandle;
    HMDHomeKitVersion * _deviceVersion;
}

@property (readonly, copy) HMDAccountHandle *accountHandle;
@property (readonly, copy) HMDAccountIdentifier *accountIdentifier;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HMDDeviceHandle *deviceHandle;
@property (readonly, copy) HMDHomeKitVersion *deviceVersion;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accountHandle;
- (id)accountIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceHandle;
- (id)deviceVersion;
- (id)initWithDeviceHandle:(id)arg1 accountHandle:(id)arg2 accountIdentifier:(id)arg3 deviceVersion:(id)arg4;
- (id)propertyDescription;

@end