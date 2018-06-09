/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMCloudUser : RMUniquedManagedObject <RMReconcilableObject>

@property (nonatomic, copy) NSString *ckRecordID;
@property (nonatomic, retain) NSData *ckRecordSystemFields;
@property (nonatomic, copy) NSNumber *dsid;
@property (nonatomic) bool isMe;
@property (nonatomic) bool isOrganizer;
@property (nonatomic, copy) NSString *memberType;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) RMCloudOrganization *organization;
@property (nonatomic) short role;
@property (nonatomic, copy) NSUUID *sortKey;
@property (nonatomic, copy) NSString *uri;
@property (nonatomic, retain) NSSet *userDevicePairs;

+ (id)fetchRequest;
+ (bool)reconcileWithManagedObjectContext:(id)arg1 andUpdateLosers:(id)arg2 error:(id*)arg3;

- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;

@end