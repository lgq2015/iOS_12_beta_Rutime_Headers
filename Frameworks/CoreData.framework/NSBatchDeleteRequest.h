/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSBatchDeleteRequest : NSPersistentStoreRequest {
    NSFetchRequest * _deleteTarget;
    long long  _flags;
    unsigned long long  _resultType;
}

@property (readonly, copy) NSFetchRequest *fetchRequest;
@property unsigned long long resultType;

+ (id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2;

- (void)_resolveEntityWithContext:(id)arg1;
- (bool)_secureOperation;
- (void)_setSecureOperation:(bool)arg1;
- (void)dealloc;
- (id)description;
- (id)encodeForXPC;
- (id)fetchRequest;
- (id)initWithFetchRequest:(id)arg1;
- (id)initWithObjectIDs:(id)arg1;
- (unsigned long long)requestType;
- (unsigned long long)resultType;
- (void)setResultType:(unsigned long long)arg1;
- (void)setShouldPerformSecureOperation:(bool)arg1;
- (bool)shouldPerformSecureOperation;

@end