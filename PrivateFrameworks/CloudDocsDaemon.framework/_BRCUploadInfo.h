/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface _BRCUploadInfo : _BRCTransferInfo {
    NSMutableSet * _outOfQuotaDocIDs;
}

@property (nonatomic, readonly) bool allUploadsPendingQuota;
@property (nonatomic, readonly) NSMutableSet *outOfQuotaDocIDs;

- (void).cxx_destruct;
- (bool)allUploadsPendingQuota;
- (void)copyProgressInfoToProgress:(id)arg1 options:(BOOL)arg2;
- (id)description;
- (id)init;
- (id)outOfQuotaDocIDs;
- (void)updateLocalizedDescriptionWithOptions:(BOOL)arg1;

@end
