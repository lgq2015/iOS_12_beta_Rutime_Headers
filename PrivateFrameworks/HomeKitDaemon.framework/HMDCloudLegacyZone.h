/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCloudLegacyZone : HMDCloudZone {
    NSUUID * _homeDataObjectID;
    CKRecordID * _homeDataRecordID;
    NSUUID * _homeDataV3ObjectID;
    CKRecordID * _homeDataV3RecordID;
    NSUUID * _metadataObjectID;
    CKRecordID * _metadataRecordID;
}

@property (nonatomic, readonly) NSUUID *homeDataObjectID;
@property (getter=isHomeDataRecordAvailable, nonatomic, readonly) bool homeDataRecordAvailable;
@property (nonatomic, readonly) CKRecordID *homeDataRecordID;
@property (nonatomic, readonly) NSUUID *homeDataV3ObjectID;
@property (getter=isHomeDataV3RecordAvailable, nonatomic, readonly) bool homeDataV3RecordAvailable;
@property (nonatomic, readonly) CKRecordID *homeDataV3RecordID;
@property (nonatomic, readonly) NSUUID *metadataObjectID;
@property (getter=isMetadataRecordAvailable, nonatomic, readonly) bool metadataRecordAvailable;
@property (nonatomic, readonly) CKRecordID *metadataRecordID;

+ (void)createLegacyZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(id /* block */)arg5;
+ (id)zoneRootRecordName;
+ (id)zoneSubscriptionName:(id)arg1;

- (void).cxx_destruct;
- (id)createCloudRecordWithObjectID:(id)arg1 recordName:(id)arg2;
- (id)createCloudZoneChangeTemporaryCache:(bool)arg1;
- (bool)doesProcessChangeEvenIfDecryptionFails;
- (id)homeDataModelWithPushDataPush:(id)arg1;
- (id)homeDataObjectID;
- (id)homeDataRecordID;
- (id)homeDataV3ModelWithPushDataPush:(id)arg1;
- (id)homeDataV3ObjectID;
- (id)homeDataV3RecordID;
- (bool)isHomeDataRecordAvailable;
- (bool)isHomeDataV3RecordAvailable;
- (bool)isMetadataRecordAvailable;
- (id)metadataModelWithPushDataPush:(id)arg1;
- (id)metadataObjectID;
- (id)metadataRecordID;
- (void)setServerChangeToken:(id)arg1;

@end