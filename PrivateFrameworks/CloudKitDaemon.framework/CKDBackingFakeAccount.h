/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDBackingFakeAccount : CKDBackingAccount {
    NSDictionary * _accountBag;
    NSString * _altDsid;
    NSString * _dsid;
    NSObject<OS_dispatch_queue> * _fakeAccountInfoQueue;
    NSString * _identifier;
    NSString * _password;
    NSString * _primaryEmail;
    NSDictionary * _propertyOverrides;
}

@property (nonatomic, retain) NSDictionary *accountBag;
@property (nonatomic, retain) NSString *altDsid;
@property (nonatomic, retain) NSString *dsid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *fakeAccountInfoQueue;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *password;
@property (nonatomic, retain) NSString *primaryEmail;
@property (nonatomic, retain) NSDictionary *propertyOverrides;

+ (Class)_platformBackingAccountClass;
+ (id)fakeAccountWithEmail:(id)arg1 password:(id)arg2 propertyOverrides:(id)arg3;

- (void).cxx_destruct;
- (void)_checkAndLogIfAccountError;
- (id)_initFakeAccountWithEmail:(id)arg1 password:(id)arg2;
- (id)accountBag;
- (id)accountPropertiesForDataclass:(id)arg1;
- (id)altDsid;
- (bool)canAuthWithCloudKit;
- (id)ckAccount;
- (id)cloudKitAuthTokenWithError:(id*)arg1;
- (void)dealloc;
- (id)displayedHostname;
- (id)dsid;
- (id)fakeAccountInfoQueue;
- (id)iCloudAuthTokenWithError:(id*)arg1;
- (bool)iCloudDriveAllowsCellularAccess;
- (id)identifier;
- (bool)isDataclassEnabled:(id)arg1;
- (bool)isFakeAccount;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)password;
- (id)primaryEmail;
- (id)propertyOverrides;
- (void)renewAuthTokenInStore:(id)arg1 withOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setAccountBag:(id)arg1;
- (void)setAltDsid:(id)arg1;
- (void)setDsid:(id)arg1;
- (void)setFakeAccountInfoQueue:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPrimaryEmail:(id)arg1;
- (void)setPropertyOverrides:(id)arg1;
- (void)updateAccountPropertiesAndSaveAccountInStore:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)username;
- (void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 completionHandler:(id /* block */)arg4;

@end