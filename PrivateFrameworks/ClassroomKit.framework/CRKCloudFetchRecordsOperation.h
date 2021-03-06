/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKCloudFetchRecordsOperation : CRKCloudOperation <CRKCloudResetable> {
    NSArray * _recordIds;
}

@property (nonatomic, readonly) NSArray *recordIds;

- (void).cxx_destruct;
- (id)initWithDatabase:(id)arg1;
- (id)initWithDatabase:(id)arg1 recordIds:(id)arg2;
- (void)main;
- (id)recordIds;
- (id)resetOperation;

@end
