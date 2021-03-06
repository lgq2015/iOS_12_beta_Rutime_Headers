/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMAddressBook : NSObject

+ (void*)_abAddressBookRef;
+ (id)_threadedABAddressBookLock;
+ (void*)_threadedABAddressBookRef;
+ (void)_watchLocaleChanges;
+ (void*)abAddressBookRef;
+ (bool)addressBookEnabled;
+ (void)performBlock:(id /* block */)arg1;
+ (void)setAddressBookEnabled:(bool)arg1;

@end
