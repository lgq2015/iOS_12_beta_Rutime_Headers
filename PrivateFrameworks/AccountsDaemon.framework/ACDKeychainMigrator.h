/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDKeychainMigrator : NSObject {
    ACAccountStore * _accountStore;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_keychainItemFromAttributes:(id)arg1;
- (id)_keychainItemFromAttributesArray:(id)arg1;
- (id)_keychainItemsForAccount:(id)arg1 accountTypeIdentifiers:(id)arg2;
- (void)_migrateUUIDKeychainItems:(id)arg1;
- (void)_validateKeychainItemClass:(id)arg1;
- (id)allKeychainItems;
- (id)init;
- (void)migrateAllKeychainItems;
- (bool)migrateKeychainItem:(id)arg1;

@end