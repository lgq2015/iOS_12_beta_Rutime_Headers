/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSPersistentHistoryTransaction : NSPersistentHistoryTransaction <NSSecureCoding> {
    NSString * _author;
    NSManagedObjectID * _backingObjectID;
    NSString * _bundleID;
    NSArray * _changes;
    NSString * _contextName;
    NSString * _processID;
    NSData * _queryGeneration;
    long long  _rowIdentifier;
    NSSQLCore * _store;
    NSString * _storeID;
    double  _timestamp;
}

+ (bool)supportsSecureCoding;

- (id)_backingObjectID;
- (void)_setChanges:(id)arg1;
- (id)_userInfoFromChanges;
- (id)author;
- (id)bundleID;
- (id)changes;
- (id)contextName;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 andObjectID:(id)arg2;
- (id)initWithTransactionRow:(long long)arg1 store:(id)arg2 bundleID:(id)arg3 processID:(id)arg4 contextName:(id)arg5 author:(id)arg6 queryGeneration:(id)arg7 timestamp:(double)arg8 changes:(id)arg9;
- (id)initWithTransactionRow:(long long)arg1 store:(id)arg2 bundleID:(id)arg3 processID:(id)arg4 contextName:(id)arg5 author:(id)arg6 queryGeneration:(id)arg7 timestamp:(double)arg8 changes:(id)arg9 objectID:(id)arg10;
- (id)initialQueryGenerationToken;
- (id)objectIDNotification;
- (id)postQueryGenerationToken;
- (id)processID;
- (id)storeID;
- (id)timestamp;
- (id)token;
- (long long)transactionNumber;

@end
