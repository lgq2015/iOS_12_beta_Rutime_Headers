/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMCloudDevice : RMUniquedManagedObject <RMReconcilableObject>

@property (nonatomic, retain) NSSet *apps;
@property (nonatomic, retain) NSData *capabilitiesPlist;
@property (nonatomic, copy) NSString *ckRecordID;
@property (nonatomic, retain) NSData *ckRecordSystemFields;
@property (nonatomic, retain) NSData *deviceInfoPlist;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDate *lastUsageEventDate;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSUUID *sortKey;
@property (nonatomic, retain) NSSet *usageIdentifiers;
@property (nonatomic, retain) NSSet *userDevicePairs;

+ (id)createOrReturnDeviceWithIdentifier:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (id)fetchRequest;
+ (bool)reconcileWithManagedObjectContext:(id)arg1 andUpdateLosers:(id)arg2 error:(id*)arg3;

- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;

@end