/* made by EzioChiu.
 */

@protocol VCSyncDataHandling

@required

- (void)applyChangeSet:(void *)arg1 fromSyncServiceWithIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSOrderedSet *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (id)createMessageFromData:(NSData *)arg1;
- (void)deregisterSyncServiceWithIdentifier:(NSString *)arg1;
- (void)getUnsyncedChangesForSyncServiceWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSOrderedSet *, NSError *, void*
- (int)handledMessageType;
- (void)markChangesAsSynced:(void *)arg1 withSyncServiceWithIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSOrderedSet *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)registerSyncService:(id <VCVoiceShortcutSyncService>)arg1 asMaster:(bool)arg2;
- (void)removeSyncStateForSyncServiceWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)resetLocalData:(id*)arg1;
- (VCPBChange *)wrapMessageInVCPBChange:(id)arg1;

@end
