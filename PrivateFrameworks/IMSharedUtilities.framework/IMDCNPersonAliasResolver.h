/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMDCNPersonAliasResolver : NSObject {
    CNContactStore * _contactStore;
    NSObject<OS_dispatch_queue> * _contactsQueue;
}

@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *contactsQueue;

+ (id)sharedInstance;

- (void)CNRecordIDForAliases:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_fetchContactIdentifierForAlias:(id)arg1;
- (id)_fetchContactRecordIDForAliases:(id)arg1;
- (id)_predicateForAlias:(id)arg1;
- (id)_predicateForEmailAddress:(id)arg1;
- (id)_predicateForPhoneNumber:(id)arg1;
- (id)contactStore;
- (id)contactsQueue;
- (void)dealloc;
- (id)init;
- (bool)isFavoritedContact:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setContactsQueue:(id)arg1;

@end