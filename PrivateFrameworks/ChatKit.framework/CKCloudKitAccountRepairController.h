/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKCloudKitAccountRepairController : NSObject <AAUIDeviceToDeviceEncryptionHelperDelegate> {
    AAUIDeviceToDeviceEncryptionHelper * _encryptionHelper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AAUIDeviceToDeviceEncryptionHelper *encryptionHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)AAUIDeviceToDeviceEncryptionHelperWithPresentingViewController:(id)arg1;
- (id)AKSecurityUpgradeContextMessages;
- (id)accountStore;
- (id)authenticationContext;
- (Class)authenticationContextClass;
- (void)beginRepairWithPresentingViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)deviceToDeviceEncryptionHelper:(id)arg1 shouldContinueUpgradingUserToHSA2WithCompletion:(id /* block */)arg2;
- (id)encryptionHelper;
- (id)primaryAppleAccount;
- (void)setEncryptionHelper:(id)arg1;

@end