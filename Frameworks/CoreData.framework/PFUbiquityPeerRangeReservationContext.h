/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityPeerRangeReservationContext : NSObject {
    NSMutableDictionary * _globalIDToLocalURI;
    NSArray * _globalObjectIDs;
    NSManagedObjectContext * _moc;
    long long  _numRangesToReserve;
    NSMutableDictionary * _peerEntityNameRangeStartSet;
    NSPersistentStoreCoordinator * _psc;
    NSPersistentStore * _store;
    NSMutableDictionary * _storeNameToFetchedMetadata;
    NSMutableArray * _unresolvedGlobalObjectIDs;
}

@property (nonatomic, readonly) NSArray *globalObjectIDs;
@property (nonatomic, readonly) NSManagedObjectContext *moc;
@property (nonatomic, readonly) long long numRangesToReserve;
@property (nonatomic, readonly) NSDictionary *peerEntityNameRangeStartSet;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *psc;
@property (nonatomic, readonly) NSPersistentStore *store;

- (id)createLocalIDStringForStoreUUID:(id)arg1 entityName:(id)arg2 andPrimaryKeyString:(id)arg3;
- (bool)createNewPeerRangesWithCache:(id)arg1 Error:(id*)arg2;
- (void)dealloc;
- (id)globalObjectIDs;
- (id)init;
- (id)initWithPersistentStore:(id)arg1 andGlobalObjectIDs:(id)arg2;
- (id)moc;
- (long long)numRangesToReserve;
- (id)peerEntityNameRangeStartSet;
- (void)prepareForRangeReservationWithRangeStart:(id)arg1 andGlobalID:(id)arg2 andEntityName:(id)arg3;
- (id)psc;
- (id)store;

@end
