/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKCloudFetchZoneChangesOperation : CRKCloudOperation <CRKCloudResetable> {
    CKServerChangeToken * _serverToken;
    CKRecordZoneID * _zoneId;
}

@property (nonatomic, readonly) CKServerChangeToken *serverToken;
@property (nonatomic, readonly) CKRecordZoneID *zoneId;

- (void).cxx_destruct;
- (id)initWithDatabase:(id)arg1;
- (id)initWithDatabase:(id)arg1 zoneId:(id)arg2 serverToken:(id)arg3;
- (void)main;
- (id)resetOperation;
- (id)serverToken;
- (id)zoneId;

@end