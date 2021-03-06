/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFOfflineCacheReplayContext : NSObject {
    NSMutableDictionary * _failureSnapshotsByTemporaryID;
    NSString * _selectedMailboxID;
    NSMutableDictionary * _translatedIDsByTemporaryID;
}

@property (nonatomic, readonly) NSMutableDictionary *failureSnapshotsByTemporaryID;
@property (nonatomic, copy) NSString *selectedMailboxID;
@property (nonatomic, readonly) NSMutableDictionary *translatedIDsByTemporaryID;

- (void)dealloc;
- (id)failureSnapshotsByTemporaryID;
- (id)init;
- (id)selectedMailboxID;
- (void)setSelectedMailboxID:(id)arg1;
- (id)translatedIDsByTemporaryID;

@end
