/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDRecordAncestor : NSObject {
    CKRecordID * _parentID;
    CKDRecordPCSData * _pcsData;
    CKRecordID * _recordID;
}

@property (nonatomic, retain) CKRecordID *parentID;
@property (nonatomic, retain) CKDRecordPCSData *pcsData;
@property (nonatomic, retain) CKRecordID *recordID;

- (void).cxx_destruct;
- (id)parentID;
- (id)pcsData;
- (id)recordID;
- (void)setParentID:(id)arg1;
- (void)setPcsData:(id)arg1;
- (void)setRecordID:(id)arg1;

@end
