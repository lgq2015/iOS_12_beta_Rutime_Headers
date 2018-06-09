/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMKeychainAccess : NSObject

+ (id)addItem:(void*)arg1 toGroup:(id)arg2;
+ (struct __SecCertificate { }*)copyCertificateWithPersistentID:(id)arg1;
+ (struct __SecIdentity { }*)copyIdentityWithPersistentID:(id)arg1;
+ (const void*)copyItemWithPersistentID:(id)arg1;
+ (struct __SecIdentity { }*)createIdentityWithCommonName:(id)arg1 error:(id*)arg2;
+ (id)getCertificateExpirationDate:(struct __SecCertificate { }*)arg1;
+ (id)getCertificatesWithPersistentIDs:(id)arg1;
+ (id)getCommonNamesForCertificate:(struct __SecCertificate { }*)arg1;
+ (id)getIdentityExpirationDate:(struct __SecIdentity { }*)arg1;
+ (id)getIdentityPublicCertificateData:(struct __SecIdentity { }*)arg1;
+ (struct __SecCertificate { }*)getLeafCertificateForTrust:(struct __SecTrust { }*)arg1;
+ (bool)itemExistsInKeychain:(void*)arg1;
+ (bool)removeItemWithPersistentID:(id)arg1;

@end