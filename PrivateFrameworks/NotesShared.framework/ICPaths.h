/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICPaths : NSObject

+ (id)URLForGroupContainerWithIdentifier:(id)arg1;
+ (id)applicationDataContainerURL;
+ (id)applicationDocumentsURL;
+ (id)attributesForGroupContainerDirectory;
+ (id)importDocumentsURL;
+ (bool)isReadOnlyPersistentStore;
+ (id)managedObjectModelURL;
+ (id)persistentStoreURL;
+ (void)setIsReadOnlyPersistentStore:(bool)arg1;

@end
