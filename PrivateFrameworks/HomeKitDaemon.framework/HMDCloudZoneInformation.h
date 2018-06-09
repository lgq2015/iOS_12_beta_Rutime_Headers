/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCloudZoneInformation : HMFObject <HMDBackingStoreObjectProtocol, NSSecureCoding> {
    bool  _fetchFailed;
    bool  _firstFetch;
    bool  _handlesCloudRecord;
    NSString * _ownerName;
    long long  _schemaVersion;
    NSUUID * _uuid;
    bool  _zoneCreated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=didFetchFailed, nonatomic) bool fetchFailed;
@property (getter=isFirstFetch, nonatomic) bool firstFetch;
@property (getter=doesHandlesCloudRecord, nonatomic) bool handlesCloudRecord;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *ownerName;
@property (nonatomic) long long schemaVersion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;
@property (getter=isZoneCreated, nonatomic) bool zoneCreated;

+ (id)cloudZoneInformationWithCloudZones:(id)arg1;
+ (id)cloudZonesArrayWithCloudZones:(id)arg1;
+ (id)cloudZonesWithDictionary:(id)arg1;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (bool)didFetchFailed;
- (bool)doesHandlesCloudRecord;
- (id)emptyModelObjectWithChangeType:(unsigned long long)arg1 parent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOwnerName:(id)arg1 uuid:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isFirstFetch;
- (bool)isZoneCreated;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 parent:(id)arg2;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 parent:(id)arg3;
- (id)ownerName;
- (long long)schemaVersion;
- (void)setFetchFailed:(bool)arg1;
- (void)setFirstFetch:(bool)arg1;
- (void)setHandlesCloudRecord:(bool)arg1;
- (void)setOwnerName:(id)arg1;
- (void)setSchemaVersion:(long long)arg1;
- (void)setZoneCreated:(bool)arg1;
- (id)shortDescription;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)updateCloudZoneInformationWithModel:(id)arg1 message:(id)arg2;
- (id)uuid;

@end