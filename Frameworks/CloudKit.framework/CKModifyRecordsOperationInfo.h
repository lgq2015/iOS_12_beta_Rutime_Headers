/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKModifyRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    bool  _atomic;
    NSData * _clientChangeTokenData;
    NSDictionary * _conflictLosersToResolveByRecordID;
    NSDictionary * _pluginFieldsForRecordDeletesByID;
    NSArray * _recordIDsToDelete;
    NSDictionary * _recordIDsToDeleteToEtags;
    NSArray * _recordsToSave;
    long long  _savePolicy;
    bool  _shouldOnlySaveAssetContent;
    bool  _shouldReportRecordsInFlight;
}

@property (nonatomic) bool atomic;
@property (nonatomic, retain) NSData *clientChangeTokenData;
@property (nonatomic, retain) NSDictionary *conflictLosersToResolveByRecordID;
@property (nonatomic, copy) NSDictionary *pluginFieldsForRecordDeletesByID;
@property (nonatomic, retain) NSArray *recordIDsToDelete;
@property (nonatomic, copy) NSDictionary *recordIDsToDeleteToEtags;
@property (nonatomic, retain) NSArray *recordsToSave;
@property (nonatomic) long long savePolicy;
@property (nonatomic) bool shouldOnlySaveAssetContent;
@property (nonatomic) bool shouldReportRecordsInFlight;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)atomic;
- (id)clientChangeTokenData;
- (id)conflictLosersToResolveByRecordID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)pluginFieldsForRecordDeletesByID;
- (id)recordIDsToDelete;
- (id)recordIDsToDeleteToEtags;
- (id)recordsToSave;
- (long long)savePolicy;
- (void)setAtomic:(bool)arg1;
- (void)setClientChangeTokenData:(id)arg1;
- (void)setConflictLosersToResolveByRecordID:(id)arg1;
- (void)setPluginFieldsForRecordDeletesByID:(id)arg1;
- (void)setRecordIDsToDelete:(id)arg1;
- (void)setRecordIDsToDeleteToEtags:(id)arg1;
- (void)setRecordsToSave:(id)arg1;
- (void)setSavePolicy:(long long)arg1;
- (void)setShouldOnlySaveAssetContent:(bool)arg1;
- (void)setShouldReportRecordsInFlight:(bool)arg1;
- (bool)shouldOnlySaveAssetContent;
- (bool)shouldReportRecordsInFlight;

@end
