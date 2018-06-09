/* made by EzioChiu.
 */

@protocol HDCloudSyncServerInterface <NSObject>

@required

- (void)remote_createCloudShareWithRecipient:(void *)arg1 sampleTypes:(void *)arg2 maxSampleAge:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSArray *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (NSProgress *)remote_disableCloudSyncAndDeleteAllCloudDataWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (NSProgress *)remote_fetchCloudDescriptionWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)remote_fetchCloudSyncStatusWithCompletion:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSDate *, NSDate *, bool, NSError *, void*
- (NSProgress *)remote_forceCloudResetWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (NSProgress *)remote_forceCloudSyncWithOptions:(void *)arg1 reason:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (NSProgress *)remote_waitOnHealthCloudSyncWithUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (NSProgress *)retmote_fetchCloudSyncProgressWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end